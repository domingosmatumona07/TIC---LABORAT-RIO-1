#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num  > (-1)) {
    	while(num > (-1)) {
    		printf("Sucessor: %d\n", num+1);
			printf("Digite um número: ");
			scanf("%d", &num);
        }		
	}
	
	return 0;
}