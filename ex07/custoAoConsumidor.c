#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	double preco, lucD, imp, precoFinal;
	float percLucD, percImp;
	
	printf("Entre com o\n\n");
	printf("Preço de fábrica do veículo: ");
	scanf("%lf", &preco);
	printf("Percentual de lucro do distribuidor: ");
	scanf("%f", &percLucD);
	printf("Percentual de impostos: ");
	scanf("%f", &percImp);
	
	lucD = (preco * percLucD) / 100;
	imp = (preco * percImp) / 100;
	precoFinal = preco + lucD + imp;
	
	printf("\n");
	printf("O valor correspondente ao lucro do distribuidor é de %.2lf\n", lucD);
	printf("O valor correspondente aos impostos é de %.2lf\n", imp);
	printf("O preço final do veículo é de %.2lf\n", precoFinal);
	
	return 0;
}