#include <cstdio>

int main(){
	int n, m;
	int result=0;
	
	scanf("%d %d", &n, &m); // n���߿��� 3���� �̾� m�� ���� ����� �� �����
	int arr[n];
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			for(int k=j+1; k<n; k++){
				int sum = arr[i]+arr[j]+arr[k];
				if(sum <= m && sum > result)
					result = sum;
			}
		}
	}
	printf("%d", result);
	return 0;
}
