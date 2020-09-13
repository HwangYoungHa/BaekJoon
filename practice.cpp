#include <cstdio>

int main(){
	int n;
	int first, i=1;
	
	scanf("%d", &n);
	while(1){
		first = i*(i-1)/2 + 1;
		if(n < first)
			break;
		else
			i++;
	}
	i--;
	first = i*(i-1)/2 + 1;
	int index = n-first+1;
	if(i % 2 == 0)
		printf("%d/%d", (index), (i-index+1));
	else
		printf("%d/%d",(i-index+1), (index));
	return 0;
}
