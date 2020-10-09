#include<stdio.h>
#include<iostream>

int Power(int namber, int power)//Функция возведения в степень
{
	int PowerNamber = 1;
	for (int i = 0; i < power; i++)//Цикл пошагового ввозведения в степень
	{
		PowerNamber *= namber;
	}

	return PowerNamber;
}
int main()
{
	setlocale(LC_ALL, "ru");//Функция для вывода в консоль русского языка
	int initialnamber = 0, power = 0;
	printf("Введите число ");
	scanf_s("%d", &initialnamber);
	printf("\nВведите степень ");
	scanf_s("%d", &power);
	printf("\nВаше число в степени %d", Power(initialnamber, power));//Вызов функции и передача значений переменных

	return 0;

}