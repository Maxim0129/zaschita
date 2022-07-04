#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include<windows.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#define size 8

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	int arr[size] = { 0, 0, 0, 0, 0, 0, 1, 0 };

	printf("Исходный массив ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	int max = arr[0];
	int nm = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
			nm = i;
		}
	}
	printf("Максимальный элемент max[%d] = %d\n", nm + 1, max);
	puts("Измененный массив");
	for (int i = 0; i < size; i++)
	{
		arr[4] = max;
		arr[nm] = -1;
		printf("%d ", arr[i]);
	}
}