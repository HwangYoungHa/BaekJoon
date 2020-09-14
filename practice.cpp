#include <cstdio>

void apt(){
	int k, n; // k : ��, n : ȣ�� 
	int high[14]={0, }, low[14]={0, };
	scanf("%d", &k);
	scanf("%d", &n);
	
	for(int i=0; i<14; i++)
		low[i]=(i+1);
	
	if(k == 0){ // ������ 0���� ��� 
		printf("%d\n", low[n+1]);
		return;
	}
	
	for(int i=0; i<k; i++) { // ���� 
		for(int j=0; j<n; j++){ // ȣ�� 
			if(j == 0) 
				high[j] = 1;
			else{
				high[j] = high[j-1] + low[j];
			}
		}
		for(int j=0; j<n; j++){ // ���� 
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
