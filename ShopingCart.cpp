#include "ShopingCart.h"
ShopingCart::ShopingCart() {
	this->TotalPrice=0.0;
	this->Proid = "";
	this->Name = "";
	this->Addp = 0;
}
double ShopingCart::CalculateTotalPrice() 
{
	this->TotalPrice = 0;
	for (int i = 0; i < SelectedProduct.size(); i++) 
	{
		this->TotalPrice = this->TotalPrice + SelectedProduct[i].getPrice();
	}
	return this->TotalPrice;
}
double ShopingCart::gettotalprice() {
	return this->TotalPrice;
}
int ShopingCart::gettotalQuantity() {
	return SelectedProduct.size();
}
void ShopingCart::Addproduct(vector<Product>& p) {
	int a = 0;
	string b = "";
	cout << "\t\t\t\t------------------------" << endl;
	cout << "\t\t\t\t|    BUYING PRODUCT    |" << endl;
	cout << "\t\t\t\t------------------------" << endl;
	cout << "How Many Products Do You Want to Buy" << endl;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cout << i + 1 << " ";
		cout << "Enter the Product Id:";
		cin >> b;
		for (int j = 0; j < p.size(); j++) 
		{
			if (p[j].getProductid() == b) 
			{
				Addp = j;
				break;
			}
		}
		SelectedProduct.emplace_back(p[Addp].getProductid(), p[Addp].getProductNmae(), p[Addp].getPrice());
		Addp++;
		cout << endl;
	}
}
void ShopingCart::Removeproduct() {
	string a = "";
	cout << "\t\t\t\t------------------------------" << endl;
	cout << "\t\t\t\t|     REMOVED BUY PRODUCT    |" << endl;
	cout << "\t\t\t\t------------------------------" << endl;
	cout << "Enter the product Name to Remove it:";
	cin >> a;
	int f = 0;
	for (int i = 0; i < SelectedProduct.size(); i++)//3 products
	{
		if (SelectedProduct[i].getProductid() == a) 
		{
			f = i;
		    SelectedProduct.erase(SelectedProduct.begin() + f);
			break;
		}

	}
	for (int i = 0; i < SelectedProduct.size(); i++)
	{
		SelectedProduct[i].display();
	}

	cout << endl;
}
void ShopingCart::DispalyProduct() {
	if (this->SelectedProduct.size() == 0)
	{
		cout << "\t\t\t\t Plese Buy Products" << endl;
	}
	else
	{
		system("cls");
		cout << "\t\t\t\t------------------------------" << endl;
		cout << "\t\t\t\t|      MY SHOPPING CART      |" << endl;
		cout << "\t\t\t\t------------------------------" << endl;
		cout << setw(15) << "Product Id" << setw(17) << "Product Name" << setw(20) << "Product Price" << endl;
		for (int i = 0; i < SelectedProduct.size(); i++)
		{
			SelectedProduct[i].display();
		}
		cout << endl;
		cout << "YOUR TOTAL BILL:" << CalculateTotalPrice() << endl;
		cout << "NUMBER OF PRODUCT YOU BUY:" << gettotalQuantity() << endl;
		cout << endl;
	}
}
ShopingCart::~ShopingCart() {

}