#include <cstdio>
#include <cmath>

int terrat(){
	int x1, y1, r1, x2, y2, r2;
	scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
	double d = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
	int a = abs(r1-r2);
	
	if(d > r1 + r2)
		return 0;
	else if(d == r1 + r2)
		return 1;
	else{ // d < r1 + r2
		if(d == 0){
			if(r1 == r2) // 완전 동일
				return -1;
			else
				return 0; 
		}
		else{
			if(a < d)
				return 2;
			else if(a == d)
				return 1;
			else
				return 0;
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
		printf("%d\n", terrat());
	return 0;
}
