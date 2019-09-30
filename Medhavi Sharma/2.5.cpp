#include<iostream>
using namespace std;
struct largest
{
	private:
        	int a;
        	int b;
	public:
		int c;
        	void input_data(int x, int y)
        	{
                        a = x;
			b = y;
        	}
        	int big()
        	{
		if(a > b)
			return a;
		else
                	return b;
		}
};
int main()
{
	largest l;
	int a,b;
	cout << "enter the two numbers " << endl;
	cin >> a >> b;
	l.input_data(a,b);
	cout << " the largest number is " << l.big() << endl;
	return 0;
}

