#include "MainFun.h"
#include<fstream>
MainFun::MainFun() {
	A.AddProduct(Product("Shirt",  "P1",   100.50));
	A.AddProduct(Product("Jeans",  "P2",   130.60));
	A.AddProduct(Product("Mobile", "P3",  350.99));
	A.AddProduct(Product("Keyboard","P4", 150.75));
	A.AddProduct(Product("Laptop",  "P5",   230.99));
	A.AddProduct(Product("HeadPhone","P6", 190.99));
	A.AddProduct(Product("Watch",    "P7",  30.25));
	A.AddProduct(Product("Facewash", "P8",  18.89));
	A.AddProduct(Product("HandFree", "P9",   7.50));
	A.AddProduct(Product("Cream",    "P10",    99.50));
}
void MainFun::MainMenu() {
	int option = 0;
	string n = "", e = "", p = "", g = "", ph = "", bn = "", ac = "", hn = "", zc = "", co = "", c = "", sn = "", ai = "";
	string id = "", name = "";
	double pr = 0.0;
	int a = 0;

	Addministrator admin;
	Coustomer cousto;
	ShopingCart cart;
	vector <Product> slist;
	//cart.Addproduct(product);
	//admin.products(product);
	//plist.DisplayProductlist();

	ofstream fout("Admin.xls", ios_base::app);
	ofstream fout2("Coustomer.txt", ios_base::app);

	cout << "\t\t\t\t****************************************" << endl;
	cout << "\t\t\t\tWelcome To Online Shop Management System" << endl;
	cout << "\t\t\t\t****************************************" << endl;
	cout << endl;
	do
	{
		cout << "\t\t\t\t---------------------------------------------" << endl;
		cout << "\t\t\t\t|Press 1 For Register As A Administator     |" << endl;
		cout << "\t\t\t\t|Press 2 For Register As A Coustomer        |" << endl;
		cout << "\t\t\t\t|Press 3 For Display Administator Data      |" << endl;
		cout << "\t\t\t\t|Press 4 For Display Coustomer Data         |" << endl;
		cout << "\t\t\t\t|Press 5 For Display Product List           |" << endl;
		cout << "\t\t\t\t|Press 6 For Add A New Product              |" << endl;
		cout << "\t\t\t\t|Press 7 For Remove A Product               |" << endl;
		cout << "\t\t\t\t|Press 8 For Display Shopping Cart          |" << endl;
		cout << "\t\t\t\t|Press 9 For Add A Product To Cart          |" << endl;
		cout << "\t\t\t\t|Press 10 For Remove A Product From Cart    |" << endl;
		cout << "\t\t\t\t|Press 11 For Display Payment Methods       |" << endl;
		cout << "\t\t\t\t|Press 0 For Exit                           |" << endl;
		cout << "\t\t\t\t---------------------------------------------" << endl;
		cout << "\t\t\t\tEnter Choice: ";
		cin >> option;
		switch (option)
		{
		case 1:
			system("cls");
			cout << "\t\t\t\t-----------------------------------------" << endl;
			cout << "\t\t\t\t|   Addministrator Registration From    |" << endl;
			cout << "\t\t\t\t-----------------------------------------" << endl;
			cout << "\t\t\t\tEnter Your Admin ID: ";
			cin >> ai;
			A.setAddminId(ai);

			cout << "\t\t\t\tEnter the Your Name: ";
			cin >> n;
			A.setname(n);

			cout << "\t\t\t\tEnter the Your E-Mail:";
			cin >> e;
			A.setemail(e);

			cout << "\t\t\t\tEnter the Your Password:";
			cin >> p;
			A.setpassword(p);

			cout << "\t\t\t\tSelected Your Gender:" << endl;
			cout << "\t\t\t\tPress 1 For Male" << endl;
			cout << "\t\t\t\tPress 2 For FeMale" << endl;
			cin >> a;
			if (a == 1) {
				g = "Male";

			}
			else if (a == 2)
			{
				g = "FeMale";

			}
			else
			{
				cout << "Your Input is Invalid" << endl;
			}

			A.setgender(g);
			cout << "\t\t\t\tEnter Your Phone No:";
			cin >> ph;
			A.setphone_no(ph);

			cout << "\t\t\t\tEnter Your Bank Name:";
			cin >> bn;
			A.setBank_name(bn);

			cout << "\t\t\t\tEnter Your Bank Account Number:";
			cin >> ac;
			A.setAccount_no(ac);

			cout << "\t\t\t\tEnter the Your Home Address:";
			cin >> hn;
			Ad.sethouse_no(hn);

			cout << "\t\t\t\tEnter the Your Street no:";
			cin >> sn;
			Ad.setstreet_no(sn);

			cout << "\t\t\t\tEnter Your Country Name:";
			cin >> co;
			Ad.setcountry(co);

			cout << "\t\t\t\tEnter Your City Name:";
			cin >> c;
			Ad.setcity(c);

			cout << "\t\t\t\tEnter the Your Zip Code:";
			cin >> zc;
			Ad.setzip_code(zc);
			system("cls");
			cout << "\t\t\t\t-----------------------------------------" << endl;
			cout << "\t\t\t\t|       !!!Congratulations!!!!          |" << endl;
			cout << "\t\t\t\t|    Successfuly Register as Addmim     |" << endl;
			cout << "\t\t\t\t-----------------------------------------" << endl;
			if (fout.is_open())
			{
				fout << ai << n << " " << e << " " << p << " " << g << " " << ph << " " << bn << " " << ac << " " << hn << " " << sn << " " << co << " " << c << " " << zc << " " << endl;
				fout.close();
			}
			else
			{
				cout << "Admin File Can Not Be Found" << endl;
			}
			break;

			//Case2////
		case 2:
			system("cls");
			cout << "\t\t\t\t-----------------------------------------" << endl;
			cout << "\t\t\t\t|      Coustomer Registration From      |" << endl;
			cout << "\t\t\t\t-----------------------------------------" << endl;

			cout << "\t\t\t\tEnter the Your Name:";
			cin >> n;
			C.setname(n);

			cout << "\t\t\t\tEnter the Your E-Mail:";
			cin >> e;
			C.setemail(e);

			cout << "\t\t\t\tEnter the Your Password:";
			cin >> p;
			C.setpassword(p);

			cout << "\t\t\t\tSelected Your Gender:" << endl;
			cout << "\t\t\t\tPress 1 For Male" << endl;
			cout << "\t\t\t\tPress 2 For FeMale" << endl;
			cin >> a;
			if (a == 1) {
				g = "Male";

			}
			else if (a == 2)
			{
				g = "FeMale";

			}
			else
			{
				cout << "Your Input is Invalid" << endl;
			}
			C.setgender(g);

			cout << "\t\t\t\tEnter Your Phone No:";
			cin >> ph;
			C.setphone_no(ph);

			cout << "\t\t\t\tEnter Your Bank Name:";
			cin >> bn;
			C.setBank_name(bn);

			cout << "\t\t\t\tEnter Your Bank Account Number:";
			cin >> ac;
			C.setAccount_no(ac);

			cout << "\t\t\t\tEnter the Your Home Address:";
			cin >> hn;
			Ad.sethouse_no(hn);
			cout << "\t\t\t\tEnter the Your Street no:";
			cin >> sn;
			Ad.setstreet_no(sn);
			cout << "\t\t\t\tEnter Your Country Name:";
			cin >> co;
			Ad.setcountry(co);
			cout << "\t\t\t\tEnter Your City Name:";
			cin >> c;
			Ad.setcity(c);
			cout << "\t\t\t\tEnter the Your Zip Code:";
			cin >> zc;
			Ad.setzip_code(zc);
			system("cls");
			cout << "\t\t\t\t-----------------------------------------" << endl;
			cout << "\t\t\t\t|          !!!Congratulations!!!!       |" << endl;
			cout << "\t\t\t\t|   Successfuly Register as coustomer   |" << endl;
			cout << "\t\t\t\t-----------------------------------------" << endl;
			if (fout2.is_open())
			{
				fout2 << n << " " << e << " " << p << " " << g << " " << ph << " " << bn << " " << ac << " " << hn << " " << sn << " " << co << " " << c << " " << zc << " " << endl;
				fout2.close();
			}
			else
			{
				cout << "Coustomer File Can Not Be Found" << endl;
			}
			break;
		case 3:
			system("cls");
			A.Display();
			break;
		case 4:
			system("cls");
			C.Display();
			break;
		case 5:
			system("cls");
			A.P.DisplayProductlist();
			break;
		case 6:
			system("cls");
			A.AddProduct();
			break;
		case 7:
			system("cls");
			A.P.DisplayProductlist();
			A.RemoveProduct();
			break;
		case 8:
			system("cls");
			CA.DispalyProduct();
			break;
		case 9:
			slist = A.P.getProductList();
			//A.P.DisplayProductlist();
			CA.Addproduct(slist);
			break;
		case 10:
			system("cls");
			CA.DispalyProduct();
			CA.Removeproduct();
			break;
		case 11:
			system("cls");
			Pa.paymentperference(CA.CalculateTotalPrice());
			break;
		case 0:
			exit(0);
		default:
			cout << "Invalid Input" << endl;
			break;
		}
	} while (true);
}
MainFun::~MainFun() {

}