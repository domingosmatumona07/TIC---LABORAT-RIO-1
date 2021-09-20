#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int num, i, fat = 1;
	
	printf("Digite o número: ");
	scanf("%d", &num);
	
	if(num < 0) {
		printf("Digite um número não negativo!\n");
	} else {
		for(i = 1; i <= num; i++) {
			fat *= i;
		}
	
		printf("FATORIAL = %d\n", fat);	
	}
	
	return 0;
}