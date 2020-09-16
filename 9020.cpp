#include <cstdio>
#include <cmath>

// cout, cin보다 printf, scanf가 더 빠르다! 

int prime(int n){ // 소수 구하기 
	if(n<=1)
		return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return 0;
	}	
	return 1;
}

void goldbach(){
	int n;
	scanf("%d", &n);
	if(n%2 != 0 || n < 2)
		return;
	int a=n/2;
	int b=n/2;
	while(1){
		if(prime(a) && prime(b)){
			printf("%d %d\n", a, b);
			return;
		}
		a--;
		b++;
	}
}

int main(){
	int t;
	scanf("%d", &t) ;
	
	for(int i=0; i<t; i++){
		goldbach();
	}
	return 0;	
}
