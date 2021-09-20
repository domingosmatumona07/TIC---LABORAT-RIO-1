#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	char num[6];
	char aux[6];
	char digs[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int k, isNan = 0;
	
	printf("Digite o número: ");
	scanf("%s", num);
	
	int j = 0;
	
	while(num[j] != '\0') {
		for(k = 0; digs[k] != '\0'; k++) {
			if(num[j] == digs[k]) {
				isNan++;
				break;
			}
		}
		j++;
	}
	
	if(isNan == j) {
		strcpy(aux, num);
		strrev(num);
	
		int i = strcmp(aux, num);
		
		if(i == 0) {
			printf("O número %s é Palíndromo.\n", aux);
		} else {
			printf("O número %s não é Palíndromo.\n", aux);
		}
	} else {
		printf("Digite somente números!");
	}
	return 0;
}