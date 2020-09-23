#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n, temp = 0;
	int num = 1000, cnt = 1;
	
	scanf("%d", &n);
	if(n==1){
		printf("666");
		return 0;
	}
	while(num++){
		temp = num;
		while(temp){
			if(temp % 1000 == 666){ // 666숫자 발견 
				cnt++;
				break;
			}
			temp /= 10; // 발견 못하면 1의자리 자름 
		}
		if(cnt == n)
			break;
	}
	printf("%d", num);
	return 0;
}
