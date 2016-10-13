/*
Author: Visar Shehu
Email: v.shehu@seeu.edu.mk
Date Created: 12/10/2016
Date updated: 12/10/2016
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
/*
Structure products
This structure defines a product object representing
a single product in a supermarket
*/
struct product
{
	string name;
	double price;
	double quantity;
	string barcode;
	string unit_of_mesaure;
	double tax;

	//This method will calculate the price with tax 
	//For that particular product
	double PriceWithTax()
	{
		return price + ((price * tax )/ 100);
	}

	//This method will print the content of a product
	void Print()
	{
		cout << "| Product name  |"
			<< " Barcode       |"
			<< " Price         |"
			<< " Tax           |"
			<< " Price with tax|"
			<< " Quantity      |"
			<< endl
			<< "-------------------------------------------------"
			<< "-------------------------------------------------"
			<< endl
			<< setw(16)<< name
			<< setw(16)<< barcode
			<< setw(16)<< price
			<< setw(16)<< tax
			<< setw(16)<< PriceWithTax()
			<< setw(16)<< quantity
			<< endl
			<< "-------------------------------------------------"
			<< "-------------------------------------------------"
			<< endl<<endl;

	}
};

/*
This structure represents a repository of products in our 
system. It further allows us to do some basic operations with
our products. All products are kept in an array (defined as a pointer)
*list_of_products
The following methods are implemented:

SearchByName(string name)
SearchByBarcode(string barcode)
PrintProductList()
*/
struct productManager
{
	product *list_of_products;
	int nr_of_products;

	product SearchByName(string name)
	{
		for (int i = 0; i < nr_of_products; i++)
		{
			if (list_of_products[i].name == name)
			{
				return list_of_products[i];
			}
		}
	}

	product SearchByBarcode(string barcode)
	{
		for (int i = 0; i < nr_of_products; i++)
		{
			if (list_of_products[i].barcode == barcode)
			{
				return list_of_products[i];
			}
		}
		
	}

	void PrintProductList()
	{
		cout << "| Product name  |"
			<< " Barcode       |"
			<< " Price         |"
			<< " Tax           |"
			<< " Price with tax|"
			<< " Quantity      |"
			<< endl
			<< "-------------------------------------------------"
			<< "-------------------------------------------------"
			<< endl;
		for (int i = 0; i < nr_of_products; i++)
		{
			cout << setw(16)
				<< list_of_products[i].name
				<< setw(16)
				<< list_of_products[i].barcode
				<< setw(16)
				<< list_of_products[i].price
				<< setw(16)
				<< list_of_products[i].tax
				<< setw(16)
				<< list_of_products[i].PriceWithTax()
				<< setw(16)
				<< list_of_products[i].quantity
				<< setw(16)
				<< endl;
		}
		cout << "-------------------------------------------------"
			<< "-------------------------------------------------"
			<< endl;
	}

};

int main()
{
	//Creating an array of products 
	product all_products [5];
	all_products[0] = { "Pepsi 2.0L", 50, 55, "432423431", "bottle", 18 };
	all_products[1] = { "Pepsi 0.5L", 25, 54, "321354332", "bottle", 18 };
	all_products[2] = { "Coca Cola", 70, 234, "983028236", "bottle", 18 };
	all_products[3] = { "Bread", 20, 13, "3321314267", "piece", 5 };
	all_products[4] = { "Sprite", 40, 44, "44432423426", "bottle", 18 };

	//Initializing the product manager
	productManager pm;
	pm.list_of_products = all_products;
	pm.nr_of_products = 5;
	 
	//Printing a simple menu
	while (true)
	{
		cout << "======================================="
			<< endl
			<< "               MENU                    "
			<< endl
			<< "======================================="
			<< endl
			<< "Press 1 to search a product by name" << endl
			<< "Press 2 to search a product by barcode" << endl
			<< "Press 3 to print all products" << endl
			<< "Press 0 to exit the program" << endl
			<< "========================================"
			<< endl<<endl;
		
		string input_name, input_barcode;
		
		int option;
		cin >> option;
		product p;
		switch (option)
		{ 
			case 1:
				//clearing screen
				system("cls");
				cout << "Enter product name: ";
				cin >> input_name;
				p = pm.SearchByName(input_name);
				p.Print();
				break;
			case 2:
				//clearing screen
				system("cls");
				cout << "Enter product barcode: ";
				cin >> input_barcode;
				p = pm.SearchByBarcode(input_barcode);
				p.Print();
				break;
			case 3:
				//clearing screen
				system("cls");
				pm.PrintProductList();
				break;
			case 0:
				//Exiting the application
				cout << "Good bye!";
				return 0;
		}
	}

}