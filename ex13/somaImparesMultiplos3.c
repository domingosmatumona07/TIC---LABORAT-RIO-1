#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int soma = 0, i;
	
	for(i = 1; i <= 500; i++) {
		if((i % 2 != 0) && (i % 3 == 0)) {
			soma += i;
		}
	}
	
	return 0;
}