using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Expressions;
using System.Text;
using System.Threading.Tasks;
using IO;

namespace ZapoctovvTest {
    public class Controller {
        DB _db;
        Output _output = new Output(Console.Out);
        public Controller(Output output) {
            _db = new DB();
            _output = output;
        }
        public void ProcessInput(Input input) {
            Token token;
            Queue<Token> commandTokens = new Queue<Token>();
            while ((token = input.GetNextToken()).GetType() != TokenType.EoI) {
                if (token.GetType() == TokenType.EoL) {
                    ProcessCommand(commandTokens);
                    commandTokens = new Queue<Token>();
                    continue;
                }
                commandTokens.Enqueue(token);
            }
        }


        public void ProcessCommand(Queue<Token> commandTokens) {
            if (commandTokens.Count == 0) { return; }
            string command = commandTokens.Dequeue().ToString();

            switch (command) {
                case "CREATE_TABLE": ProcessCommandCreate(commandTokens); break;
                case "SELECT_FROM":ProcessCommandSelect(commandTokens); break;
                case "INSERT_INTO":ProcessCommandInsert(commandTokens); break;
                case "UPDATE": ProcessCommandUpdate(commandTokens); break;
                case "LOAD": ProcessCommandLoad(commandTokens); break;
                case "SAVE": ProcessCommandSave(commandTokens); break;
                default: throw new Exception("Unknown Command");
            }

            
        }
        void ProcessCommandCreate(Queue<Token> paramTokens) {
            string tableName = paramTokens.Dequeue().ToString();
            if (_db.GetTable(tableName) != null) {
                _output.WriteLine($"Invalid table name '{tableName}'");
                return;
            }
            List<string> colNames = new List<string>();
            foreach (Token token in paramTokens) {
                colNames.Add(token.ToString());
            }
            _db.AddTable(tableName, new Table(colNames.ToArray()));
        }
        void ProcessCommandSelect(Queue<Token> paramTokens) {
            string tableName = paramTokens.Dequeue().ToString();
            Table table = _db.GetTable(tableName);
            if (table == null) {
                _output.WriteLine($"Invalid table name '{tableName}'");
                return;
            }


            List<int> colIDs = new List<int>();
            List<string> colnames = new List<string>();
            foreach (Token token in paramTokens) {
                string colName = token.ToString();
                int colID = table.GetColNumber(colName);
                if (colID == -1) {
                    _output.WriteLine($"Invalid column name '{colName}'");
                    return;
                }
                colnames.Add(colName);
                colIDs.Add(colID);
            }


            bool isFirst = true;
            foreach(string colName in colnames) {
                if (!isFirst) {
                    _output.Write(",");
                }
                isFirst = false;
                _output.Write(colName);

            }
            isFirst = true;
            _output.PrintNewlines(1);

            foreach (Row row in table.rows) {
                isFirst = true;
                foreach (int colid in colIDs) {
                    if (!isFirst) {
                        _output.Write(",");
                    }
                    isFirst = false;
                    _output.Write(row.values[colid]);
                }
                _output.PrintNewlines(1);
            }
        }
        void ProcessCommandInsert(Queue<Token> paramTokens) {
            string tableName = paramTokens.Dequeue().ToString();
            Table table = _db.GetTable(tableName);
            if (table == null) {
                _output.WriteLine($"Invalid table name '{tableName}'");
                return;
            }

            List<int> values = new List<int>();
            foreach (Token token in paramTokens) {
                values.Add(int.Parse(token.ToString()));
            }
            table.AppendRow(new Row(values.ToArray()));
        }
        void ProcessCommandUpdate(Queue<Token> paramTokens) {
            string tableName = paramTokens.Dequeue().ToString();
            Table table = _db.GetTable(tableName);
            if (table == null) {
                _output.WriteLine($"Invalid table name '{tableName}'");
                return;
            }

            

            string targetColName = paramTokens.Dequeue().ToString();
            int targetValue = int.Parse(paramTokens.Dequeue().ToString());
            string compareColName = paramTokens.Dequeue().ToString();
            char oper = paramTokens.Dequeue().ToString()[0];
            int compareValue = int.Parse(paramTokens.Dequeue().ToString());

            int targetColumnId = table.GetColNumber(targetColName);
            if (targetColumnId == -1) {
                _output.WriteLine($"Invalid column name '{targetColName}'");
                return;
            }
            int compareColumnId = table.GetColNumber(compareColName);
            if (compareColumnId == -1) {
                _output.WriteLine($"Invalid column name '{compareColName}'");
                return;
            }


            foreach (Row row in table.rows) {
                if (Check(row.values[compareColumnId], oper, compareValue)) {
                    row.values[targetColumnId] = targetValue;
                }
            }


        }
        bool Check(int val1, char oper, int val2) {
            switch (oper) {
                case '<': return val1 < val2;
                case '>': return val1 > val2;
                case '=': return val1 == val2;
            }
            return false;
        }
        void ProcessCommandLoad(Queue<Token> paramTokens) {
            string filename = paramTokens.Dequeue().ToString();
            try {
                Input input = new Input(filename);
                ProcessInput(input);
                input.Dispose();
            }
            catch (FileNotFoundException){
                _output.WriteLine($"Could not find file '{filename}'");
            }


        }
        void ProcessCommandSave(Queue<Token> paramTokens) {
            string filename = paramTokens.Dequeue().ToString();
            Output fileOutput = new Output(new StreamWriter(filename));
            foreach(KeyValuePair<string, Table> entry  in _db._tables) {
                fileOutput.PrintTable(entry.Value, entry.Key);
            }
        }
    }
}
