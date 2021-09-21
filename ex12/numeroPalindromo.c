#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	char num[6];
	
	printf("Digite o número: ");
	scanf("%s", num);
	
	strcpy(aux, num);
	strrev(num);

	int i = strcmp(aux, num);

	if(i == 0) {
		printf("O número %s é Palíndromo.\n", aux);
	} else {
		printf("O número %s não é Palíndromo.\n", aux);
	}
	return 0;
}
