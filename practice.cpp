//���� : https://sihyungyou.github.io/baekjoon-10989/
#include <cstdio>

using namespace std;

int c[10001] = {0, }; // initialization
int main () {

    int n, temp, max;

    scanf("%d", &N); // �迭�� ���� 

    max = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &temp); // input
        c[temp]++; // input�� �ش��ϴ� index ���� 
        if (temp > max)
			max = temp; // max ���ϱ� 
    }

    for (int i = 0; i <= max; i++) {
        for(int j = 0; j < c[i]; j++)
			printf("%d\n", i); // array c�� index�� �ִ� ����ŭ �ݺ��Ͽ� ��� 
    }
    return 0;
}
