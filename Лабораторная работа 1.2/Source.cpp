#include<stdio.h>

int is_simple(int namber)
{
  if (namber == 1 || namber == 0)
  {
      return printf("your number is not simple and not composite.\n");
  }
  else
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
