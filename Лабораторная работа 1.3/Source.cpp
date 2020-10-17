#include<stdio.h>

int GetPower(int namber, int power)
{
  int power_number = 1;
  for (int i = 0; i < power; i++)
  {
     power_number *= namber;
  }

  return power_number;
}
//int main()
//{
//    int d;
//    int a;
//    scanf_s("%d%d", &d, &a);
//    printf("%d", get_power(d, a));
//
//    return 0;
//
//}
