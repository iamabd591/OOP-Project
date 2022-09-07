#include "ProductList.h"

ProductList::ProductList() {

}
//check
void ProductList::DisplayProductlist() {
	cout << setw(15) << "Product Name" << setw(17) << "Product Id" << setw(20) << "Product Price" << endl;
	for (int i = 0; i < Productlist.size(); i++)
	{
		Productlist[i].display();
	}
}
//check
void ProductList::RemoveProduct(const string& r)
{
	bool isfound = false;
	for (int i = 0; i < Productlist.size(); i++)
	{
		if (Productlist[i].getProductid() == r)
		{
			isfound = true;
			Productlist.erase(Productlist.begin() + i);
			break;
		}
	}
	if (isfound) { cout << "ID Removed Successfully" << endl; }
	else { cout << "ID Not FOUND" << endl; }
}

const vector<Product> ProductList::getProductList() const
{
	return this->Productlist;
}

void ProductList::addProduct(Product P) {
	Productlist.push_back(P);
}
ProductList::~ProductList() {

}