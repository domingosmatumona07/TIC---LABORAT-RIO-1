#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	double salMin, sal;
	int qtd;
	
	printf("Digite o valor do sal�rio m�nimo: ");
	scanf("%lf", &salMin);
	printf("Digite o valor do sal�rio: ");
	scanf("%lf", &sal);
	qtd = sal / salMin;
	
	printf("\nA qtd de sal�rios m�nimos � igual a: %d\n", qtd);
	
	return 0;
}