#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	double sal, newSal;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%lf", &sal);
	if(sal <= 0) {
		printf("Sal�rio Inv�lido!");
	} else {
		newSal = sal + (sal * 25 / 100);
		printf("\nO novo sal�rio com aumento de 25%% � de %.2lf KZ\n", newSal);
	}
	
	
	return 0;
}