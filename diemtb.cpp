#include <iostream>

using namespace std;

main()
{
	string name;
	float toan, ly, hoa;
	cout << "Nhap vao ten cua ban: " << endl;
	getline(cin, name);
	cout << "Nhap vao diem mon toan: " << endl;
	cin >> toan;
	cout << "Nhap vao diem mon ly: " << endl;
	cin >> ly;
	cout << "Nhap vao diem mon hoa: " << endl;
	cin >> hoa;
	cout << "Ten cua ban la: " << name << endl
		 << "Diem mon toan " << toan << endl
		 << "Diem mon ly " << ly << endl
		 << "Diem mon hoa " << hoa << endl
		 << "Diem trung binh: " << (toan + ly + hoa)/2;
}
