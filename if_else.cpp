#include <iostream>
#include <cmath>

using namespace std;

main()
{
	//if else
	int a, b;
	cin >> a >> b;
	if(a > 0 && b > 0)
	{
		cout << a + b;
	}
	else if(a < 0 && b > 0)
	{
		cout << "Gia tri cua a nho hon b";
	}
	else if(a > 0 && b < 0)
	{
		cout << "Gia tri cua a lon hon b!";
	}
	else
	{
		cout << "Gia tri cua a va b deu nho hon 0!";
	}
	bt: giai phuong trinh bac 1:
		ax + b = 0
	Neu a == 0 , b == 0 pt co vsn
	Neu a != 0, b != 0 pt co 1 nghiem duy nhat la: x = -b/a
	Neu a == 0 , b != 0 pt vo nghiem
	a = 0; // gán gia tri 0 cho a
	a == 0; // kiem tra a co bang 0
	
	giai:
	int a, b;
	cout << "Nhap vao gia tri cua a: " << endl;
	cin >> a;
	cout << "Nhap vao gia tri cua b: " << endl;
	cin >> b;
	if(a == 0 && b == 0)
	{
		cout << "Phuong trinh co VSN";
	}
	else if(a != 0 && b != )
	{
		cout << "Phuong trinh co 1 nghiem duy nhat!" << endl;
		cout << "x = " << (float)-b/a;
	}
	else
	{
		cout << "Phuong trinh vo nghiem!";
	}
	giai phuonng trinh bac 2:
	ax^2 + bx + c = 0
	Neu a == 0 phuong trinh tro ve bac 1:
			giai phuong trinh bac 1
	Neu a != 0 tien hanh giai phuong trinh bac 2:
		Delta > 0: Phuong trinh co 2 nghiem
		Delta = 0: Phuong trinh co nghiem kep
		Delta < 0: Phuong trinh vo nghiem
		Delta = pow(b, 2) - 4*a*c;
		sqrt(Delta);
	if(a == 0)
	{
		//giai phuong trinh bac 1
	}
	else
	{
		//giai phuong trinh bac 2 theo Delta
		if(Delta > 0)
		{
			
		}
		else if(Delta == 0)
		{
			
		}
		else
		{
			
		}
	}
}


