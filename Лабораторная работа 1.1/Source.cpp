#include<stdio.h>
#include<iostream>
int main()
{
    for (int i = 1; i <= 100; i++)//���������� ���� ��� �������� ������� �����
    {
        if (i % 3 == 0)//�������� ������� �� 3 
        {
            printf("Fizz\n");
        }
        if (i % 5 == 0)
        {
            printf("Buzz\n");//�������� ������� �� 5 
        }
        if (i % 5 == 0 && i % 3 == 0)//�������� ������� �� 15
        {
            printf("FizzBuzz\n");
        }
        if (i % 3 != 0 && i % 5 != 0)//�������� �� �����������
        {
            printf("%d\n", i);
        }

    }

    return 0;
}