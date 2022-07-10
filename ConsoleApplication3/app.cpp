#include "app.h";
#include <iostream>
#include "PrintMenus.h"
#include "zakat.h"

using namespace std;

double calculateZakat(int zakat_type) {
	if (zakat_type == 1)
	{
		return goldZakat();
	}
	else if (zakat_type == 2)
	{
		return silverZakat();
	}
	else if (zakat_type == 3)
	{
		return fidyahZakat();
	}
	else if (zakat_type == 4)
	{
		return fidyahZakat(true);
	}
	else if (zakat_type == 5)
	{
		return incomeZakat();
	}
	else if (zakat_type == 6)
	{
		return businessZakat();
	}
	else { return 0; }
}

void zakatSummary(double *total) {
	double sumTotal = 0;

	for (size_t i = 0; i < 6; i++)
	{
		sumTotal = total[i];
	}

	if (sumTotal >= 0)

	{
		cout << "=========================================================" << endl;
		cout << "              Thanks For Using Our System                " << endl;
		cout << "=========================================================" << endl;
		cout << " Zakat Of Gold That Need To Pay : RM" << total[0] << endl;
		cout << " Zakat Of Silver That Need To Pay : RM" << total[1] << endl;
		cout << " Zakat Of Fidyah That Need To Pay : RM" << total[2]<< endl;
		cout << " Zakat Of Fidyah Ganda That Need To Pay : RM" << total[3] << endl;
		cout << " Zakat Of Income (Year) That Need To Pay : RM" << total[4] << endl;
		cout << " Zakat Of Income (Total) That Need To Pay : RM" << total[5] << endl;
		cout << "=========================================================" << endl;

	}
	else if (sumTotal < 0)
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
}


void run_app() {
	int zakat_type = 0;
	double total[6] = { 0,0,0,0,0 ,0};
	int ask;
	bool keep_ask = true;

	do
	{
		system("cls");
		Mainmenu();
		cin >> zakat_type;

		if (zakat_type >= 1 && zakat_type < 7) {
			total[zakat_type - 1] = calculateZakat(zakat_type);
		}

		zakatSummary(total);

		cout << "Do you want to continue(1(yes)/0(no)) ? :  ";
		cin >> ask;

		if (ask != 1)
		{
			keep_ask = false;
		}

	} while (keep_ask);

}

