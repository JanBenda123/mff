using System;
using NezarkaBookstore;
using NezarkaTemplates;
using System.Text;

namespace NezarkaDotNet {
    public class URL {
        public string url{ get; private set; }
        string[] _segmentedUrl;
        public URL(string _url) {
            url = _url;
            _segmentedUrl = _url.Split('/');
        }

        public int EndToInt() {
            try {
                return int.Parse(_segmentedUrl[_segmentedUrl.Length-1]);
            }
            catch { throw new Exception("URL end is not an int"); }
        }
        public string ReturnPopped() {
            string lastElement = _segmentedUrl[_segmentedUrl.Length-1];
            _segmentedUrl[_segmentedUrl.Length - 1] = "";           //temporarily replaces the last part
            string toReturn = String.Join("/", _segmentedUrl);      //Joins the string without the last part
            _segmentedUrl[_segmentedUrl.Length - 1] = lastElement;  //Reverts the change
            return toReturn;
        }
    }
    

    internal class Controller {
        ModelStore _store;
        View _view;
        public Controller(ModelStore store) {
            _store = store;
            _view = new View(store);    
        }

        string ErrorPage() {
            return _view.RenderInvalidRequestView().ToString();
        }

        public string ProcessCommand(string[] commandWords) {
            switch (commandWords[0]) {
                case "GET":
                    int customerId = 0; //placeholder value - Will be reassigned
                    try { customerId = int.Parse(commandWords[1]); } catch { return ErrorPage(); }
                    return ProcessGET(commandWords[2], customerId);
                default: return ErrorPage();
            }
        }

        string ProcessGET(string url, int customerID) {
            Customer customer = _store.GetCustomer(customerID);
            if (customer == null) {
                return ErrorPage();
            }
            StringBuilder HTMLPage = new StringBuilder(); //will be replaced
            bool caseTriggered = false;

            switch (url) { //Covers urls without argument
                case "http://www.nezarka.net/Books": 
                    caseTriggered = true;
                    HTMLPage = _view.RenderBookstoreView(customer);
                    break;
                case "http://www.nezarka.net/ShoppingCart":
                    caseTriggered = true;
                    HTMLPage = _view.RenderShoppingCartView(customer);
                    break;         
            }
            if (caseTriggered) {
                return HTMLPage.ToString();
            }


            URL URLobj = new URL(url);
            int bookId;
            Book book;
            try { bookId = URLobj.EndToInt(); } catch { return ErrorPage(); }
            try { book = _store.GetBook(bookId); } catch { return ErrorPage(); }
            if (book == null) { return ErrorPage(); }
            switch (URLobj.ReturnPopped()) { //Covers urls with argument
                case "http://www.nezarka.net/Books/Detail/":
                    caseTriggered = true;
                    HTMLPage = _view.RenderBookDetailView(customer, book);
                    break;
                case "http://www.nezarka.net/ShoppingCart/Add/":
                    caseTriggered = true;
                    try {
                        customer.ShoppingCart.AddItem(bookId);
                    }
                    catch {
                        return ErrorPage();
                    }
                    HTMLPage = _view.RenderShoppingCartView(customer);
                    break;
                case "http://www.nezarka.net/ShoppingCart/Remove/":
                    try {
                        customer.ShoppingCart.RemoveItem(bookId);
                    }
                    catch {
                        return ErrorPage();
                    }
                    caseTriggered = true;
                    HTMLPage = _view.RenderShoppingCartView(customer);
                    break;
            }
            if (caseTriggered) {
                return HTMLPage.ToString();
            }

            return ErrorPage();
        }
       
    }
}
