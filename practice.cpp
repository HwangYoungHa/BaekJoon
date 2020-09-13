#include <cstdio>

int main(){
	int n, ans=1;
	int compare = 1;
	int sum = 6;
	
	scanf("%d", &n);
	while(1){
		if(n <= compare)
			break;
		else{
			ans++;
			compare += sum;
			sum += 6;
		}
	}
	
	printf("%d", ans);
	return 0;
}
