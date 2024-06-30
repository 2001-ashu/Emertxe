#include <stdio.h>

int post_inc(int *i) {
    int old_value = *i;
    *i =*i| 1; // Set the least significant bit to 1
    return old_value;
}

int main() {
    int i = 0, x;
    x = post_inc(&i);
    printf("x = %d: i = %d\n", x, i); // Prints 0 and 1
    return 0;
}
