#include <unistd.h>

void ft_putnbr(int nb);
int main(void){
	ft_putnbr(42);
	return 0;
}
int reverse_int(int i){
	int reverse = 0 ;
	int remain;
	while(i !=0){
		remain = i % 10;
		reverse = reverse *10 + remain;
		i /= 10;
	}
	return reverse;
}

void ft_putnbr(int nb){
	nb = reverse_int(nb);
	char g;
	char q = 34;
	char nl = '\n';
	write(1,&q,1);
	while(nb > 0){
		int mod = nb % 10;
		nb = nb / 10;
		g = 48 + mod;
		write(1,&g,1);
		
	}
	write(1,&q,1);
	write(1,&nl,1);
}
