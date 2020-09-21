#include <cstdio>
#include <cmath>

int cnt=0;

void hanoi(int n, int x, int y, int z){ // x에서 y를 이용, z로 이동 
	cnt++;
	if(n==0)
		return;
	else{
		hanoi(n-1, x, z, y);
		printf("%d %d\n", x, z);
		hanoi(n-1, y, x, z);
	}
}

int main(){
	int n, m;
	scanf("%d", &n);
	m = pow(2, n)-1;
	printf("%d\n", m);
	hanoi(n, 1, 2, 3); // n개를 1에서 3으로 옮김 
	return 0;
}
