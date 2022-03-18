#include <iostream>
#include "add.h"
#include "sub.h"

#include "div.h"
#include "mul.h"


using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	cout << add(a, b) << endl;
	cout << divide(a, b) << endl;
	cout << sub(a, b) << endl;
	cout << mul(a, b) << endl;

	return 0;
	
}