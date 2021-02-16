#include <stdio.h>
#include <math.h>

// int형을 사용할 경우 값이 커질 때 시간 초과가 나타난다. 
long long fly(long long len){
	long long x = 1;
	long long t=0;
	long long lgroup, rgroup;
	
	// 그룹을 나눔(덧셈 항은 1, 2, 3, 3, 4, 4, ... 형식으로 나타남) 
	while(true){
		lgroup = x * (x-1) + 1;
		rgroup = x * (x+1) + 1;
		if(len >= lgroup && len < rgroup)
			break;
		else
			x++;
	}
	
	// 해당 그룹에서 left인지, right인지 구분 후 t값을 구한다. 
	if(len < x*x+1)
		t = 2*x - 1;
	else
		t = 2 * x;
		
	return t;
}

int main(){
	int n;
	long long a, b;
	int i=0;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", fly(b-a));
	}
	return 0;
}
