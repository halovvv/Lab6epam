#pragma once
#include <iostream>

using namespace std;

template <class T>
class Str
{
private:
	int size;
	T* arr;
public:
	Str()
	{
		size = 0;
		arr = nullptr;
	}

	Str(T* arr, const int size)
	{
		this->arr = arr;
		this->size = size;

	}

	~Str()
	{
		delete[] arr;
	}

	void getArr(T *arr)
	{
		cout << "\t Getting array: " << endl;

		for (int i = 0; i < size; i++)
		{
			cout << "\t" << arr[i];
		}


	}

	void sortirovka(T *arr)
	{
		T temp;
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		cout << endl;

	}

	void lastTask(T *arr)
	{
		cout << "\tThe max value is " << arr[size - 1] << endl;

	}
};
