#include <stdio.h>

#define are_equal(x, y) (((x) ^ (y)))

int main() {
    int num1 = 10;
    int num2 = 10;

    if (!(are_equal(num1, num2))) {
        printf("The numbers are equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }

    return 0;
}