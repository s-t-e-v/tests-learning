#include <stdio.h>
#define BF 0

int main()
{
    int tab[BF];

    if (BF > 0)
        printf("tab[0] = %d\n", tab[0]);
    else
        printf("PROTECTION: Can't access tab[0] !\n");
    return 0;
}