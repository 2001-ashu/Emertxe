// #include <stdio.h>

// unsigned int replace_nbits_from_pos(int num, int n, int val, int pos) {
//     int mask = ~((~0 << (n + pos)) & ~((1 << pos) - 1));
//     val = val << pos;
//     val = val & mask;
//     num = num & (~mask);
//     num = num | val;
//     return num;
// }

// int main() {
//     int num = 50;
//     int n = 4;
//     int val = 10;
//     int pos = 2;
//     printf("Original number: %d\n", num);
//     printf("Replacing %d bits starting from position %d with %d\n", n, pos, val);
//     num = replace_nbits_from_pos(num, n, val, pos);
//     printf("Replaced number: %d\n", num);
//     return 0;
// }
#include <stdio.h>

unsigned int replace_nbits_from_pos(int num, int n, int val, int pos) {
    int mask = (1 << n) - 1;
    num &= ~(mask << pos);
    num |= (val & mask) << pos;
    return num;
}

int main() {
    int num = 50, n = 4, val = 10, pos = 2;
    
    printf("Original number: %d\n", num);
    printf("Replacing %d bits starting from position %d with %d\n", n, pos, val);
    
    num = replace_nbits_from_pos(num, n, val, pos);
    
    printf("Replaced number: %d\n", num);
    
    return 0;
}
