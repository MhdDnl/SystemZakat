#include<iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>

using namespace std;
#include <string.h>

void LoginMenu() {
	cout << "============================================" << endl;
	cout << "         Welcome to Zakat System            " << endl;
	cout << "============================================" << endl;

}
void Mainmenu()
{
	cout << "============================================" << endl;
	cout << "          Welcome to Zakat System           " << endl;
	cout << "============================================" << endl;
	cout << "1.Gold                 6.Bussiness         " << endl;
	cout << "2.Silver               7.Exit               " << endl;
	cout << "3.Fidyah                                    " << endl;
	cout << "4.Fidyah(Gandaan)                           " << endl;
	cout << "5.Income                                    " << endl;
	cout << " Note:This system only usable in 2021/2022  " << endl;
	cout << "============================================" << endl;
	cout << "Please enter you choice:  ";

}

void GoldMenu()
{
	cout << "============================================" << endl;
	cout << "   Welcome to Gold Zakat System            " << endl;
	cout << "============================================" << endl;
	cout << "1.Perak     7.Johor             13.WP Labuan" << endl;
	cout << "2.Kedah     8.Terengganu        14.Sabah    " << endl;
	cout << "3.Pahang    9.Sarawak           15.Perlis   " << endl;
	cout << "4.P.Pinang  10.Melaka           0.Main Menu " << endl;
	cout << "5.Selangor  11.Putrajaya                    " << endl;
	cout << "6.Kelantan  12.Negeri Sembilan              " << endl;
	cout << "============================================" << endl;
}
void SilverMenu()
{
	cout << "============================================" << endl;
	cout << "   Welcome to  Silver Zakat System          " << endl;
	cout << "============================================" << endl;
	cout << "1.Perak     7.Johor             13.WP Labuan" << endl;
	cout << "2.Kedah     8.Terengganu        14.Sabah    " << endl;
	cout << "3.Pahang    9.Sarawak           15.Perlis   " << endl;
	cout << "4.P.Pinang  10.Melaka           0.Main Menu " << endl;
	cout << "5.Selangor  11.Putrajaya                    " << endl;
	cout << "6.Kelantan  12.Negeri Sembilan              " << endl;
	cout << "============================================" << endl;

}

void FidyahMenu()
{
	cout << "============================================" << endl;
	cout << "   Welcome to  Fidyah Zakat System          " << endl;
	cout << "============================================" << endl;
	cout << "1.Perak     7.Johor             13.WP Labuan" << endl;
	cout << "2.Kedah     8.Terengganu        14.Sabah    " << endl;
	cout << "3.Pahang    9.Sarawak           15.Perlis   " << endl;
	cout << "4.P.Pinang  10.Melaka           0.Main Menu " << endl;
	cout << "5.Selangor  11.Putrajaya                    " << endl;
	cout << "6.Kelantan  12.Negeri Sembilan              " << endl;
	cout << "============================================" << endl;


}

void FidyahGandaanMenu()
{
	cout << "==============================================" << endl;
	cout << " Welcome to Fidyah (Gandaan) Zakat System        " << endl;
	cout << "==============================================" << endl;
	cout << "1.Perak     7.Johor             13.WP Labuan  " << endl;
	cout << "2.Kedah     8.Terengganu        14.Sabah      " << endl;
	cout << "3.Pahang    9.Sarawak           15.Perlis     " << endl;
	cout << "4.P.Pinang  10.Melaka           0.Main Menu   " << endl;
	cout << "5.Selangor  11.Putrajaya                      " << endl;
	cout << "6.Kelantan  12.Negeri Sembilan                " << endl;
	cout << "==============================================" << endl;


}

void IncomeMenu()
{
	cout << "============================================" << endl;
	cout << "       Welcome to Income Zakat System       " << endl;
	cout << "============================================" << endl;
	cout << "            Type Of Calculations            " << endl;
	cout << "            1. Without Deduction            " << endl;
	cout << "            2. With Deduction               " << endl;
	cout << "============================================" << endl;
	cout << "Please Enter Your Choice:";

}

bool login() {
	string username;
	int password;
	int count = 0;
	while (count < 3) {
		cout << "Please enter your username:"; cin >> username;
		cout << "Please enter your password:"; cin >> password;
		if (password == 123 && username == "up") {
			return true;
		}
		else {
			count++;
			cout << "Wrong username or password\n";
		}

	}
	return false;

}

void run_app() {
	int gr[15] = { 500,170,500,165,800,0,850,850,90,180,850,200,800,152,85 };
	int grs[1] = { 595 };
	int g, c, d, y, agin;
	double total = 0, total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0, totals = 0;
	int ask, a, b;
	double rate = 0.25;
	double r = 239.80;
	double pen_kasar = 0, gaji = 0, total_a = 0, diri = 0, isteri = 0, kwsp = 0, ibubapa = 0, caruman = 0, spending = 0, t_spending = 0, y_zakat = 0, m_zakat = 0, income_month = 0;
	int anak, ank;
	int k;
	string b_name, r_number, add, tel_no;
	double c_aset = 0, c_liabi = 0, mo_kerja = 0;
	double k_1year = 0, h_1year = 0, u_rugi = 0;
	int next_customer, secChoice;

	int up = 123456;//id number can be change if you want
	int pin = 123;//same with password
	int count = 0;
	bool isTrue = true;

	do {


	Again:
		Mainmenu();
		cin >> c;
		system("cls");
		if (c == 1)
		{
			GoldMenu();
			cout << "Please enter your choice:  ";
			cin >> a;
			if (a == 0) { system("cls"); goto Again; }
			cout << "Please enter the weight(g) of gold : ";
			cin >> g;
			system("cls");
			switch (a) {
			case 1:
				total = (g - gr[0]) * r * rate;
				break;

			case 2:
				total = (g - gr[1]) * r * rate;
				break;

			case 3:
				total = (g - gr[2]) * r * rate;
				break;

			case 4:
				total = (g - gr[3]) * r * rate;
				break;

			case 5:
				total = (g - gr[4]) * r * rate;
				break;

			case 6:
				total = (g - gr[5]) * r * rate;
				break;

			case 7:
				total = (g - gr[6]) * r * rate;
				break;

			case 8:
				total = (g - gr[7]) * r * rate;
				break;

			case 9:
				total = (g - gr[8]) * r * rate;
				break;

			case 10:
				total = (g - gr[9]) * r * rate;
				break;

			case 11:
				total = (g - gr[10]) * r * rate;
				break;

			case 12:
				total = (g - gr[11]) * r * rate;
				break;

			case 13:
				total = (g - gr[12]) * r * rate;
				break;

			case 14:
				total = (g - gr[13]) * r * rate;
				break;

			case 15:
				total = (g - gr[14]) * r * rate;
				break;

			}

		}
		else if (c == 2)
		{
			SilverMenu();
			cout << "Please enter you choice:  ";
			cin >> b;
			if (b == 0) { system("cls"); goto Again; }
			cout << "Please enter the weight(g) of silver : ";
			cin >> g;
			system("cls");
			if (b <= 15) {
				total1 = (g - grs[0]) * r * rate;

			}
		}
		else if (c == 3)
		{
			FidyahMenu();
			cout << "Please enter your choice:  ";
			cin >> a;
			if (a == 0) { system("cls"); goto Again; }
			cout << "Please enter how many day you not do : ";
			cin >> d;
			system("cls");

			switch (a)
			{
			case 1:
				total2 = d * 1.90;
				break;

			case 2:
				total2 = d * 1.80;
				break;

			case 3:
				total2 = d * 1.75;
				break;

			case 4:
				total2 = d * 1.75;
				break;

			case 5:
				total2 = d * 1.80;
				break;

			case 6:
				total2 = d * 1.75;
				break;

			case 7:
				total2 = d * 1.90;
				break;


			case 8:
				total2 = d * 1.75;
				break;

			case 9:
				total2 = d * 1.75;
				break;

			case 10:
				total2 = d * 1.80;
				break;


			case 11:
				total2 = d * 1.75;
				break;

			case 12:
				total2 = d * 1.90;
				break;

			case 13:
				total2 = d * 5;
				break;

			}
		}
		else if (c == 4)
		{
			FidyahGandaanMenu();
			cout << "Please enter your choice:  ";
			cin >> a;
			if (a == 0) { system("cls"); goto Again; }
			cout << "Please enter how many days you not do: ";
			cin >> d;
			cout << "Please enter how many years you not do: ";
			cin >> y;
			system("cls");

			if (a == 1)
			{
				total3 = d * 1.90 * y;

			}
			else if (a == 2)
			{
				total3 = d * 1.80 * y;

			}
			else if (a == 3)
			{
				total3 = d * 1.75 * y;
			}
			else if (a == 4)
			{
				total3 = d * 1.75 * y;

			}
			else if (a == 5)
			{
				total3 = d * 1.80 * y;

			}
			else if (a == 6)
			{
				total3 = d * 1.75 * y;

			}
			else if (a == 7)
			{
				total3 = d * 1.90 * y;
			}
			else if (a == 8)
			{
				total3 = d * 1.75 * y;

			}
			else if (a == 9)
			{
				total3 = d * 1.75 * y;

			}
			else if (a == 10)
			{
				total3 = d * 1.80 * y;

			}
			else if (a == 11)
			{
				total3 = d * 4 * y;
			}
			else if (a == 12)
			{
				total3 = d * 1.75 * y;

			}
			else if (a == 13)
			{
				total3 = d * 4 * y;

			}
			else if (a == 14)
			{
				total3 = d * 1.90 * y;

			}
			else if (a == 15)
			{
				total3 = d * 5 * y;

			}

		}
		else if (c == 5)
		{
			IncomeMenu();
			cin >> a;

			if (a == 1)
			{

				cout << "ENTER THE GROSS INCOME: RM";
				cin >> pen_kasar;
				gaji = pen_kasar * 12;
				total_a = gaji * 0.025;
				total4 = total_a;

				cout << "ZAKAT OF INCOME TO BE PAID (YEAR): RM" << total_a << endl;
			}

			else if (a == 2)
			{

				cout << "ENTER YOUR INCOME FOR A MONTH    : RM";
				cin >> income_month;
				cout << "ENTER YOUR SELF-EXPENDITURE      : RM";
				cin >> diri;
				cout << "ENTER YOUR WIFE'S EXPENSES       : RM";
				cin >> isteri;
				cout << "ENTER TOTAL NUMBER OF CHILD      :   ";
				cin >> anak;
				cout << "ENTER AMOUNT OF KWSP SPENDING    : RM";
				cin >> kwsp;
				cout << "ENTER AMOUNT OF PARENTS SPENDING : RM";
				cin >> ibubapa;
				cout << "ENTER CARUMAN (TABUNG HAJI)      : RM";
				cin >> caruman;

				spending = diri + isteri + (anak * 1000) + kwsp + ibubapa + caruman;
				t_spending = income_month - spending;
				y_zakat = t_spending * 0.025;
				m_zakat = y_zakat / 12;

				cout << "ZAKAT OF INCOME TO BE PAID (YEAR) :RM" << y_zakat << endl;
				cout << "ZAKAT OF INCOME TO BE PAID (MONTH):RM" << m_zakat << endl;
				total5 = m_zakat, y_zakat;

			}

		}
		else if (c == 6)
		{
			cout << "============================================" << endl;
			cout << "      Welcome to Business Zakat System         " << endl;
			cout << "============================================" << endl;
			cout << " Year : 2022" << endl;
			cout << " Nisab Amount : RM 20361.00" << endl;
			cout << "============================================" << endl;
			cout << "            Business Detail             " << endl;
			cout << " Business Name :";
			cin >> b_name;
			cout << " Registration Number :";
			cin >> r_number;
			cout << " Address :";
			cin >> add;
			cout << " Phone Number :";
			cin >> tel_no;
			cout << "============================================" << endl;
			cout << "1.Kaedah Modal Kerja                        " << endl;
			cout << "2.Kaedah Untung Rugi                         " << endl;
			cout << "============================================" << endl;




			cout << "     Please Enter Your Choice:";
			if (a == 0) { system("cls"); goto Again; }
			cin >> k;


			if (k == 1)
			{

				float c_aset, c_liabi, mo_kerja;

				cout << "Please Enter Your Current Asset       : RM ";
				cin >> c_aset;
				cout << "Please Enter Your Current Liabities   : RM ";
				cin >> c_liabi;
				cout << "Your Muslim Shareholding              : 100% " << endl;


				mo_kerja = (c_aset - c_liabi) * 0.025;

				cout << "Zakat Perniagaan (Modal Kerja)        : RM " << mo_kerja << endl;
			}

			else if (k == 2)
			{
				float k_1year, h_1year, u_rugi;

				cout << "Please Enter Your Revenue For One Year : RM ";
				cin >> h_1year;
				cout << "Please Enter Your Cost For One Year    : RM ";
				cin >> k_1year;

				u_rugi = (h_1year - k_1year) * 0.025;

				cout << "Zakat Perniagaan (Untung Rugi)         : RM " << u_rugi << endl;



			}

		}
		else if (c > 7)
		{
			cout << " INVALID CODE ..... PLEASE TRY AGAIN ..... :)" << endl;
			cout << "Do You Want To Retry? (1(yes)/0(no)) ? :  ";
			cin >> ask;
			if (ask == 1)
			{
				system("cls"); goto Again;


			}
		}
		else
		{
			return;
		}
		totals = total, total1, total2, total3, total4, total5, mo_kerja, u_rugi;

		if (total >= 0)

		{
			cout << "=========================================================" << endl;
			cout << "              Thanks For Using Our System                " << endl;
			cout << "=========================================================" << endl;
			cout << " Zakat Of Gold That Need To Pay : RM" << total << endl;
			cout << " Zakat Of Silver That Need To Pay : RM" << total1 << endl;
			cout << " Zakat Of Fidyah That Need To Pay : RM" << total2 << endl;
			cout << " Zakat Of Fidyah Ganda That Need To Pay : RM" << total3 << endl;
			cout << " Zakat Of Income (Year) That Need To Pay : RM" << total4 << endl;
			cout << " Zakat Of Income (Total) That Need To Pay : RM" << total5 << endl;
			cout << " Zakat Of Income (Year) That Need To Pay : RM" << y_zakat << endl;
			cout << " Zakat Of Income (Total) That Need To Pay : RM" << m_zakat << endl;
			cout << " Zakat Of Bussiness (Modal Kerja) That Need To Pay : RM" << mo_kerja << endl;
			cout << " Zakat Of Bussiness (Untung Rugi) That Need To Pay : RM" << u_rugi << endl;
			cout << "=========================================================" << endl;

		}
		else if (total < 0)
		{
			cout << "=========================================================" << endl;
			cout << "              Thanks For Using Our System                " << endl;
			cout << "=========================================================" << endl;
			cout << "“Ambillah (sebahagian) dari harta mereka menjadi sedekah," << endl;
			cout << "supaya dengannya engkau  membersihkan  mereka (dari dosa)" << endl;
			cout << "dan   mensucikan  mereka (dari  akhlak yang  buruk),  dan" << endl;
			cout << "doakanlah untuk  mereka,  kerana sesungguhnya  doamu  itu" << endl;
			cout << "menjadi ketenteraman bagi  mereka, dan  (ingatlah) Allah”" << endl;
			cout << "Maha Mendengar Lagi Maha Mengetahui.                     " << endl;
			cout << "                                                         " << endl;
			cout << "Note:you don't need to pay for this                      " << endl;
			cout << "=========================================================" << endl;
		}


		cout << "Do you want to continue(1(yes)/0(no)) ? :  ";
		cin >> ask;
		cout << "New customer? 1-Yes/2-NO :";
		cin >> secChoice;

		if (secChoice == 1)
		{
			system("cls"); goto Again;
		}

		if (ask == 1)
		{
			system("cls"); goto Again;
		}
		else
		{
			return;
		}

	} while (isTrue != false);

}


int main()
{


	bool registered = login();

	if (registered) {
		//Start application
		run_app();
	}
	else {
		cout << "===============================================" << endl;
		cout << "          Thanks For Using Our System          " << endl;
		cout << "===============================================" << endl;
		cout << "You been kicked out from system due to false " << endl;
		cout << "id number and password,Please try again" << endl;
		cout << "                                               " << endl;
		cout << "                                               " << endl;
		cout << "Note:You have 3 login attempt                  " << endl;
		cout << "===============================================" << endl;
		// exit
	}

}








