#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	float lado, area;
	
	printf("Digite o lado do quadrado: ");
	scanf("%f", &lado);
	area = lado * lado;
	
	printf("A �rea do quadrado � de: %.2f\n", area);
	return 0;
}