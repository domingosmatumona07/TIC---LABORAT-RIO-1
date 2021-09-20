#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float alturaChico = 1.50, alturaJuca = 1.10;
	int anos = 0;
	
	while(alturaJuca <= alturaChico) {
		alturaChico += (2.00 / 100.00);
		alturaJuca += (3.00 / 100.00);
		anos++; 
	}
	
	
	printf("\nSerão necessários %d ano(s) para que Juca seja maior que Chico.\n", anos);
	return 0;
}