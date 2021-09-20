#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	double a, b, c, delta, x1, x2;
	
	printf("Digite os coeficientes a, b, c: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	delta = (b * b) - (4 * a *c);
	
	printf("\nDELTA = %lf\n\n", delta);
	if(delta < 0) {
		printf("A equação não possui raizes reais.");
	} else if(delta == 0){
		printf("A equação possui apenas uma raiz real\nX = %lf\n", ((-(b) + sqrt(delta)) / (2 * a)));
	} else {
		printf("A equação posssui duas raizes reais\n");
		x1 = (-(b) + sqrt(delta)) / (2 * a);
		x2 = (-(b) - sqrt(delta)) / (2 * a);
		
		printf("X1 = %lf\n", x1);
		printf("X2 = %lf\n", x2);
	}
	
	return 0;
}