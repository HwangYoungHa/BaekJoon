#include <cstdio>
#include <cmath>

// cout, cinº¸´Ù printf, scanf°¡ ´õ ºü¸£´Ù! 

int prime(int n){
	if(n<=1)
		return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return 0;
	}	
	return 1;
}

int main(){
	int t, n, ans;
	
	while(1){
		ans=0;
		scanf("%d", &n);
		if(n==0)
			break;
		for(int i=(n+1); i<=2*n; i++){
			if(prime(i)){
				ans+=1;
			}
		}
		printf("%d\n", ans);
	}
	return 0;	
}
