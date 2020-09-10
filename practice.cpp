#include <cstdio>

#define MAX 1000001

int main(){
	int spel[27] = {0, };
	int i = 0;
	char word[MAX];
	int max = -1, index = -1; // 최다빈도 알파벳, 중복여부 확인 
	scanf("%s", &word);
	
	while(word[i] != '\0'){ // 알파벳별 빈도수 확인 
		if(97 <= word[i] && word[i] < 123) // 소문자일 경우 
			spel[word[i]-97]++;
		else if (65 <= word[i] && word[i] < 91) // 대문자일 경우 
			spel[word[i]-65]++;
		else
			break; 
		i++;
	}
	
	for(i=0; i<27; i++){
		if(max < spel[i]){ // 최다빈도 확인 
			max = spel[i];
			index = i;
		}
		else if(max == spel[i]) // 중복 존재 
			index = -1;
	}
	
	if(index == -1)
		printf("?");
	else
		printf("%c", index+65);
		
	return 0;
}
