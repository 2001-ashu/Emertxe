#include <stdio.h>
#include <stdarg.h>

double calc_mean(double num, ...)
{
    va_list args;
    va_start(args, num);

    double sum = 0.0;

    for (int i = 0; i < num; i++)
    {
        sum = sum + va_arg(args, double);
    }

    va_end(args);

    return sum / num;
}

int main()
{

    double mean = calc_mean(5,1.2,2.8,1.0,5.0,5.0);
    printf("Mean: %lf\n", mean);

    return 0;
}
