#include <cstdio>
#include <cmath>

int cnt=0;

void hanoi(int n, int x, int y, int z){ // x���� y�� �̿�, z�� �̵� 
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
	hanoi(n, 1, 2, 3); // n���� 1���� 3���� �ű� 
	return 0;
}
