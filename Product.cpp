#include "Product.h"
#include<iomanip>
Product::Product() {
	this->ProductName = "";
	this->Price = 0.0;
	this->id = "";
}
Product::Product(string Pn, string i, double Pr) {
	this->ProductName = Pn;
	this->Price = Pr;
	this->id = i;
}
void Product::setProduxtName(string Pn) {
	this->ProductName = Pn;
}
void Product::setPrice(double Pr) {
	this->Price = Pr;
}
void Product::setProdutid(string i){
	this->id = i;
}
string Product::getProductNmae() {
	return this->ProductName;
}
string Product::getProductid() {
	return this->id;
}
double Product::getPrice() {
	return this->Price;
}
void Product::display() {
	
cout << setw(10) << this->ProductName << setw(20) << this->id << setw(20) << this->Price << endl;

}
Product::~Product() {

}