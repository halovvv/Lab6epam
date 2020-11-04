#include <iostream>
#include "Quest2.h"
#include <array>
#include <cstring>

using namespace std;

template<typename T>
T workWithSTR()
{
	char str[100];
	strcat_s(str, "cucumber");
	strcat_s(str, "pochischen");
	
	cout << "Getting string is " << str <<endl;
	return 0;
}

template<typename T>
T sums(T Arr[], T Para[], const int sizeArr, const int sizePara)
{

	T sum1 = 0;
	T sum2 = 0;

	for (int i= 0; i< sizeArr; i++)
	{
		sum1 += Arr[i];
	}

	for (int i = 0; i < sizePara; i++)
	{
		sum2 += Para[i];
	}


	cout << "Sum for array is "<< sum1 << endl<< "Sum for pare is "<< sum2 << endl;
	return 0;

}

template<typename T>
void fillArr(T*& arr, int &size)
{
	cin >> size;
	cout << "Please enter array with "<< size <<" values : " << endl;

	arr = new T[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

int main()
{
	const int sizeArr = 9;
	const int sizePara = 2;
	int Arr[sizeArr]{ 6,8,9,1,3,4,5,2,-19 };
	int Para[sizePara] = { 3,7 };

	workWithSTR<int>();
	sums( Arr, Para, sizeArr, sizePara);
	cout << "" << endl;

	int* arr;
	int size;
	fillArr(arr, size);
	Str<int> v1(arr,size);

	v1.getArr(arr);
	v1.sortirovka(arr);
	v1.getArr(arr);
	v1.lastTask(arr);

}