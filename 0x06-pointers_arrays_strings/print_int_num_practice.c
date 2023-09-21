#include "main.h"


int len_int(int n)
{
    int len = 0;
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

void print_number(int n)
{
    int len = len_int(n);
    int i = 0;
    char *s;
    s = malloc(sizeof(*s) * len + 1);
    
    if (n < 0)
    {
        n = -n;
        _putchar('-');
    }
    else if (n == 0)
    {
        _putchar('0');
    }
    
    while (n > 0)
    {
        s[i] = (n % 10) + '0';
        n /= 10;
        i++;
    }
    
    i--;
    
    while (i >= 0)
    {
        _putchar(s[i]);
        i--;
    }
  
}

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
