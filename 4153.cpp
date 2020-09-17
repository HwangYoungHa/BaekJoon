#include <cstdio>

using namespace std;

void check(int a, int b, int c){
	if(a > b && a > c){
		if(a*a == b*b + c*c){
			printf("right\n");
			return;
		}
	}
	else if(b > a && b > c){
		if(b*b == a*a + c*c){
			printf("right\n");
			return;
		}
	}
	else if(c > a && c > b){
		if(c*c == a*a + b*b){
			printf("right\n");
			return;
		}
	}
	printf("wrong\n");
	return;
}

int main(){
	int a, b, c;
	while(1){
		scanf("%d %d %d", &a, &b, &c);
		if(a+b+c == 0)
			break;
		check(a, b, c);
	}
}
