#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet();
int main(void){
	ft_print_alphabet();
	return 0;
}
void ft_print_alphabet(void){
	char ch;
	for(ch ='a';ch <= 'z'; ch++){
		write(1,&ch,1);
	}
	char nl = '\n';
	write(1,&nl,2);
}

