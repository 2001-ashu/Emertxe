#include <stdio.h>
void fun(char *str);
int main()
{
  char str[100];

  printf("Enter the string:");
  scanf("%[^\n]", str);

  fun(str);

  printf("updated string: %s", str);

  printf("\n");
  return 0;
}
void fun(char *str)
{
  int i;
  if (str[0] >= 'a' && str[0] <= 'z') //condtion is letter must capital letter.
  {
    str[0] = str[0] - 32;
  }
  for (i = 0; str[i]; i++)
  {
    // str[0] = str[0] - 32;
    if (str[i] == 32)
    {
      if (str[i + 1] >= 'a' && str[i + 1] <= 'z')   //condtion is letter must small letter.
        str[i + 1] = str[i + 1] - 32;
      if (str[i - 1] >= 'a' && str[i - 1] <= 'z')   //condtion is letter must small letter.
        str[i - 1] = str[i - 1] - 32;
    }
  }
  if (str[i] == '\0')
  {
    if (str[i - 1] >= 'a' && str[i - 1] <= 'z')   //condtion is letter must small letter.

      str[i - 1] = str[i - 1] - 32;
  }
}