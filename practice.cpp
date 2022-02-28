#include <iostream>
using namespace std;
int main()
{
	cout << "Hello, world, from Visual C++!" << endl;

	// initialize a variable x of type int. Set its value equal to 50.
	int x = 50;
	// initialize a variable p which is a pointer to an int. Set its value equal to the address of x.
	int * p = &x;
	// initialize a variable r which is a reference to a pointer. Set its value equal to the dereferenced pointer.
	int & r = *p;
	// initialize a variable which is of type reference to int. Set its value equal to the variable x.
	int & ref = x;

	// the value of x will be displayed
	cout << "x: " << x << endl;

	cout << "the address of x will be displayed (three ways to do this)" << endl;
	cout << "&x: " << &x << endl;
	cout << "p: " << p << endl;
	cout << "&r: " << &r << endl;
	cout << "&ref: " << &ref << endl;

	// the address of p will be displayed (two ways (in theory) to do this)
	cout << "the address of p will be displayed" << endl;
	cout << "&p: " << &p << endl;
	// cout << "&(*x): " << &*x << endl; // has an error

	cout << "the value of x will be displayed by dereferencing p (two ways to do this)" << endl;
	cout << "*p: " << *p << endl;
	cout << "r: " << r << endl;
	cout << "ref: " << ref << endl;

	// This causes an error because x is not a pointer.
	//cout << "*x: " << *x << endl;
	// trying out another case with r
	// cout << "*r: " << *r << endl; // has an error

	// change the value of r and see if it changes the value of x along with it
	r = 70;
	cout << "new r: " << r << endl;
	cout << "new x: " << x << endl;
	cout << "new ref: " << ref << endl;

	// change the value of x and see if it changes the value of r along with it
	x = 100;
	cout << "new x: " << x << endl;
	cout << "new r: " << r << endl;
	cout << "new ref: " << ref << endl;

	return 0;
}