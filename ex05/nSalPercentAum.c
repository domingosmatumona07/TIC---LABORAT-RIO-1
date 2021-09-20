#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	double sal, newSal;
	float perc;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%lf", &sal);
	printf("Digite o percentual de aumento: ");
	scanf("%f", &perc);
	if((sal <= 0) || (perc < 0)) {
		printf("Dados Inv�lidos!");
	} else {
		newSal = sal + (sal * perc / 100);
		printf("\nO novo sal�rio com aumento de %.2f%% � de %.2lf KZ\n", perc, newSal);
	}
	return 0;
}