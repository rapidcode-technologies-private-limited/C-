#include<iostream>
using namespace std;
class simple
{
        int a;
        public:
        void set_data(int x)
        {
                a = x;
        }
        void display(void)
        {
                cout << "the value of a = "  << this->a << endl;
        }
};
int main()
{
	simple e;
	e.set_data(5);
	e.display();
	return 0;
}

