#include <unistd.h>

void ft_print_comb(void);

int main(void){
	ft_print_comb();
	return 0;
}

void ft_print_comb(void){
	char c =',';
	char s = ' ';
	for(char i='0'; i<='9';i++){
		for(char j='0'; j<='9'; j++){
			for(char k='0'; k<='9';k++){
				if((i < j && j < k)&&(i != j && j != k && j != k)){
					if (i == '7'&&j=='8'&&k=='9'){
			           	  write(1,&i,1);
 	                                  write(1,&j,1);
                                          write(1,&k,1);
					
	char nl = '\n';
	write(1,&nl,1);
					}else{
						
					write(1,&i,1);
					write(1,&j,1);
					write(1,&k,1);
					write(1,&c,1);
					write(1,&s,1);
					}		
				}
			}
		}
	}
}
