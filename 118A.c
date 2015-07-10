#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char words[101] = {0};
	char word;
	char output[201] = {0};
	int i;
	int j = 0;

	scanf("%s", words);
	int len = strlen(words);
	for(i=0; i<len; i++)
	{
		word = tolower(words[i]);
		if(!strchr("aoyeui", word)) {
			output[j++] = '.';
			output[j++] = word;
		}
	}
	printf("%s\n", output);

	return 0;
}