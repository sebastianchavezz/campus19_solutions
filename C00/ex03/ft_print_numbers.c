#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void);
int main(void){
	ft_print_numbers();
	return 0;

}
void ft_print_numbers(void){
	char i;
	for(i='0';i<='9';i++){
		write(1,&i,1);
	}
	char nl = '\n';
	write(1,&nl,1);
}
