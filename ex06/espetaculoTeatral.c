#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	double custo, precoConv;
	int qtdConv;
	
	printf("Digite o valor do custo do espet�culo: ");
	scanf("%lf", &custo);
	printf("Digite o pre�o do convite: ");
	scanf("%lf", &precoConv);
	
	qtdConv = custo / precoConv;
	
	printf("\nDevem ser vendidos pelo menos %d convites para que o custo do espet�culo seja alcan�ado!\n", qtdConv);
	
	return 0;
}