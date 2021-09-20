#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	double sal, newSal;
	float perc;
	
	printf("Digite o salário do funcionário: ");
	scanf("%lf", &sal);
	printf("Digite o percentual de aumento: ");
	scanf("%f", &perc);
	if((sal < 0) || (perc < 0)) {
		printf("Dados Inválidos!");
	} else {
		newSal = sal + (sal * perc / 100);
		printf("\nO novo salário com aumento de %.2f%% é de %.2lf KZ\n", perc, newSal);
	}
	return 0;
}
