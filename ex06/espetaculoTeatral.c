#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	double custo, precoConv;
	int qtdConv;
	
	printf("Digite o valor do custo do espetáculo: ");
	scanf("%lf", &custo);
	printf("Digite o preço do convite: ");
	scanf("%lf", &precoConv);
	
	qtdConv = custo / precoConv;
	
	printf("\nDevem ser vendidos pelo menos %d convites para que o custo do espetáculo seja alcançado!\n", qtdConv);
	
	return 0;
}