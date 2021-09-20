#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	double sal, newSal;
	
	printf("Digite o salário do funcionário: ");
	scanf("%lf", &sal);
	if(sal <= 0) {
		printf("Salário Inválido!");
	} else {
		newSal = sal + (sal * 25 / 100);
		printf("\nO novo salário com aumento de 25%% é de %.2lf KZ\n", newSal);
	}
	
	
	return 0;
}