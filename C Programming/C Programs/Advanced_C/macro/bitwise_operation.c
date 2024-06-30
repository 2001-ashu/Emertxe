#include <stdio.h>
#define SET_A_BIT(num, pos) num | (1 << pos)
#define GET_A_BIT(num, pos) num & (1 << pos)
#define TOGGLE_A_BIT(num, pos) num ^ (1 << pos)
int main()
{
    printf("Set a Bit:%d\n", SET_A_BIT(15, 2));
    printf("Get a Bit:%d\n", GET_A_BIT(15, 2));
    printf("Toggle a Bit:%d\n", TOGGLE_A_BIT(15, 2));
}