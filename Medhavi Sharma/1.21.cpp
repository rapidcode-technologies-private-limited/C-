/* inline function */
#include<iostream>
using namespace std;
inline int min(int a, int b)
{
	return a < b ? a : b;
}
int main()
{
	cout << min(10, 20);
	return 0;
}
