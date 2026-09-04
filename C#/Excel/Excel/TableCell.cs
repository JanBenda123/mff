using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace Excel {
    public class Table:ICellGetter {
        public Cell[][] Entries = new Cell[][] { };
        Cell _emptyCell = new EmptyCell();
        public Table(Cell[][] table){
            Entries = table;
        }
        public ref Cell GetCell(string address) {
            int[] index = AddressToIndex(address);
            if (Entries.Length - 1 < index[1]) {
                return ref _emptyCell;
            }
            if (Entries[index[1]].Length - 1 < index[0]) {
                return ref _emptyCell;
            }
            return ref Entries[index[1]][index[0]];
        }
        public static int[] AddressToIndex(string address) {
            int i = 0;
            int valx = 0;
            while (address[i] is char c && c>=65 && c<= 90) {
                valx *= 26;
                valx += (int) c - 65;
                i++;
            }
            valx += 26 * ((int)Math.Pow(26, i-1) - 1) / (26 - 1);
            int valy;
            if (!int.TryParse(address.Substring(i), out valy)) {
                return new int[] { };
            }
            valy -= 1;
            return new int[2] {valx, valy };
        }
        public static bool ValidateAdress(string address) {
            int i = 0;
            bool isValid = false;
            while (address.Length > i && address[i] is char c1 && c1 >= 65 && c1 <= 90) {
                i++;
            }
            if (i == 0) return false; // there was no column index
            if (address.Length > i && address[i] is char c2 && c2 >= 49 && c2 <= 57){
                i++;
                isValid = true; //We must  encounter a number after column index 
            }
            while (address.Length > i && address[i] is char c3 && c3 >= 48 && c3 <= 57) {
                i++; //scroll past the row index
            }
            if (i != address.Length) { // if there is some balast left, set it to false
                isValid = false;
            }
            return isValid;
        }
    }
    public abstract class Cell {
        public override abstract string ToString();
    }
    public enum Operator {Plus, Minus, Multiply, Divide };
    public class UnvisitedCell : Cell {
        public bool IsOpen { get; private set; } = false;
        public bool IsCycleEnd { get; private set; } = false;
        public Operator Operator { get; private set; }
        public string LeftAdress { get; private set; }
        public string RightAdress { get; private set; }
        //public bool isOpen //for cycle detecion
        public UnvisitedCell(Operator Operator, string LeftAdress, string RightAdress) {
            this.Operator = Operator;
            this.LeftAdress = LeftAdress;
            this.RightAdress = RightAdress;
        }
        public void Open() {
            IsOpen = true;
        }

        public void MarkCycleEnd() {
            IsCycleEnd = true;
        }
        public override string ToString() {
            return LeftAdress + ", " + RightAdress;
        }


    }
    public abstract class ClosedCell : Cell {
        public int? Value {get ; protected set; }
    }
    public class ValueCell : ClosedCell {
        new public int Value = 0;
        public ValueCell(int value){
            this.Value = value;
        }
        public override  string ToString() {
            return this.Value.ToString();
        }

    }
    public class EmptyCell : ClosedCell {
        public EmptyCell() {
            this.Value = 0;
        }
        public override string ToString() {
            return "[]";
        }

    }
    public enum CellError { Error, Div0, Cycle, MisOp, Formula, InVal}
    public class ErrorCell : ClosedCell {
        CellError Error;
        public ErrorCell(CellError error) {
            Value = null;
            Error = error;
        }
        public override string ToString() {
            return Error switch {
                CellError.InVal => "#INVVAL",
                CellError.MisOp => "#MISSOP",
                CellError.Formula => "#FORMULA",
                CellError.Error => "#ERROR",
                CellError.Div0 => "#DIV0",
                CellError.Cycle => "#CYCLE"
            };
        }
    }

}
