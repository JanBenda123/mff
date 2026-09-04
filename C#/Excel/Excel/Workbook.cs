using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IO;
namespace Excel {
    public class Workbook : ICellGetter {
        Table _mainTable;
        Dictionary<string, Table> _sideTables = new Dictionary<string, Table>();
        Cell _errorCell = new ErrorCell(CellError.Error);
        public Workbook(Table mainTable) {
            _mainTable = mainTable;
        }
        public static bool ValidateAdress(string address) {
            string[] addresses = address.Split('!');
            switch (addresses.Length) {
                case 1: return Table.ValidateAdress(address);
                case 2: return Table.ValidateAdress(addresses[1]);
                default: return false;
            }
        }
        Table AddTable(string tableName) {
            Table table;
            try {
                Input input = new Input(new StreamReader(tableName + ".sheet"));
                TableParser tp = new TableParser(input);
                table = tp.Parse(); 
            }
            catch(FileLoadException e) {
                table = null;
            }
            _sideTables.Add(tableName, table);

            return table; 
        }
        public ref Cell GetCell(string address) {
            if (address.IndexOf('!') == -1) {
                return ref _mainTable.GetCell(address);
            }

            string[] addresses = address.Split('!');
            Table table;
            if (!_sideTables.ContainsKey(addresses[0])) {
                table = AddTable(addresses[0]);
            }
            else {
                table = _sideTables[addresses[0]];
            }

            if (table == null) {
                return ref _errorCell;
            }
            return ref table.GetCell(addresses[1]);



        }

    }
}
