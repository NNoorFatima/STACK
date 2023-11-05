#pragma once
#include <iostream>
#include "stack_array.h"
#include "string_reversal.h"
#include "expressionconversion.h"
using namespace std;
int main()
{
	Stack_array <int>b;
	b.push(10);
	b.push(11);
	b.push(12);
	b.push(13);
	b.push(14);
	b.push(15);
	cout<<b.search(11);
	cout << endl;
	cout << b.search(2);
	b.pop();
	cout << endl;
	cout<<b.isempty();
	cout << endl;
	cout << StringReversal("noorshahid");
	cout << endl;
	string exp = "(x+y)*(d-x)/a";

	// Function call
	infixToPostfix(exp);
	cout << infixToPrefix(exp);
}
