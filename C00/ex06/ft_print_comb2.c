#include <unistd.h>

void ft_print_comb2(void);

int main(void){
	ft_print_comb2();
	return 0;
}
void ft_print_comb2(void){
	char s =' ';
	char c=',';
	char nl='\n';
	for(char i1='0';i1<='9';i1++){
	for(char i2='0';i2<='9';i2++){
		for(char j1='0';j1<='9';j1++){
		for(char j2='0';j2<='9';j2++){
			if(i1+ i2 <j1+ j2 ){
			if(i1 =='9' &&i2=='8'&&j1=='9'&&j2=='9'){
				write(1,&i1,1);
				write(1,&i2,1);
				write(1,&s,1);
				write(1,&j1,1);
				write(1,&j2,1);
				write(1,&nl,1);
	
			}else{	
				write(1,&i1,1);
				write(1,&i2,1);
				write(1,&s,1);
				write(1,&j1,1);
				write(1,&j2,1);
				write(1,&c,1);
				write(1,&s,1);
				

			}
		}
		}
	}
	}
}	
}
