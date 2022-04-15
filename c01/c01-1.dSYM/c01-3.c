void ft_div_mod(int a, int b, int *div, int *mod
{
    int m;
    int n;

    m = a/b;
    n = a%b;
    *div = m;
    *mod = n;
}