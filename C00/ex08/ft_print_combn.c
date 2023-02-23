#include <unistd.h>
#include <stdbool.h>

void pc(char a, int i, int n, int plafond, bool laatse);
void ft_print_comb(int n);
//void handle_one();
int main(void)
{
	ft_print_comb(5);
	
	return 0;
}
void ft_print_comb(int n){
	char c[10] = "0123456789";
	//hardcode
	
	if (n==1){
		char nl = '\n';
		write(1,&c,10);
		write(1,&nl,1);
		return;
	}
	if (n==9){
		char s = ' ';
		char komma = ',';
		char nl = '\n';
		char c9[9] = "012345678";
		char c8[9] ="123456789";
		write(1,&c9,9);
		write(1,&komma,1);
		write(1,&s,1);
		write(1,&c8,9);
		write(1,&nl,1);
		return;
	}

	n--;
	bool laatse = false;
	for (int i = 0; i <=10-n; ++i)
	{
		if(i == 10-n-1){
			laatse = true;
		}
		for (int j = 0; j < n; ++j)
			{
				pc(c[i+j],j,n,10-n+1-i,laatse);
			}	
	}
}
void pc(char a, int ii,int n, int plafond, bool laatse){
	char s = ' ';
	char komma = ',';
	char nl = '\n';
	char d[n];
	d[ii] = a;
	if(ii == n-1){
		for (int j = 1; j < plafond; ++j)
		{
			char plus_one = d[n-1] + j;

			for (int i = 0; i < n; ++i)
			{
				char temp =d[i];
				write(1,&temp,1);
				
			}
			write(1,&plus_one,1);
			if(laatse){
				write(1,&nl,1);
			}else{
				write(1,&komma,1);
				write(1,&s,1);
			}
		}
		
	
	}
}
