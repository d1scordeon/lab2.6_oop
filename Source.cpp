#include "LorryC.h"

int main()
{
	Lorry s1;

	Lorry s4("car", 8, 320, 20000);
	cout << s4 << endl;

	cout << "Size of class = " << sizeof(s4) << endl << endl;

	s1 = ++s4;
	cout << "Increment in prefix form" << endl;
	cout << s4 << endl;

	cout << "Decrement in prefix form" << endl;
	cout << --s1 << endl;

	s1 = s4++;
	cout << "Increment in postfix form" << endl;
	cout << s4 << endl;

	s1--;
	cout << "Decrement in postfix form" << endl;
	cout << s1 << endl;
}