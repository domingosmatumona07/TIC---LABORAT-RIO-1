#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	float peso, qtd;
	float qtdCincoD, resto;
	
	printf("Digite o peso do saco de ração (em kg): ");
	scanf("%f", &peso);
	printf("Digite a quantidade de ração fornecida para cada gato (em g): ");
	scanf("%f", &qtd);
	qtdCincoD = (qtd * 2) * 5.0;
	resto = peso - (qtdCincoD / 1000);
	
	if(resto < 1) {
		printf("\nApós 5 dias, restará %.2fg de ração no saco.\n", resto*1000);
	} else {
		printf("\nApós 5 dias, restará %.2fkg de ração no saco.\n", resto);
	}
		
	return 0;
}