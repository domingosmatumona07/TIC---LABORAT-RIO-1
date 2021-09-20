#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	float peso, qtd;
	float qtdCincoD, resto;
	
	printf("Digite o peso do saco de ra��o (em kg): ");
	scanf("%f", &peso);
	printf("Digite a quantidade de ra��o fornecida para cada gato (em g): ");
	scanf("%f", &qtd);
	qtdCincoD = (qtd * 2) * 5.0;
	resto = peso - (qtdCincoD / 1000);
	
	if(resto < 1) {
		printf("\nAp�s 5 dias, restar� %.2fg de ra��o no saco.\n", resto*1000);
	} else {
		printf("\nAp�s 5 dias, restar� %.2fkg de ra��o no saco.\n", resto);
	}
		
	return 0;
}