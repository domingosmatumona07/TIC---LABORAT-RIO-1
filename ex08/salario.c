#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	int horas;
	double salMin, valHR, salBruto, imposto, salario;
	
	printf("Digite o n�mero de horas trabalhadas: ");
	scanf("%d", &horas);
	printf("Digite o valor do sal�rio m�nimo: ");
	scanf("%lf", &salMin);
	
	valHR = salMin / 2.0;
	salBruto = horas * valHR;
	imposto = (salBruto * 3) / 100;
	salario = salBruto - imposto;
	
	printf("\nO sal�rio a receber � de %.2lf\n", salario);
	
	return 0;
}