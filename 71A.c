#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i=0, length, lines;
	char word[100] = "";
	scanf("%d", &lines);
	
	while(i < lines) {
		scanf("%s", word);
		length = strlen(word);
		if(length > 10) {
			printf("%c%d%c\n", word[0],length-2, word[length-1]);
		}
		else {
			printf("%s\n", word);
		}
		i++;
	}

	return 0;
}
