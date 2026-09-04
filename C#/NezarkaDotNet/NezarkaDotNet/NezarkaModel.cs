using System;
using System.Collections.Generic;
using System.Text;

using System.IO;
using System.ComponentModel;
using NezarkaDotNet;



namespace NezarkaBookstore
{
	//
	// Model
	//


	class ModelStore {
		public List<Book> books { get; private set; } = new List<Book>();
		private List<Customer> customers = new List<Customer>();

		public IList<Book> GetBooks() {
			return books;
		}

		public Book GetBook(int id) {
			return books.Find(b => b.Id == id);
		}

		public Customer GetCustomer(int id) {
			return customers.Find(c => c.Id == id);
		}

		public static ModelStore LoadFrom(TextReader reader) {
			var store = new ModelStore();

			try {
				if (reader.ReadLine() != "DATA-BEGIN") {
					return null;
				}
				while (true) {
					string line = reader.ReadLine();
					if (line == null) {
						return null;
					} else if (line == "DATA-END") {
						break;
					}

					string[] tokens = line.Split(';');
					switch (tokens[0]) {
						case "BOOK":
							store.books.Add(new Book {
								Id = int.Parse(tokens[1]), Title = tokens[2], Author = tokens[3], Price = decimal.Parse(tokens[4])
							});
							break;
						case "CUSTOMER":
							store.customers.Add(new Customer {
								Id = int.Parse(tokens[1]), FirstName = tokens[2], LastName = tokens[3]
							});
							break;
						case "CART-ITEM":
							var customer = store.GetCustomer(int.Parse(tokens[1]));
							if (customer == null) {
								return null;
							}
							customer.ShoppingCart.Items.Add(new ShoppingCartItem {
								BookId = int.Parse(tokens[2]), Count = int.Parse(tokens[3])
							});
							break;
						default:
							return null;
					}
				}
			} catch (Exception ex) {
				if (ex is FormatException || ex is IndexOutOfRangeException) {
					return null;
				}
				throw;
			}

			return store;
		}

	}

	class Book {
		public int Id { get; set; }
		public string Title { get; set; }
		public string Author { get; set; }
		public decimal Price { get; set; }
	}

	class Customer {
		private ShoppingCart shoppingCart;

		public int Id { get; set; }
		public string FirstName { get; set; }
		public string LastName { get; set; }

		

		public ShoppingCart ShoppingCart {
			get {
				if (shoppingCart == null) {
					shoppingCart = new ShoppingCart();
				}
				return shoppingCart;
			}
			set {
				shoppingCart = value;
			}
		}
	}

	class ShoppingCartItem {
		public int BookId { get; set; }
		public int Count { get; set; }

		public decimal TotalItemPrice(decimal itemPrice) {
			return Count * itemPrice;
        }
	}

	class ShoppingCart {
		public int CustomerId { get; set; }
		public List<ShoppingCartItem> Items = new List<ShoppingCartItem>();

        public void AddItem(int itemId) {
			if (itemId < 0) {
				throw new Exception("Tried to add invalid item id");
			}
			ShoppingCartItem itemToAdd = Items.Find(i => i.BookId == itemId);
			if (itemToAdd != null) {
				itemToAdd.Count++;
			}
			else {
                itemToAdd = new ShoppingCartItem();
				itemToAdd.BookId = itemId;
				itemToAdd.Count = 1;
				Items.Add(itemToAdd);
            }
        }
		public void RemoveItem(int itemId) {
			if (itemId < 0) {
				throw new Exception("Tried to remove invalid item id");
			}
			ShoppingCartItem itemToRemove = Items.Find(i => i.BookId == itemId);
			if (itemToRemove != null) {
				itemToRemove.Count--;
				if (itemToRemove.Count == 0) {
					Items.Remove(itemToRemove);
				}
			}
			else { 
				throw new Exception("Tried to remove item not on the list");
			}
        }

		public int CountOfBookedItems {
			get {
				int numberOfItems = 0;
				foreach (ShoppingCartItem item in Items) {
					numberOfItems += item.Count;
                }
				return numberOfItems;
			}
		
		}

        public int Count{
            get {
                int numberOfItems = 0;
                foreach (ShoppingCartItem _ in Items) {
                    numberOfItems ++;
                }
                return numberOfItems;
            }

        }

        public decimal CountTotalPrice(ModelStore store) {
            decimal totalPrice = 0;
            foreach (ShoppingCartItem item in Items) {
                totalPrice += item.TotalItemPrice(store.GetBook(item.BookId).Price);
            }
            return totalPrice;
        }


    }
}
