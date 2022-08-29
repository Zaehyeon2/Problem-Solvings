#include <stdio.h>

int is_vowel(char c){
	if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
	return 0;
}

int get_vowel(char word[]){
	int ret=0;
	for(int i=0;word[i]!='\0';i++){
		if(is_vowel(word[i])){
			ret++;
		}
	}
	return ret;
}

int main(){
	char word[105]={};
	scanf("%s",word);
	printf("%d",get_vowel(word));
}
