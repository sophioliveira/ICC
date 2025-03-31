#include <stdio.h>
#include <math.h>

int main()
	{
		float a, b, c, d;
		
		printf("Digite tres numeros \n", a, b, c);
		scanf("%f %f %f", &a, &b, &c);
		printf("a =%f\n b= %f\n c= %f\n", a, b, c);
		d = sqrt((pow(a,2)) + (pow(b,2)) + (pow(c,2)));
		printf("diagonal da caixa = %f\n", d);
	}
	
