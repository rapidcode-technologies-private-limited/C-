#include<iostream>
using namespace std;
int main()
{
	int p = 10;
	int &r = p;
	int &s = r;
	cout << "p = " << p << endl;
	cout << "r = " << r << endl;
	cout << "s = " << s << endl;
	return 0;
}
