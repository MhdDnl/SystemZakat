#include <iostream>
#include "PrintMenus.h"
using namespace std;

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

void BusinessMenu() {
	cout << "============================================" << endl;
	cout << "       Welcome to Business Zakat System       " << endl;
	cout << "============================================" << endl;
	cout << "1.Kaedah Modal Kerja                        " << endl;
	cout << "2.Kaedah Untung Rugi                         " << endl;
	cout << "============================================" << endl;
	cout << "Please Enter Your Choice:   ";
}