#include <stdio.h>
int int main
{
  int a,b,c;
  printf("Enter the side lenghts:\n");
  scanf("%d%d%d",&a,&b,&c);

  if(a+b<c || b+c<a || a+c<b)
    {
      printf("Invalid Sides\n");
    }

  else if(a==b && b==c)
    {
      printf("Equilateral Triangle\n", );
    }

  else if(a==b || b==c || c==a)
    {
      printf("Isosceles Triangle\n", );
    }

  else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
    {
      printf("Right Angled Triangle\n");
    }

  else
    {
      printf("Scalene Triangle\n");
    }

  return 0;
}
