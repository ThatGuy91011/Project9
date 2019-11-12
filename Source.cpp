#include <iostream>

using namespace std;

int main()
{
	int age = 21;

	int& reference = age;

	cout << "My age is " << age << endl;
	cout << "Your age is " << reference << endl;

	reference = 18;

	cout << "My age is " << age << endl;
	cout << "Your age is " << reference << endl;
}