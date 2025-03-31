#include <stdio.h>
#include <math.h>

int main()
	{
		float b, h, a;
		
		printf("Digite a base e a altura do triangulo \n", b, h);
		scanf("%f %f", &b, &h);
		a = (b * h)/2;
		printf("base =%f\n altura= %f\n area= %f\n", b, h, a);	
	}
	
