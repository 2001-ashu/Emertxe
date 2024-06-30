#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter the Three numbers : ");
  scanf("%d%d%d", &a, &b, &c);
  if ((a > b && a < c) || (a < b && a > c))
  {
    printf("The middle number is %d\n", a);
  }
  else if ((b > a && b < c) || (b > c && b < a))
  {
    printf("The middle number is %d\n", b);
  }
  else if ((c > a && c < b) || (c > b && c < a))
  {
    printf("The middle number is %d\n", c);
  }
}