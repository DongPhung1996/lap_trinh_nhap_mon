#include <iostream>
using namespace std;
 
int main() {
int  a,b,c,d,e,f,g,h,i;
cout <<"a b c d e f g h i\n";
	for (a=0;a<=1;a++)
		for (b=0;b<=1;b++)
			for (c=0;c<=1;c++){
				d=a&&b||c;
				e=a&&(b||c);
				f=(a&&b)||c;
				g=a||b&&c;
				h=a||(b&&c);
				i=(a||b)&&c;
				cout << a << " "<<b << " "<<c<< " "<< d << " "<<e <<" "<< f << " "<< g <<" "<<h <<" "<<i<<"\n";
			}
	return 0;
}
