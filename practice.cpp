#include <cstdio>

int total[50]={0, };
int big[50][2]={0, };

void check(int n){
	int k;
	for(int i=0; i<n; i++){ // 본인 
		k=1;
		for(int j=0; j<n; j++){ // 비교대상 
			if(i == j)
				continue;
			if(big[i][0] < big[j][0] && big[i][1] < big[j][1])
				k++;
		}
		total[i] = k;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &big[i][0], &big[i][1]);
	}
	
	check(n);
	
	for(int i=0; i<50; i++){
		if(total[i] == 0)
			break;
		else
			printf("%d ", total[i]);
	}
	return 0;
}
