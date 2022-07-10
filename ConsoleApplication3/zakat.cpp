#include <iostream>
#include "zakat.h"
#include "Printmenus.h"

using namespace std;
const double RATE = 0.25;
const double GOLD_RATE = 239.80;
const int SILVER_RATE = 595;


double goldZakat() {
	const int STATE_RATE[15] = { 500,170,500,165,800,0,850,850,90,180,850,200,800,152,85 };

	int  gold_weight;
	int state;
	double total = 0;

	GoldMenu();
	cout << "Please enter your choice:  ";
	cin >> state;

	if (state <= 0 || state > 15) {
		return 0;
	}

	cout << "Please enter the weight(g) of gold : ";
	cin >> gold_weight;
	system("cls");

	return (gold_weight - STATE_RATE[state - 1]) * RATE * GOLD_RATE;
}

double silverZakat() {
	double silver_weight;

	//SilverMenu();

	cout << "Please enter the weight(g) of silver : ";
	cin >> silver_weight;

	system("cls");

	return (silver_weight - SILVER_RATE) * RATE;

}

double fidyahZakat(bool year) {
	const double FIDYAH_RATE[15] = { 1.90,  1.80, 1.75,  1.75, 1.80, 1.75, 1.90, 1.75, 1.75, 1.80, 1.75, 1.90, 5 , 1, 1 };

	int state;
	int day =0;
	int year_input = 1;

	FidyahMenu();
	cout << "Please enter your choice:  ";
	cin >> state;
	
	if (state <= 0 || state > 15) {
		return 0;
	}
	cout << "Please enter how many day you not do : ";
	cin >> day;

	if (year) {
		cout << "Please enter how many year you not do : ";
		cin >> year_input;
	}

	system("cls");

	return day * FIDYAH_RATE[state - 1] * year;
		

}

double incomeZakat() {
	double pen_kasar = 0, gaji = 0, total_a = 0, diri = 0, isteri = 0, kwsp = 0, ibubapa = 0, caruman = 0, spending = 0, t_spending = 0, y_zakat = 0, income_month = 0 ;
	int anak, ank;
	int deduction_type;
	int k;
	
	

	IncomeMenu();
	cin >> deduction_type;

	if (deduction_type == 1)
	{

		cout << "ENTER THE GROSS INCOME: RM";
		cin >> pen_kasar;
		gaji = pen_kasar * 12;
		total_a = gaji * 0.025;
		cout << "ZAKAT OF INCOME TO BE PAID (YEAR): RM" << total_a << endl;

		return  total_a;
	}

	else if (deduction_type == 2)
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

		return  y_zakat;

	}
	return 0;

}

double businessZakat(){
	double c_aset = 0, c_liabi = 0, mo_kerja = 0;
	double k_1year = 0, h_1year = 0, u_rugi = 0;
	int calculation_method;


	void BusinessMenu();
	cin >> calculation_method;
	if (calculation_method <= 0 || calculation_method > 2) {
		return 0;
	}

	if (calculation_method == 1)
	{

		float c_aset, c_liabi, mo_kerja;

		cout << "Please Enter Your Current Asset       : RM ";
		cin >> c_aset;
		cout << "Please Enter Your Current Liabities   : RM ";
		cin >> c_liabi;
		cout << "Your Muslim Shareholding              : 100% " << endl;


		mo_kerja = (c_aset - c_liabi) * 0.025;

		cout << "Zakat Perniagaan (Modal Kerja)        : RM " << mo_kerja << endl;
		return mo_kerja;
	}

	else if (calculation_method == 2)
	{
		float k_1year, h_1year, u_rugi;

		cout << "Please Enter Your Revenue For One Year : RM ";
		cin >> h_1year;
		cout << "Please Enter Your Cost For One Year    : RM ";
		cin >> k_1year;

		u_rugi = (h_1year - k_1year) * 0.025;

		cout << "Zakat Perniagaan (Untung Rugi)         : RM " << u_rugi << endl;
		return u_rugi;
	}
	return 0;
}