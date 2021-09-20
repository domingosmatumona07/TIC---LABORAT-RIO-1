#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	char nomes[5][20];
	int diasUso[5], i;
	double totConta[5], totHotel = 0.00;
	
	for(i = 0; i < 5; i++) {
		printf("Digite o nome do %dº cliente: ", i+1);
		scanf("%s", nomes[i]);
		printf("Por quantos dias usou o hotel? ");
		scanf("%d", &diasUso[i]);
	}
	
	for(i = 0; i < 5; i++) {
		if(diasUso[i] < 15) {
			totConta[i] = (50.00 * diasUso[i]) + (4.00 * diasUso[i]);
		} else if(diasUso[i] == 15) {
			totConta[i] = (50.00 * diasUso[i]) + (3.60 * diasUso[i]);
		} else {
			totConta[i] = (50.00 * diasUso[i]) + (3.00 * diasUso[i]);
		}
		
		totHotel += totConta[i];
	}
	
	printf("\n\n");
	for(i = 0; i < 5; i++) {
		printf("Cliente %d: %s\n", i+1, nomes[i]);
		printf("Total da Conta: USD %.2lf\n\n", totConta[i]);
	}
	
	printf("O total ganho pelo hotel foi de: %.2lf\n", totHotel);
	
	return 0;
}