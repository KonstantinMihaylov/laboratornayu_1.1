#include<stdio.h>

int Is_Simple(int namber)
{
  if (namber == 1 || namber == 0)
  {
      return 0
  }
  elsу
  {
     for (int i = 2; i < namber; i++)
     {
        if (namber % i == 0)
        {
           return 0;
        }
     }
  }

    return 1;
}

//int main()
//{
//    int d;
//    scanf_s("%d", &d);
//    printf("%d", Is_Simple(d));
//
//    return 0;
//
//}
