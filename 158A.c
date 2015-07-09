#include <stdio.h>

int main()
{
	int n, k, i, a, score=101, rank=1;
	scanf("%d %d", &n, &k);

	i = 0;
	while(i<n) {
		scanf("%d", &a);
		if(a <= 0) break;
		++i;
		if(a < score) {
		   	score = a;
			rank = i;
		}
		else {
			continue;
		}
		if(rank > k) {
			--i;
			break;
		}
		
	}
	printf("%d", i);

	return 0;
}
