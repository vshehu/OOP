#include <iostream>
#include <string>

using namespace std;

struct Product
{
	string name;
	string barcode;

	void PrintInfo()
	{
		cout << "Name: " << name << " Barcode: " << barcode << endl;
	}
};

struct ProductManager
{
	Product *products;
	int nr_items;

	bool Contains(string text, string search)
	{
		if (text.find(search) != string::npos)
			return true;
		else
			return false;
	}

	void Search(string search_criteria)
	{
		 
		for (int i = 0; i < nr_items; i++)
		{
			if (Contains(products[i].name, search_criteria) || 
				Contains(products[i].barcode, search_criteria))
			{
				products[i].PrintInfo();
			}

		}
	}
};

int main()
{
	ProductManager pm;
	Product prod[] = {
			{ "Cola", "12321321" },
			{ "Pepsi", "534435435" },
			{ "Bread", "423424" },
			{ "Mercedes", "54345435" },
			{ "Porche", "5353454353" }
	};

	pm.products = prod;
	pm.nr_items = 5;

	string search;
	cout << "Please write the name or barcode of the product you are searching: "
		<< endl;

	while (true)
	{
		cin >> search;
		pm.Search(search);
	}

}