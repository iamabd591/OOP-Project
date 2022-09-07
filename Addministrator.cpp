#include "Addministrator.h"
Addministrator::Addministrator() {
	this->Adminid = "";
}
Addministrator::Addministrator(string i, string n, string e, string p, string g, string ph, string bn, string ac) {
	this->Adminid = i;
	this->name = n;
	this->email = e;
	this->password = p;
	this->gender = g;
	this->phone_no = ph;
	this->Bank_name = bn;
	this->Account_no = ac;
}
void Addministrator::setAddminId(string i) {
	this->Adminid = i;
}
string Addministrator::getAddminid() {
	return this->Adminid;
}
void Addministrator::Display() {
	if (this->name == "")
	{
		cout << endl;
		cout << "\t\t\t\tRegiter Your SelF As An Administrator" << endl;
	}
	else {
		cout << "\t\t\t\t****************************************" << endl;
		cout << "\t\t\t\t       Basic Info OF Addministrator     " << endl;
		cout << "\t\t\t\t****************************************" << endl;
		cout << "\t\t\t\t------------------------------------------" << endl;
		cout << "\t\t\t\t Addministrator Id:" << this->Adminid << endl;
		cout << "\t\t\t\t Addministrator Name:" << this->name << endl;
		cout << "\t\t\t\t Addministrator Email: " << this->email << endl;
		cout << "\t\t\t\t Addministrator Password:" << this->password << endl;
		cout << "\t\t\t\t Addministrator Gender:" << this->gender << endl;
		cout << "\t\t\t\t Addministrator Phone no:" << this->phone_no << endl;
		cout << "\t\t\t\t Addministrator Bank Name:" << this->Bank_name << endl;
		cout << "\t\t\t\t Addministrator Bank Account Number:" << this->Account_no << endl;
		cout << "\t\t\t\t------------------------------------------" << endl;
	}
}
void Addministrator::RemoveProduct() {
	int lenght = 0;
	string pid = "";
	cout << "\t\t\t\t-------------------------" << endl;
	cout << "\t\t\t\t|    REMOVED PRODUCT    |" << endl;
	cout << "\t\t\t\t-------------------------" << endl;
	cout << "How Many Product do you want to Remove" << endl;
	cin >> lenght;
	
	for (int i = 0; i < lenght; i++)
	{
		cout << 1 + i << ": ";
		cout << "Enter the Product ID to Remove: ";
		cin >> pid;
		P.RemoveProduct(pid);
	}
	
}
void Addministrator::AddProduct() {
	system("cls");
	int lenght = 0;
	string pNmae = "", pid = "";
	double Pprice = 0.0;
	cout << "\t\t\t\t------------------------" << endl;
	cout << "\t\t\t\t|      ADD PRODUCT     |" << endl;
	cout << "\t\t\t\t------------------------" << endl;
	cout << "How Many Product do you want to Add" << endl;
	cin >> lenght;
	for (int i = 0; i < lenght; i++)
	{
		cout << 1 + i<<" ";
		cout << "Enter the Product Name:";
		cin >> pNmae;
		cout << "Enter the Product ID:";
		cin >> pid;
		cout << "Enter the Product Price:";
		cin >> Pprice;
		Product s;
		s.setPrice(Pprice);
		s.setProdutid(pid);
		s.setProduxtName(pNmae);
		P.addProduct(s);
	}
}
void Addministrator::AddProduct(const Product& s)
{
	P.addProduct(s);
}
Addministrator::~Addministrator() {

}