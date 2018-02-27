#include <stdint.h>
#include <iostream>

using namespace std;

/*17.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, � ���������� ����� � ������������ ���
��������� � ���� ���������� - �������.*/

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

/*18.	����� �� ������� ��� � � 17 ������� �������� ��� ������������ �������(�������� � 2 �������:
1. ���������� �������; 2 � � - ����������� ���������� �� �������)
a.���� int
b.���� double
c.���� Shor int*/


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

/*19.	�������� ������� ��� ���������� ��������, ��� ����������, ��� � ���������.*/

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

/*20.	�������� �������, ������� �������� ��������� �� ������ � ��� ������(������ ��� ���� �� ���������� ��� �����,
� ���������� ��� ������ �� ��������� ������� �������), � ���������� ���������� �������������, �������������
� ������� ��������� �������, ��������� �������� ������. � ������ ������� ����������� ����������
������������ enum. (enum ������ ���� ���������� �� ��� �����, �������� ��� ��� ����� ������� �� ��������
��� �����)*/

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