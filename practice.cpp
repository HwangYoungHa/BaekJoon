#include <cstdio>

#define MAX 1000001

int main(){
	int spel[27] = {0, };
	int i = 0;
	char word[MAX];
	int max = -1, index = -1; // �ִٺ� ���ĺ�, �ߺ����� Ȯ�� 
	scanf("%s", &word);
	
	while(word[i] != '\0'){ // ���ĺ��� �󵵼� Ȯ�� 
		if(97 <= word[i] && word[i] < 123) // �ҹ����� ��� 
			spel[word[i]-97]++;
		else if (65 <= word[i] && word[i] < 91) // �빮���� ��� 
			spel[word[i]-65]++;
		else
			break; 
		i++;
	}
	
	for(i=0; i<27; i++){
		if(max < spel[i]){ // �ִٺ� Ȯ�� 
			max = spel[i];
			index = i;
		}
		else if(max == spel[i]) // �ߺ� ���� 
			index = -1;
	}
	
	if(index == -1)
		printf("?");
	else
		printf("%c", index+65);
		
	return 0;
}
