using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IO;

using System.IO;

namespace Excel {
    public class TableParser {
        Input _input;
        public TableParser(Input input) {
            _input = input;
        }

        public Table Parse() {
            Token token;
            List<Cell[]> table = new List<Cell[]> { };
            List <Cell> tempRow = new List<Cell> { };
            bool hitEOI = false;
            while (!hitEOI) { 
                token = _input.GetNextToken();
                switch (token.GetType()) { 
                    case TokenType.Word:
                        tempRow.Add(ParseCell(token.GetString()));
                        break;
                    case TokenType.EoL:
                        table.Add( tempRow.ToArray());
                        tempRow = new List<Cell> { };
                        break;
                    case TokenType.EoI:
                        table.Add( tempRow.ToArray());
                        hitEOI = true;
                        break;
                }
            }
            return new Table(table.ToArray());
        }

        Cell ParseCell(string cellString) {
            if (cellString == "[]") {
                return new EmptyCell();
            }

            if (int.TryParse(cellString,out _)) {
                return new ValueCell(int.Parse(cellString));
            }

            if (cellString[0] == '=') {
                char[] operators = new char[] { '+', '-', '*', '/' };
                string[] operands = cellString.Substring(1).Split(operators);
                int opIndex = cellString.IndexOfAny(operators);
                if (opIndex == -1) {
                    return new ErrorCell(CellError.MisOp);
                }
                char op = cellString[opIndex];
                Operator cellOperator;
                switch (op) {
                    case '+': cellOperator = Operator.Plus;break;
                    case '-': cellOperator = Operator.Minus; break;
                    case '*': cellOperator = Operator.Multiply; break;
                    case '/': cellOperator = Operator.Divide; break;
                    default: throw new Exception("Unknown Operator");
                }

                if (!Workbook.ValidateAdress(operands[0]) || !Workbook.ValidateAdress(operands[1])) {
                    return new ErrorCell(CellError.Formula);
                }
                return new UnvisitedCell(cellOperator, operands[0], operands[1]);
            }
            return new ErrorCell(CellError.InVal);
            throw new ArgumentException("Invalid cell String: " + cellString);
        }
    }
}
