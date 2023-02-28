#include <unistd.h>
#include <stdio.h>
char first(int a)
{
    char c;
    c = '0' + a;
    return c;
}
char second(int b)
{
    char d;
    if (b > 9)
    {
        b -= 10;
        d = 'a' +b;
        return d;
    }
    d = '0' + b;
    return d;
}

void ft_print_memory(void *addr, unsigned int size)
{
    printf("%p\n",&addr);
    
}
int main(void)
{
    char *str = "Sebastian is een kleien homo en floor is een stinkbek met look in haar anus.";
    char **s;
    s = &str;
    //ft_print_memory(s,100);
    write(1,&s,20);
}