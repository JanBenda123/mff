using System;
using System.Collections.Generic;
using System.Diagnostics.Tracing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace ZapoctovvTest {
    public class DB {
        public Dictionary<string, Table> _tables { get; private set; } = new Dictionary<string, Table>();

        public DB(){
           
        }
        public Table GetTable(string tableName) {
            if (_tables.ContainsKey(tableName)) { 
                return _tables[tableName];
            }
            return null;
        }
        public bool AddTable(string tableName, Table table) {
            if (!_tables.ContainsKey(tableName)) {
                _tables[tableName] = table;
                return true;
            }
            return false;
        }

    }

    public class Table {
        public string[] colNames;
        public List<Row> rows = new List<Row>();
        public Table(string[] colNames) {
            this.colNames = colNames;
        }
        public int GetColNumber(string colName) {
            return Array.IndexOf(colNames, colName);
        }

        public void AppendRow(Row row) {
            rows.Add(row);
        }
    }

    public class Row {
        public int[] values;
        public Row(int[] values) 
        {
            this.values = values;
        }
    }
}
