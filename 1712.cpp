#include <cstdio>

# define max 210000000

int main(){
	double a, b, c; // a : 고정비용, b : 가변비용(제작비), c : 판매가 
	double cost, revenue;
	scanf("%d %d %d", &a, &b, &c);
	int n = 1; // 판매 대수 
	
	if(b >= c){
		printf("-1");
		return 0;
	}
	n=a/(c-b)+1;
	printf("%d", n);
	return 0;
}
