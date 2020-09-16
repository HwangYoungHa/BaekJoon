#include <cstdio>
#include <cmath>

// cout, cin보다 printf, scanf가 더 빠르다! 

int prime(int n){
	if(n<=1)
		return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return 0;
	}	
	return n;
}

int main(){
	int m, n;
	
	scanf("%d %d", &m, &n);
	for(int i=m; i<=n; i++){
		if(prime(i)){
			printf("%d\n", prime(i));
		}
	}
	return 0;	
}
