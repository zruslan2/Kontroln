#include <stdint.h>
#include <iostream>

using namespace std;

/*17.	Написать функцию, которая получает указатель на массив и его размер, и возвращает сумму и произведение его
элементов в двух параметрах - ссылках.*/

void sum(int *arr, int r, int &s, int &p)
{
	s = 0;
	p = 1;
	for (int i = 0;i < r;i++)
	{
		s += arr[i];
		p*= arr[i];
	}
}

/*18.	Такую же функцию как и в 17 задании написать для многомерного массива(подумать в 2 стороны:
1. Перегрузка функций; 2 И с - пользование указетелей на функйии)
a.Типа int
b.Типа double
c.Типа Shor int*/


void sum(int(*arr)[3],int r, int &s, int &p)
{
	s = 0;
	p = 1;
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			s += arr[i][j];
			p *= arr[i][j];
		}
	}
}

void sum(short(*arr)[3], int r, short &s, short &p)
{
	s = 0;
	p = 1;
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			s += arr[i][j];
			p *= arr[i][j];
		}
	}
}

void sum(double(*arr)[3], int r, double &s, double &p)
{
	s = 0;
	p = 1;
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			s += arr[i][j];
			p *= arr[i][j];
		}
	}
}

/*19.	Написать Функции для распечатки массивов, как одномерных, так и двумерных.*/

void printArr(int *arr, int r)
{
	for (int i = 0;i < r;i++)
	{
		cout << arr[i]<<"\t";
	}
}

void printMatrix(int(*arr)[3], int r)
{
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

/*20.	Написать функцию, которая получает указатель на массив и его размер(зармер при этом не передавать как число,
а передавать как ссылку на последний элемент массива), и возвращает количество отрицательных, положительных
и нулевых элементов массива, используя механизм ссылок. В данном задании обязательно необходимо
использовать enum. (enum должен быть глобальным на все файлы, подумать как это можно сделать не объявляя
его везде)*/

int f (int*arr, int*arrP, int (*func)(int*, int*))
{
	int c;
	c=func(arr, arrP);
	return c;
}

int otr(int*arr, int*arrP)
{
	int count = 0;
	while (*arr != *arrP)
	{
		if (*arr < 0)count++;
		arr++;
	}
	return count;
}
int pol(int*arr, int*arrP)
{
	int count = 0;
	while (*arr != *arrP)
	{
		if (*arr > 0)count++;
		arr++;
	}
	return count;
}
int zero (int*arr, int*arrP)
{
	int count = 0;
	while (*arr != *arrP)
	{
		if (*arr == 0)count++;
		arr++;
	}
	return count;
}