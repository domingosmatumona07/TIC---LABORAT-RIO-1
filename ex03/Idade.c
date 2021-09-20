#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int anoNasc, anoAtual;
	int idade, idade2050;
	
	printf("Digite o ano de nascimento: ");
	scanf("%d", &anoNasc);
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	printf("\n");
	if((anoNasc < 0) || (anoAtual < 0)) {
		   printf("Dados Inválidos!");	
	} else {
		if(anoAtual < anoNasc) {
			printf("Dados Inválidos! O ano atual não pode ser menor do que o ano de nascimento.");
		} else {
			idade = anoAtual - anoNasc;
			printf("Idade = %d anos\n", idade);
			if(anoAtual < 2050) {
				idade2050 = (idade) + (2050 - anoAtual);
				printf("Em 2050 terás %d anos\n", idade2050);
			}
		}
	}
	
	return 0;
}