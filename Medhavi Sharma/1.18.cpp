#include<iostream>
using namespace std;
float multiply(int, float);
int main()
{
	int x = 2;
	float y = 3.4, z;
	z = multiply(x,y);
	cout << "z = " << z << endl;
	return 0; 
}
float multiply(int a,float b)
{
	return(a * b);
}
