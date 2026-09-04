using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.IO;

namespace Excel {
    public enum EvalTokenType { Value, Error, CycleStart}
    public struct EvalToken {
        public CellError Errortype;
        public int Value { get; private set; }
        public EvalTokenType ResultType { get; private set; }

        public EvalToken(int value) {
            Value = value;
            ResultType = EvalTokenType.Value;
        }
        public EvalToken(EvalTokenType resultType) {
            if (resultType == EvalTokenType.Value) {
                throw new ArgumentException("Cannot define empty EvalResult of type Value.");
            }
            ResultType = resultType;
        }
        public EvalToken(CellError errortype){
            Errortype = errortype;
            ResultType = EvalTokenType.Error;
        }
    }

    public interface ICellGetter
    {
        ref Cell GetCell(string address);
    }

    public class Evaluator {
        ICellGetter _sheet;
        public Evaluator(ICellGetter sheet){
            _sheet = sheet;
        }

        public Table EvaluateTable(Table table) {

            foreach (Cell[] row in table.Entries) {
                for (int i = 0; i < row.Length; i++) {
                    ref Cell cell = ref row[i];
                    if (cell is UnvisitedCell) {
                        Evaluate(ref cell);
                    }
                }
            }
            return table;
        }


        EvalToken Evaluate(ref Cell cell) {
           switch(cell) {
                case EmptyCell _: return new EvalToken(0);
                case ValueCell valueCell : return new EvalToken(valueCell.Value);
                case ErrorCell _: return new EvalToken(EvalTokenType.Error);
                case UnvisitedCell unvisitedCell:
                

                    EvalToken evalToken = EvaluateUnvisited(ref unvisitedCell);

                    switch (evalToken) {
                        case EvalToken { ResultType: EvalTokenType.Value }:
                            cell = new ValueCell(evalToken.Value);
                            break;
                        case EvalToken { ResultType: EvalTokenType.Error, Errortype: CellError.Error }:
                            cell = new ErrorCell(CellError.Error);
                            break;
                        case EvalToken { ResultType: EvalTokenType.Error, Errortype: CellError.Div0 }:
                            cell = new ErrorCell(CellError.Div0);
                            break;
                        case EvalToken { ResultType: EvalTokenType.CycleStart }:
                            return new EvalToken(CellError.Cycle);
                            break;
                        case EvalToken { ResultType: EvalTokenType.Error, Errortype: CellError.Cycle }:
                            cell = new ErrorCell(CellError.Cycle);
                            if (unvisitedCell.IsCycleEnd) {
                                return new EvalToken(CellError.Error);
                            }
                            break;

                    }
                    
                    return evalToken;
            }
            throw new NotImplementedException("Unknown cell type:" + cell.GetType().FullName);
        }

        EvalToken EvaluateUnvisited(ref UnvisitedCell unvisitedCell) {
            if (unvisitedCell.IsOpen) {
                unvisitedCell.MarkCycleEnd();
                return new EvalToken(EvalTokenType.CycleStart);
            }

            unvisitedCell.Open();

            ref Cell leftOperand = ref _sheet.GetCell(unvisitedCell.LeftAdress);
            ref Cell rightOperand = ref _sheet.GetCell(unvisitedCell.RightAdress);



            EvalToken leftEval = Evaluate(ref leftOperand);
            EvalToken rightEval = Evaluate(ref rightOperand);

            if (leftEval.ResultType == EvalTokenType.Error || rightEval.ResultType == EvalTokenType.Error) {
                if (leftEval.Errortype == CellError.Cycle || rightEval.Errortype == CellError.Cycle) {
                    return new EvalToken(CellError.Cycle);
                }
                return new EvalToken(CellError.Error);
            }

            int val;
            switch (unvisitedCell.Operator) {
                case Operator.Plus: val = leftEval.Value + rightEval.Value; break;
                case Operator.Minus: val = leftEval.Value - rightEval.Value; break;
                case Operator.Multiply: val = leftEval.Value * rightEval.Value; break;
                case Operator.Divide:
                    if (rightEval.Value == 0) { return new EvalToken(CellError.Div0); }
                    val = leftEval.Value / rightEval.Value; break;
                default: val = 0; break;
            }       
            return new EvalToken(val);
        }
    }
}






