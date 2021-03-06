#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);	//Прототип функции, Объявление функции - Function declaration
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ARR_SIZE = 5;
	int arr[ARR_SIZE];
	FillRand(arr, ARR_SIZE);	//Function call - вызов, или использование функции
								//Один раз написанная функция может быть вызвана сколько угодно раз
	Print(arr, ARR_SIZE);
	Sort(arr, ARR_SIZE);
	Print(arr, ARR_SIZE);
	////////////////////////////////////////////////////////////
	const int BRR_SIZE = 8;
	int brr[BRR_SIZE];
	FillRand(brr, BRR_SIZE);
	Print(brr, BRR_SIZE);
	Sort(brr, BRR_SIZE);
	Print(brr, BRR_SIZE);
}

void FillRand(int arr[], const int n)//Реализация функции, определение функции - Function definition
{
	//Заполняем массив случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void Print(int arr[], const int n)
{
	//Выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	//Сортировка массива: 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}