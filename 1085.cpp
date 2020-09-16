#include <iostream>

using namespace std;

int main(){
	int x, y, w, h;
	cin>>x>>y>>w>>h;
	
	int ans = x;
	if(ans > y)
		ans = y;
	if(ans > (h-y))
		ans = h-y;
	if(ans > (w-x))
		ans = w-x;
	cout<<ans;
	return 0;
}
