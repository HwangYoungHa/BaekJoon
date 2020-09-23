#include <cstdio>

int init(int n){
	int a, b, c, d, e, f=0;
	int ans=0;
	for(int a=0; a<10; a++){
		for(int b=0; b<10; b++){
			for(int c=0; c<10; c++){
				for(int d=0; d<10; d++){
					for(int e=0; e<10; e++){
						for(int f=0; f<10; f++){
							ans = a*100000+b*10000+c*1000+d*100+e*10+f;
							if(ans+(a+b+c+d+e+f) == n)
								return ans;
						}
					}
				}
			}
		}
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", init(n));
	return 0;
}
