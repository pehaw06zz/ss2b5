#include <iostream>
using namespace std;
int main () {
	double chieudai, chieurong , chuvi, dientich;
	// moi nhap chieu dai
	// moi nhap chieu rong
	cout << " nhap do dai hinh chu nhat:";
	cin >> chieudai;
	cout << "nhap chieu rong hinh chu nhat:";
	cin >> chieurong;
	if ( chieudai <= 0,chieurong <= 0) {
		cout << "chieu dai chieu rong phai lon hon 0."<< endl;
	} else {
		// tinh chu vi va dien tich hinh chu nhat
		double chuvi = (chieudai + chieurong)* 2;
		double dientich = chieudai * chieurong ;
		// xuat ket qua
		cout << "chuvi hinh chu nhat:" << chuvi << endl;
		cout << " dientich hinh chu nhat:" << dientich << endl;
		}
		return 0;
	}
	
	
