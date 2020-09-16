#include <iostream>
#include <cmath>

using namespace std;

int prime(int n){
	if(n<=1)
		return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return 0;
	}
	return 1;
}

int main(){
	int n, cnt=0;
	cin>>n;
	int arr[n]={0, };
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
		cnt += prime(arr[i]);
	}
	
	cout<<cnt;
	return 0;	
}
