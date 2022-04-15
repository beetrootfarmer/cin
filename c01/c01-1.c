#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
    write(1, &nbr, 1);
}

int main(void)
{
    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;
    int *****f = &e;
    int ******g = &f;
    int *******h = &g;
    int ********i = &h;

    ft_ultimate_ft((int*********)&i);
}