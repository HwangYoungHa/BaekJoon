#include <cstdio>

void hotel(){
	int h, w, n;
	int room;
	int floor, num;
	scanf("%d %d %d", &h, &w, &n);
	
	num = n / h; // ȣ�� 
	
	if(n % h == 0) // ������� 
		floor = h;
	else{
		floor = n % h;
		num++; 
	}	
	
	room = floor * 100 + num;
	printf("%d\n", room);
	return ;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
		hotel();
	return 0;
}
