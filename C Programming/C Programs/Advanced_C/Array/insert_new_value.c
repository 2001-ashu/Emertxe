#include <stdio.h>
void insert(int *arr, int size, int num, int pos)
{

   for (int i = size - 1; i >= pos; i--)
   {
      arr[i + 1] = arr[i];
   }
   arr[pos] = num;

   printf("Updated Elements:");
   for (int i = 0; i <= size; i++)
   {
      printf("%d ", arr[i]);
   }
}
int main()

{
   int size;
   printf("Enter Size of an array:");
   scanf("%d", &size);
   int arr[size];
   printf("Enter Elements:");
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }
   printf("\nYou Inserted elements are:");
   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   int ch;
   int num, pos;
   printf("\n1.Insert Elements\n2.Delete Element\n");
   scanf("%d", &ch); 
   if (ch == 1)
   {

      printf("Enter number which you want to inserted:");
      scanf("%d", &num);
      printf("Enter index position where you inserted value:");
      scanf("%d", &pos);
      insert(arr, size, num, pos);
   }
}