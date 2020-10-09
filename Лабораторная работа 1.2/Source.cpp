#include<stdio.h>
#include<iostream>


int IsSimple(int value)//Функция проверки на простые числа
{
    for (int i = 2; i < value; i++)//Цикл для перебора возможных делителей
    {
        if (value % i == 0)//Проверка на деление без остатка
        {
            return 0;//фозврашает 0 - не простое
        }
    }

    return 1;//фозрашает 1 - простое
}
int main()
{
    int n = 0;
    setlocale(LC_ALL, "ru");
    printf("Введите число, для проверки ");
    scanf_s("%d", &n);
    printf("%d", IsSimple(n));//Фызываем функцуию

    return 0;
}