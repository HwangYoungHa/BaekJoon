#include <cstdio>

int hansu(int n){
	int arr[3]={0, };
	int i=0;
	
	if(n < 100){ // 100 ¹Ì¸¸ 
		return 1;
	}
	else if(n == 1000)
		return 0;
	else{
		while(n > 0){
			arr[i] = n%10;
			n = n/10;
			i++;
		}
	
		if(arr[2]-arr[1] != arr[1]-arr[0]){
			return 0;;
		}
		return 1;
	} 
}

int main(){
	int n, cnt=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		cnt += hansu(i);
	printf("%d", cnt);
	return 0;
}
