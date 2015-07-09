#include <stdio.h>
#include <string.h>

int main()
{
	int i=0, length, lines;
	char word[100] = "";
	char words[100][100];
	char new_word[100] = "";
	scanf("%d", &lines);

	
	while(i < lines) {
		scanf("%s", word);
		length = strlen(word);
		if(length > 10) {
			sprintf(words[i], "%c%d%c", word[0],length-2, word[length-1]);
		}
		else {
			strcpy(words[i], word);
		}
		i++;
	}

	i = 0;
	while(i < lines) {
		printf("%s\n", words[i]);
		i++;
	}
}
