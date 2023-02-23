#include <unistd.h>

void ft_is_negative(int n);

int main(void){
	ft_is_negative(5);
	ft_is_negative(-4);
	ft_is_negative(0);
	return 0;
}

void ft_is_negative(int n){
	char p = 'P';
	char q = 'N';
	char nl = '\n';
	if(n >= 0 ){
		write(1,&p,1);
	}
	else{
		write(1,&q,1);
	}
	write(1,&nl,1);
	
}
