/**************************************************
*	KİLOMETRE CİNSİNDEN BİR UZUNLUĞU MİLE ÇEVİRMEK
*		Author: Hakan Eryücel
**************************************************/
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"turkish");
	
	double kilometre, mil;

	cout << "Mile çevrilmesini istediğiniz uzunluğu kilometre cinsinden giriniz\t";
	cin >> kilometre;
	system("cls");
	mil = (0.621)*kilometre;
	cout << kilometre << " kilometre = " << mil << " mildir." << endl;

	system("pause");
    return 0;
}

