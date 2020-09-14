#include <cstdio>

// 계속 시간초과가 난다....

void space(){
	long long x, y, ans;
	scanf("%d %d", &x, &y);
	long long dist = (y-x);
	long long a, n=1; // a : 거리의 기준 
	
	while(1){
		a = n*(n-1)+1;
		if (a <= dist && dist < n*(n+1)+1)
			break;
		n++;
	}
	
	if(dist - a < n*(n+1)+1 - dist) // 작은거에 더 가까움 
		ans = n*2-1;
	else
		ans = n*2;
	
	printf("%d\n", ans);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
		space();
	return 0;
}
