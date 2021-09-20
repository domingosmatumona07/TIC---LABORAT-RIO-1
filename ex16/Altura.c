#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	float altura[15];
	float menor, maior;
	int i;
	
	for(i = 1; i <= 15; i++) {
		printf("Digite a altura da %dª pessoa: ", i);
		scanf("%f", &altura[i]);
		if(i == 1) {
			menor = altura[i];
			maior = altura[i];
		} else if(maior < altura[i]) {
			maior = altura[i];
		} else if(menor > altura[i]) {
			menor = altura[i];
		}
	}
	
	printf("\n");
	printf("Menor altura do grupo: %.2f\n", menor);
	printf("Maior altura do grupo: %.2f\n", maior);
	
	return 0;
}