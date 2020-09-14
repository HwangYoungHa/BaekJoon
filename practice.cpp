#include <cstdio>

void apt(){
	int k, n; // k : 類, n : �ˉ� 
	int high[14]={0, }, low[14]={0, };
	scanf("%d", &k);
	scanf("%d", &n);
	
	for(int i=0; i<14; i++)
		low[i]=(i+1);
	
	if(k == 0){ // 類熱陛 0類橾 唳辦 
		printf("%d\n", low[n+1]);
		return;
	}
	
	for(int i=0; i<k; i++) { // 類熱 
		for(int j=0; j<n; j++){ // �ˉ� 
			if(j == 0) 
				high[j] = 1;
			else{
				high[j] = high[j-1] + low[j];
			}
		}
		for(int j=0; j<n; j++){ // 犒餌 
			low[j] = high[j];
			high[j] = 0;
		}
	}
	printf("%d\n", low[n-1]);
	return ;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
		apt();
	return 0;
}
