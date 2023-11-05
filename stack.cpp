#pragma once
#include <iostream>
#include "stack_array.h"
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
}
