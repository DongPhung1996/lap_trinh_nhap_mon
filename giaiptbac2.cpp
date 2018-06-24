#include <iostream>
#include <cmath>

using namespace std;

main()
{
	float a, b, c, delta;
	cout << "Nhap vao gia tri cua a: " << endl;
	cin >> a;
	cout << "Nhap vao gia tri cua b: " << endl;
	cin >> b;
	cout << "Nhap vao gia tri cua c: " << endl;
	cin >> c;
	delta = pow(b, 2) - 4 * a * c;
	if(a == 0)
	{
		cout << "Phuong trinh bac 1!" << endl;
		if(b == 0 && c == 0)
		{
			cout << "Phuong trinh co VSN";
		}
		else if(b != 0 && c != 0)
		{
			cout << "Phuong trinh co 1 nghiem duy nhat!" << endl;
			cout << "x = " << -c/b;
		}
		else
		{
			cout << "Phuong trinh vo nghiem!";
		}
	}
	else
	{
		cout << "Phuong trinh bac 2!" << endl;
		if(delta > 0)
		{
			cout << "Phuong trinh co 2 nghiem phan biet!" << endl;
			cout << "x1 = " << (-b - sqrt(delta))/(2*a) << endl;
			cout << "x2 = " << (-b + sqrt(delta))/(2*a) << endl;
		}
		else if(delta == 0)
		{
			cout << "Phuong trinh co nghiem kep!" << endl;
			cout << "x1 = x2 = " << -b/(2*a);
		}
		else
		{
			cout << "Phuong trinh vo nghiem!";	
		}
	}
}
