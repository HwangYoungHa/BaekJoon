#include <cstdio>

# define max 210000000

int main(){
	double a, b, c; // a : �������, b : �������(���ۺ�), c : �ǸŰ� 
	double cost, revenue;
	scanf("%d %d %d", &a, &b, &c);
	int n = 1; // �Ǹ� ��� 
	
	if(b >= c){
		printf("-1");
		return 0;
	}
	n=a/(c-b)+1;
	printf("%d", n);
	return 0;
}
