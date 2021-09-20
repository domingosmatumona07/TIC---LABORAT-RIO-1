#include <stdio.h>

int main() {
	int term1 = 0, term2 = 1;
	int nextTerm, i;
	
	printf("%d  %d  ", term1, term2);
	for(i = 3; i < 20; i++) {
		nextTerm = term1 + term2;
		printf("%d  ", nextTerm);
		term1 = term2;
		term2 = nextTerm;
	}
	
	return 0;
}