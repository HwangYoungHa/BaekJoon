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
			if(temp % 1000 == 666){ // 666���� �߰� 
				cnt++;
				break;
			}
			temp /= 10; // �߰� ���ϸ� 1���ڸ� �ڸ� 
		}
		if(cnt == n)
			break;
	}
	printf("%d", num);
	return 0;
}
