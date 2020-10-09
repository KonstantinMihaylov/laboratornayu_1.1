#include<stdio.h>
#include<iostream>
int main()
{
    for (int i = 1; i <= 100; i++)//Используем цикл для проверки каждого числа
    {
        if (i % 3 == 0)//проверка деление на 3 
        {
            printf("Fizz\n");
        }
        if (i % 5 == 0)
        {
            printf("Buzz\n");//проверка деление на 5 
        }
        if (i % 5 == 0 && i % 3 == 0)//проверка деление на 15
        {
            printf("FizzBuzz\n");
        }
        if (i % 3 != 0 && i % 5 != 0)//проверка на неделимость
        {
            printf("%d\n", i);
        }

    }

    return 0;
}