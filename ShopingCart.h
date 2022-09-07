#pragma once
#include<vector>
#include<iomanip>
#include<iostream>
#include<string>
#include"Product.h"
using namespace std;
class ShopingCart
{
protected:
	vector<Product> SelectedProduct;
	double TotalPrice;
	string Proid;
	string Name;
	int Addp;

public:
	ShopingCart();
	double CalculateTotalPrice();
	double gettotalprice();
	int gettotalQuantity();
	void Addproduct(vector<Product>& p);
	void Removeproduct();
	void DispalyProduct();
	~ShopingCart();
};

