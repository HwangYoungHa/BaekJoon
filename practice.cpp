//참고 : https://sihyungyou.github.io/baekjoon-10989/
#include <cstdio>

using namespace std;

int c[10001] = {0, }; // initialization
int main () {

    int n, temp, max;

    scanf("%d", &N); // 배열의 길이 

    max = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &temp); // input
        c[temp]++; // input에 해당하는 index 증가 
        if (temp > max)
			max = temp; // max 구하기 
    }

    for (int i = 0; i <= max; i++) {
        for(int j = 0; j < c[i]; j++)
			printf("%d\n", i); // array c의 index에 있는 값만큼 반복하여 출력 
    }
    return 0;
}
