#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int soma = 0, i;
	
	for(i = 1; i <= 500; i += 2) {
		if(i % 3 == 0) {
			soma += i;
		}
	}
	
	printf("Soma = %d\n", soma);
	
	return 0;
}
