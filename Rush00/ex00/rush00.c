// rush(5,3)
// $>./a.out
// o---o 54321
// | |
// o---o
// $>
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void    rush(int x, int y)
{
    char    a = 'o';
    char    b = '-';
    char    c ='|';
    int     d = x;
    int     e = y;

    while(d!=0 && e!=0)
    {   
    //첫번째줄과 마지막줄
        if(y == e | e == 1)
        {
            ft_putchar(a);
            d--;
            while(d > 1)
            {
                ft_putchar(b);
                d--;
                if(d == 1)
                {
                    ft_putchar(a);
                    d = x; // 다시 초기화 
                    e--; //세로로 한 줄 내려가기
                    break;                    
                }
            }
            if(e > 0)
                d = x; // 다시 초기화 
                ft_putchar('\n');
                break;
        }
    //중간줄
        else if (e > 0)
        {
            ft_putchar(c);
            d--;
            while(d > 1)
            {
                ft_putchar(' ');
                d--;
                if(d == 1)
                {
                    ft_putchar(c);
                    d = x;
                    //ft_putchar('\n');
                    //e--;
                    break;
                }
            }
            ft_putchar('\n');
            e--;
            break;
        }
        if(e < 1)
            break;
    }


}

int main()
{
    // write(1, &"rush(5, 5)\n",11);
    // rush(5, 5);
    // write(1, &"rush(5, 3)\n", 11);
    // rush(5, 3);
    // write(1, &"rush(5, 1)\n", 11);
    // rush(5, 1);
    // write(1, &"rush(1, 1)\n", 11);
    // rush(1, 1);
    // write(1, &"rush(1, 5)\n", 11);
    rush(1, 5);
    return (0);
}