#include <stdio.h>
#include <math.h>

int main()
	{
		float r, a, d, p;
		
		printf("Digite o raio da circunferencia \n", r);
		scanf("%f", &r);
		a = pow(r,2) * M_PI;
		d = r * 2;
		p = 2 * M_PI * r;
		printf("raio = %f \n area = %f\n diametro = %f\n perimetro = %f", r, a, d, p);
		
	}
	
