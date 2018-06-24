#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int a[20];
	srand(time(0));
	for(int i = 0; i < 20; i++)
	{
		a[i] = rand()%51;	
	}
	for(int i = 0; i < 20; i++)
	{
		cout << a[i] << "\t";
	}
	int b = a[0];
	for(int i = 0; i < 20; i++)
	{
		if(b < a[i])
		{
			b = a[i];
		}
	}
	cout << "MAX = "<< b << endl;
	int temp;
	for(int i = 0; i < 20; i++)
	{
		for(int j = i + 1; j < 20 ; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;	
			}	
		}	
	}
	cout << "sap xep tu be den lon " << endl;
	for(int i = 0; i < 20; i++)
	{
		cout << a[i] << endl;
	}
	for(int i = 0; i < 20; i++)
	{
		for(int j = i + 1; j < 20 ; j++)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;	
			}	
		}	
	}
	cout << "sap xep tu lon den be: " << endl;
	for(int i = 0; i < 20; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}
