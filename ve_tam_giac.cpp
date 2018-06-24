#include <iostream>

using namespace std;

int main(){
	int chieucao, chieurong, kichthuoc;
	int a = 1;
	cout << "Nhap vao kich thuoc: " << endl;
	cin >> kichthuoc;
	for(chieucao = kichthuoc; chieucao >= 0; chieucao--)
	{
		for(chieurong = kichthuoc - chieucao; chieurong > 0; chieurong--)
		{
			cout << a++;
		}
		cout << endl;
	}
	cout << "Nhap vao kich thuoc: " << endl;
	cin >> kichthuoc;
	for(chieucao = 0; chieucao <= kichthuoc; chieucao++)
	{
		for(chieurong = kichthuoc - chieucao; chieurong >= 1; chieurong--)
		{
			cout << a++;
		}
		cout << endl;
	}
}
