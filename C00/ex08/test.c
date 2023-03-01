#include <stdio.h>

int custom_pow(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

void print_combn_recursive(int n, int start, int num)
{
    if (n == 0)
    {
        printf("%d", num);
        if (num < start + custom_pow(10, n - 1) * 9)
            printf(", ");
        return;
    }
    for (int i = start; i <= 9; i++)
    {
        print_combn_recursive(n - 1, i + 1, num + i * custom_pow(10, n - 1));
    }
}

void ft_print_combn(int n)
{
    if (n <= 0 || n >= 10)
        return;
    for (int i = 0; i <= 9; i++)
    {
        print_combn_recursive(n - 1, i + 1, i * custom_pow(10, n - 1));
    }
    printf("\n");
}

int main(void)
{
	ft_print_combn(3);
	return 0;
}
