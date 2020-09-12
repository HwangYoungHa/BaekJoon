long long sum(int *a, int n){
	int i=0;
	long long ret=0;
	for(i=0; i<n; i++){
		ret += a[i];
	}
	return ret;
}
