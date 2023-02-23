#include <unistd.h>

void ft_print_reverse_alphabet(void);
int main(void){
	ft_print_reverse_alphabet();
	return 0;
}

void ft_print_reverse_alphabet(void){
	char ch;
	for(ch = 'z'; ch>='a'; ch--){
		write(1,&ch,1);

	}
	char nl ='\n';
	write(1,&nl,1);
}
