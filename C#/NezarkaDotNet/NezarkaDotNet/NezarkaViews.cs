using NezarkaBookstore;
using NezarkaTemplates;
using System.Text;
using System;
using static System.Formats.Asn1.AsnWriter;

namespace NezarkaDotNet {
    class View {
        ModelStore _store;
        public View(ModelStore model) {
            _store = model;
        }
        public StringBuilder RenderBookstoreView(Customer customer) {
            
            StringBuilder sb = Templates.GenerateHeaderWithBeginHTML(customer.FirstName, customer.ShoppingCart.Count);

            sb.Append(Templates.GenerateBooksTableStartHTML());
            bool wasFirst = true;
            int booksInRow = 0;
            if (_store.books.Count > 0) {
                sb.Append(new StringBuilder("\t\t<tr>\n"));
                foreach (Book book in _store.books) {
                    if (!wasFirst && booksInRow == 3) { sb.Append(Templates.GenerateBooksTableRowSeparatorHTML()); booksInRow = 0; }
                    wasFirst = false;
                    sb.Append(Templates.GenerateBooksTableEntryHTML(book.Id, book.Title, book.Author, book.Price));
                    booksInRow++;
                }
                sb.Append(new StringBuilder("\t\t</tr>\n"));
            }
            
            sb.Append(Templates.GenerateBooksTableEndHTML());
            sb.Append(Templates.GenerateEndHTML());

            return sb;
        }
        public StringBuilder RenderShoppingCartView(Customer customer) {
            StringBuilder sb = Templates.GenerateHeaderWithBeginHTML(customer.FirstName, customer.ShoppingCart.Count);

            if (customer.ShoppingCart.CountOfBookedItems > 0) {
                sb.Append(Templates.GenerateShoppingCartStartHTML());

                bool wasFirst = true;
                foreach (ShoppingCartItem item in customer.ShoppingCart.Items) {
                    if (!wasFirst) { 
                        sb.Append(Templates.GenerateShoppingCartRowSeparatorHTML()); 
                    }
                    wasFirst = false;
                    Book book = _store.GetBook(item.BookId);
                    if (item.Count == 1) {
                        sb.Append(Templates.GenerateShoppingCartTableEntrySingleHTML(book.Id, book.Title, item.Count, book.Price));
                    }
                    else {
                        sb.Append(Templates.GenerateShoppingCartTableEntryHTML(book.Id, book.Title, item.Count, book.Price, item.TotalItemPrice(book.Price)));
                    }
                }
                sb.Append(Templates.GenerateShoppingCartEndHTML(customer.ShoppingCart.CountTotalPrice(_store)));
            }  
            else    {
                sb.Append(Templates.GenerateEmptyShoppingCartHTML());
            }
            sb.Append(Templates.GenerateEndHTML());
            return sb;
        }
        public StringBuilder RenderBookDetailView(Customer customer,Book book) {
            StringBuilder sb = Templates.GenerateHeaderWithBeginHTML(customer.FirstName, customer.ShoppingCart.Count);

            sb.Append(Templates.GenerateBookDetailHTML(book.Title,book.Author,book.Price,book.Id));

            sb.Append(Templates.GenerateEndHTML());
            return sb;
        }
        public StringBuilder RenderInvalidRequestView() {
            StringBuilder sb = Templates.GenerateBeginHTML();
            sb.Append(Templates.GenerateInvalidRequestHTML());
            sb.Append(Templates.GenerateEndHTML());
            return sb;
        }
    }

}
