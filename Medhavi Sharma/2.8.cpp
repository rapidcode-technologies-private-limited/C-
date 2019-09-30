#include<iostream>
using namespace std;
class simple
{
        private:
                int a;
                int b;
        public:
                int add(int,int);
};
int simple :: add(int x, int y)
{
	int z;
	a = x;         
	b = y;
	z = a + b;
	return z;
}                
int main()
{
	simple e;
	cout << e.add(5,10) << endl;                
	return 0;
}
