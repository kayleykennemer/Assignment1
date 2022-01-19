//Kayley Kennemer
// data structures

// 1/19/2022

#include <iostream>
#include <iomanip>
using namespace std;

void aPointer();
void bPointer();
string cPointer();
void output(string);

int main()
{
	string str;
	aPointer();
	bPointer();

	str = cPointer();

	output(str);

	return 0;
}

void output(string str)
{
	cout << str << endl;
}

string aPointer()
{
	int SIZE;

	cout << "Enter size: " << endl;
	cin >> SIZE;

	int* arrPtr = new int[SIZE];
	int* secondPtr = arrPtr;

	for(int i = 0; i < SIZE; i++)
	{
		arrPtr[i] = i;
	}

	delete [] arrPtr;
	arrPtr = NULL;

	for(int i = 0; i < 10; i++)
	{
		cout << secondPtr[i] << endl;
	}
}

void bPointer()
{
	int SIZE;
	cout << "Enter size: " << endl;
	cin >> SIZE;

	int* arrPtr = new int[SIZE];
	int* secondPtr = arrPtr;

	for(int i = 0; i < SIZE; i++)
	{
		arrPtr[i] = i;
	}

	delete arrPtr;

	arrPtr = NULL;

	cout << secondPtr << endl;
}

string cPointer()
{
	string * strPointer = new string("abcdefghijkl");

	return * strPointer;
}

void output(string str)
{
	cout << str << endl;
}

