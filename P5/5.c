#include <stdio.h>

int main(int argc, char *argvp[])
{
	int r = 10;		//range of target.
	int ck = 0;
	int check = r;

	while( ck == 0)
	{
		printf("Running: %d", check-10);
		check++;
		for(int i = 1; i <= r; i++){
			if( check % i != 0){
				ck = 0;
				i += r;
			} else ck++;
		}
	}
	printf("The solution is: %d\n", check);
}
