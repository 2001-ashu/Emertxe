#include <stdio.h>
int main()
{
    int fn, cd, nt, ap, gp;
    float HP;
    printf("Enter the First Number 'A': ");
    scanf("%d", &fn);
    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d", &cd);
    printf("Enter the number of terms 'N': ");
    scanf("%d", &nt);

    if (nt < 0)
    {
        printf("Invalid input\n");
        return 0;
    }
    ap = fn;
    gp = fn;
    printf("AP = ");

    for (int i = 1; i <= nt; i++)
    {

        printf("%d, ", ap);
        ap = ap + cd;
    }

    printf("\nGP = ");
    for (int i = 1; i <= nt; i++)
    {

        printf("%d,", gp);
        gp = gp * cd;
    }
    printf("\nHP = ");
    ap = fn;
    for (int i = 1; i <= nt; i++)
    {
        HP = (float)1 / ap;
        printf("%f,", HP);
        ap = ap + cd;
    }
}