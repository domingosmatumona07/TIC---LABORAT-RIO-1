#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int i, num, somaImp, contImp, somaPar, contPar;
	float mediaPar, mediaImp;
	
	somaImp = somaPar = contImp = contPar = 0;
	
	for(i = 1; i <= 10; i++) {
		printf("Digite o %d� primeiro: ", i);
		scanf("%d", &num);
		if(num % 2 != 0) {
			somaImp += num;
			contImp++;
		} else {
			somaPar += num;
			contPar++;
		}
	}
	
	if(contPar != 0) {
		mediaPar = somaPar / contPar;
	}
	if(contImp != 0){
		mediaImp = somaImp / contImp;
	}
	
	printf("\nM�dia Pares = %f\n", mediaPar);
	printf("M�dia �mpares = %f\n", mediaImp);
	
	return 0;
}