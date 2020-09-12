#include <cstdio>
# define max 10001

int arr[max]={0, };

void d(int n){
	int ret = n;
	while(n > 0){
		ret += (n%10);
		n = n / 10;
	}
	arr[ret] = 1;
	return;
}

int main(){
	for(int i = 1; i<max; i++)
		d(i);
	
	for(int i = 1; i<max; i++){
		if(arr[i] == 0)
			printf("%d\n", i);
	}
	return 0;
}

