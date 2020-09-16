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
	return n;
}

int main(){
	int m, n;
	int sum=0;
	int min=10000;
	
	cin>>m>>n;
	for(int i=m; i<=n; i++){
		if(prime(i)){
			sum += prime(i);
			if(min > prime(i))
				min = prime(i);
		}
	}
	if(sum == 0)
		cout<<-1;
	else{
		cout<<sum<<endl;
		cout<<min;
	}
	return 0;	
}
