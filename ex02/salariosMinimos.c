#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	double salMin, sal;
	int qtd;
	
	printf("Digite o valor do salário mínimo: ");
	scanf("%lf", &salMin);
	printf("Digite o valor do salário: ");
	scanf("%lf", &sal);
	qtd = sal / salMin;
	
	printf("\nA qtd de salários mínimos é igual a: %d\n", qtd);
	
	return 0;
}