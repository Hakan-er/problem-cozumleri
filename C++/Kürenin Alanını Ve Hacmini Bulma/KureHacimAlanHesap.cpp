/*****************************************
*	KÜRENİN ALANINI VE HACMİNİ HESAPLAMA
*		Author: Hakan Eryücel
*****************************************/
#include<iostream>
#include<locale.h>
using namespace std;

#define PI 3.14

int main()
{
	setlocale(LC_ALL, "turkish");
	double yariCap, alan, hacim;

	cout << "Alanını ve hacmini hesaplamak istediğiniz kürenin yarı çapını giriniz\t";
	cin >> yariCap;
	system("cls");
	alan = 4 * PI * yariCap * yariCap;
	hacim = (4 / 3) * PI * yariCap * yariCap * yariCap;
	cout << "Kürenin alanı =" << alan << endl << "Kürenin hacmi =" << hacim << endl;

	system("pause");
	return 0;
}