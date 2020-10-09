#include<stdio.h>
#include<iostream>


int IsSimple(int value)
{
    for (int i = 2; i < value; i++)
    {
        if (value % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int n = 0;
    setlocale(LC_ALL, "ru");
    printf("¬ведите число, дл€ проверки ");
    scanf_s("%d", &n);
    printf("%d", IsSimple(n));

    return 0;
}