using NezarkaBookstore;
using NezarkaDotNet;
using System;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NezarkaTemplates {
    class Templates{
        public static StringBuilder GenerateBeginHTML() {
            string str = "<!DOCTYPE html>\n";
            str += "<html lang=\"en\" xmlns=\"http://www.w3.org/1999/xhtml\">\n";
            str += "<head>\n";
            str += "\t<meta charset=\"utf-8\" />\n";
            str += "\t<title>Nezarka.net: Online Shopping for Books</title>\n";
            str += "</head>\n";
            str += "<body>\n";
            return new StringBuilder(str);
        }
        public static StringBuilder GenerateEndHTML() {
            string str = "</body>\n";
            str += "</html>\n";
            return new StringBuilder(str);
        }
        public static StringBuilder GenerateHeaderHTML(string customerName, int itemsInCart) {
            string str = "\t<style type=\"text/css\">\r\n\t\ttable, th, td {\r\n\t\t\tborder: 1px solid black;\r\n\t\t\tborder-collapse: collapse;\r\n\t\t}\r\n\t\ttable {\r\n\t\t\tmargin-bottom: 10px;\r\n\t\t}\r\n\t\tpre {\r\n\t\t\tline-height: 70%;\r\n\t\t}\r\n\t</style>\r\n\t<h1><pre>  v,<br />Nezarka.NET: Online Shopping for Books</pre></h1>\r\n\t" + customerName + ", here is your menu:\r\n\t<table>\r\n\t\t<tr>\r\n\t\t\t<td><a href=\"/Books\">Books</a></td>\r\n\t\t\t<td><a href=\"/ShoppingCart\">Cart (" + itemsInCart + ")</a></td>\r\n\t\t</tr>\r\n\t</table>\n";
            return new StringBuilder(str);
        }

        public static StringBuilder GenerateHeaderWithBeginHTML(string customerName, int itemsInCart) {

            return GenerateBeginHTML().Append(GenerateHeaderHTML(customerName, itemsInCart));
        }




        public static StringBuilder GenerateBooksTableStartHTML() {
            string str = "\tOur books for you:\n";
            str += "\t<table>\n";
            //str += "\t\t<tr>\n";

            return new StringBuilder(str);
        }
        public static StringBuilder GenerateBooksTableEntryHTML(int bookId, string bookName, string authorName, decimal bookPrice) {
            string str = "";
            str += "\t\t\t<td style=\"padding: 10px;\">\n";
            str += $"\t\t\t\t<a href=\"/Books/Detail/{bookId}\">{bookName}</a><br />\n";
            str += $"\t\t\t\tAuthor: {authorName}<br />\n";
            str += $"\t\t\t\tPrice: {bookPrice} EUR &lt;<a href=\"/ShoppingCart/Add/{bookId}\">Buy</a>&gt;\n";
            str += "\t\t\t</td>\n";

            return new StringBuilder(str);
        }
        public static StringBuilder GenerateBooksTableEndHTML() {
            string str = "";
            //str += "\t\t</tr>\n";
            str += "\t</table>\n";
            return new StringBuilder(str);
        }
        public static StringBuilder GenerateBooksTableRowSeparatorHTML() {
            return new StringBuilder("\t\t</tr>\n\t\t<tr>\n");
        }



        public static StringBuilder GenerateBookDetailHTML(string bookName, string bookAuthor, decimal bookPrice, int bookId) {
            string str = "\tBook details:\n";
            str += $"\t<h2>{bookName}</h2>\n";
            str += "\t<p style=\"margin-left: 20px\">\n";
            str += $"\tAuthor: {bookAuthor}<br />\n";
            str += $"\tPrice: {bookPrice} EUR<br />\n";
            str += "\t</p>\n";
            str += $"\t<h3>&lt;<a href=\"/ShoppingCart/Add/{bookId}\">Buy this book</a>&gt;</h3>\n";

            return new StringBuilder(str);

        }



        public static StringBuilder GenerateEmptyShoppingCartHTML() {
            return new StringBuilder("\tYour shopping cart is EMPTY.\n");
        }
        public static StringBuilder GenerateShoppingCartRowSeparatorHTML() {
            return new StringBuilder("\t\t</tr>\n\t\t<tr>\n");
        }
        public static StringBuilder GenerateShoppingCartStartHTML() {
            string str = "\tYour shopping cart:\n";
            str += "\t<table>\n";
            str += "\t\t<tr>\n";
            str += "\t\t\t<th>Title</th>\n";
            str += "\t\t\t<th>Count</th>\n";
            str += "\t\t\t<th>Price</th>\n";
            str += "\t\t\t<th>Actions</th>\n";
            str += "\t\t</tr>\n";
            str += "\t\t<tr>\n";
            return new StringBuilder(str);
        }
        public static StringBuilder GenerateShoppingCartEndHTML(decimal totalPrice) {
            string str = "\t\t</tr>\n";
            str += "\t</table>\n";
            str += $"\tTotal price of all items: {totalPrice} EUR\n";
            return new StringBuilder(str);
        }
        public static StringBuilder GenerateShoppingCartTableEntryHTML(int itemId,string itemName, int numberOfSelectedItems, decimal itemPrice, decimal totalItemPrice) {
            string str = $"\t\t\t<td><a href=\"/Books/Detail/{itemId}\">{itemName}</a></td>\n";
            str += $"\t\t\t<td>{numberOfSelectedItems}</td>\n";
            str += $"\t\t\t<td>{numberOfSelectedItems} * {itemPrice} = {totalItemPrice} EUR</td>\n";
            str += $"\t\t\t<td>&lt;<a href=\"/ShoppingCart/Remove/{itemId}\">Remove</a>&gt;</td>\n";
            return new StringBuilder(str);
        }
        public static StringBuilder GenerateShoppingCartTableEntrySingleHTML(int itemId, string itemName, int numberOfSelectedItems, decimal itemPrice) {
            string str = $"\t\t\t<td><a href=\"/Books/Detail/{itemId}\">{itemName}</a></td>\n";
            str += $"\t\t\t<td>{numberOfSelectedItems}</td>\n";
            str += $"\t\t\t<td>{itemPrice} EUR</td>\n";
            str += $"\t\t\t<td>&lt;<a href=\"/ShoppingCart/Remove/{itemId}\">Remove</a>&gt;</td>\n";
            return new StringBuilder(str);
        }



        public static StringBuilder GenerateInvalidRequestHTML() {
            return new StringBuilder("<p>Invalid request.</p>\n");
        }
    }
}
