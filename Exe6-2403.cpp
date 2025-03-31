#include <stdio.h>
#include <math.h>

int main()
	{
		float a, b, soma, sub, mult, divi;
		
		printf("Digite dois numeros \n", a, b);
		scanf("%f %f", &a, &b);
		soma = a + b;
		sub = a - b;
		mult = a * b;
		divi = a / b;
		printf("%f + %f =%f\n", a, b, soma);
		printf("%f - %f =%f\n", a, b, sub);
		printf("%f * %f =%f\n", a, b, mult);
		printf("%f / %f =%f\n", a, b, divi);
	}
	
