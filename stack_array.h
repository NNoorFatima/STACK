#pragma once
#include <iostream>
using namespace std;
#define capacity 100
template <typename T>
class Stack_array
{
public:
	T* data;
	int cur_index;
	Stack_array()
	{
		data = new T[capacity];
		for (int i = 0; i < capacity; i++)
			data[i] = -1;
		cur_index = 0;
	}
	void push(T da)
	{
		if (data[0] == -1)
		{
			data[cur_index] = da;
			cur_index++;
		}
		else
		{
			data[cur_index] = da;
			cur_index++;
		}
	}
	bool search(T d)
	{
		if (isempty())
		{
			cout << "Stack empty\n";
			return 0;
		}
		else
		{
			for (int i = 0; i < capacity; i++)
			{
				if (data[i] == d)
				{
					cout << "value found\n";
					return 1;
				}
			}
		}
		return 0;
	}
	T pop()
	{
		if (data[0] == -1)
			return T();
		else
		{
			T popped = data[--cur_index ];
			return popped;
		}
	}
	bool isempty()
	{
		if (data[0] == -1)
			return 1;
		return 0;
	}
};

