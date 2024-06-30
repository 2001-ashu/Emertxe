#include <stdio.h>
int main()
{
    int s1, s2;
    int flag = 0, m1, m2;
    float median, median1, median2;
    printf("Enter the 'n' value for Array A: ");
    scanf("%d", &s1);
    printf("Enter the 'n' value for Array B: ");
    scanf("%d", &s2);
    int Arr1[s1], Arr2[s2];
    printf("Enter the elements one by one for Array A: ");
    for (int i = 0; i < s1; i++)
    {
        scanf("%d", &Arr1[i]);
    }
    printf("Enter the elements one by one for Array B: ");
    for (int i = 0; i < s2; i++)
    {
        scanf("%d", &Arr2[i]);
    }
    for (int i = 0; i <= s1; i++)
    {
        for (int j = 0; j < s1 - i - 1; j++)
        {
            if (Arr1[j] > Arr1[j + 1])
            {
                Arr1[j] = Arr1[j] ^ Arr1[j + 1];
                Arr1[j + 1] = Arr1[j] ^ Arr1[j + 1];
                Arr1[j] = Arr1[j] ^ Arr1[j + 1];
            }
        }
    }
    for (int i = 0; i <= s2; i++)
    {
        for (int j = 0; j < s2 - i - 1; j++)
        {

            if (Arr2[j] > Arr2[j + 1])
            {
                Arr2[j] = Arr2[j] ^ Arr2[j + 1];
                Arr2[j + 1] = Arr2[j] ^ Arr2[j + 1];
                Arr2[j] = Arr2[j] ^ Arr2[j + 1];
            }
        }
    }
    m1 = s1 / 2;
    m2 = s2 / 2;
    if (s1 & 1)
    {
        median1 = Arr1[m1];
        printf("Median of array1 : %g\n", median1);
    }
    else
    {
        median1 =(float) (Arr1[m1] + Arr1[m1 - 1] )/ 2;
        printf("Median of array1 :%g\n", median1);
    }

    if (s2 & 1)
    {
        median2 =(float) Arr2[m2];
        printf("Median of array2 : %g\n", median2);
    }
    else
    {
        median2 =(float)(Arr2[m2] + Arr2[m2 - 1]) / 2;
        printf("Median of array2 : %g\n", median2);
    }
    median = (median1 + median2) / 2;
    printf("Median of both arrays : %g\n", median);

    return 0;
}