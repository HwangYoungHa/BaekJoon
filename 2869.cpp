#include <cstdio>

int main(){
	int a, b, v;
	int day=0;
	scanf("%d %d %d", &a, &b, &v);
	day = (v-b)/(a-b);
	if((v-b) % (a-b) != 0)
		day++;
	printf("%d", day);
	return 0;
}
