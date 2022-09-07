#pragma once
#include"Product.h"
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
class ProductList
{
protected:
	vector <Product> Productlist;
public:
	ProductList();
	void DisplayProductlist();
	void RemoveProduct(const string& );
	const vector<Product> getProductList()const;
	virtual void addProduct(Product P);
	~ProductList();
};

