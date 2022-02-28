#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
				cout << i << " i - FizzBuzz" << endl;
		}
		else if (i % 3 == 0)
		{
				cout << i << " i - Fizz" << endl;
		}
		else if (i % 5 == 0)
		{
				cout << i << " i - Buzz" << endl;
		}
		else cout << i << endl;
	}
	return 0;
}