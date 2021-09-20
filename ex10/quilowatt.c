#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	double salMin, qtdQWatt, valQWatt, valPag, valDesc;
	
	printf("Digite o valor do sal�rio m�nimo: ");
	scanf("%lf", &salMin);
	printf("Insira a qtd de quilowatts consumida pela resid�ncia: ");
	scanf("%lf", &qtdQWatt);
	
	valQWatt = salMin / 5;
	valPag = qtdQWatt * valQWatt;
	valDesc = valPag - ((valPag * 15) / 100);
	
	printf("\nO valor de cada quilowatt � de %.2lf\n", valQWatt);
	printf("O valor a ser pago pela resid�ncia � de %.2lf\n", valPag);
	printf("O valor a ser pago com desconto de 15%% � de %.2lf\n", valDesc);
	
	return 0;
}