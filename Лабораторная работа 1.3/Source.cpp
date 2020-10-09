#include<stdio.h>
#include<iostream>

int Power(int namber, int power)
{
	int PowerNamber = 1;
	for (int i = 0; i < power; i++)
	{
		PowerNamber *= namber;
	}

	return PowerNamber;
}
int main()
{
	setlocale(LC_ALL, "ru");
	int initialnamber = 0, power = 0;
	printf("¬ведите число ");
	scanf_s("%d", &initialnamber);
	printf("\n¬вещдите степень ");
	scanf_s("%d", &power);
	printf("\n¬аше число в степени %d", Power(initialnamber, power));

	return 0;

}