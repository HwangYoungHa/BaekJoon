#include <stdio.h>

void factorization(int n){
	int i=0;
	while(true){
		if(n <= 1)
			return;
		i=2;
		while(true){	
			if(n % i == 0){
				printf("%d\n", i);
				n = n / i;
				break;
			}
			else{
				i++;
			}	
		}
	}
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	factorization(n);
	return 0;
}
