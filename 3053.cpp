#include <cstdio>
#include <cmath>
#define _USE_MATH_DEFINES // 3.141592 »ç¿ë½Ã Æ²¸².... 

using namespace std;

double uclid(double n){
	return M_PI * n * n;
}

double geometry(double n){
	return 2 * n * n;
}

int main(){
	double r;
	scanf("%lf", &r);
	printf("%.6f\n", uclid(r));
	printf("%.6f", geometry(r));
	return 0;
}
