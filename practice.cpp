#include <cstdio>

int main(){
	int n;
	char word[100];
	scanf("%d", &n); // textȽ�� �Է� 
	int check=n;
	
	for(int i=0; i<n; i++){
		scanf("%s", &word); // �ܾ� �Է� 
		if(sizeof(word) == 1)
			continue;
		int count[27]={0, };
		int j=0;
		while(word[j] != '\0'){
			if (word[j] == word[j-1]){
				j++;
				continue;
			}
			int index = word[j]-97;
			count[index]++;
			if(count[index] >= 2){
				check--;
				//printf("%s �Ұ���!\n", word);
				break;
			}
			j++;
		}
	}
	
	printf("%d", check); // ��� ��� 
	
	return 0;
}
