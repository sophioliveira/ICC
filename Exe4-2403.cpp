#include <stdio.h>
#include <math.h>

int main()
	{
		float r, v;
		
		printf("Digite o raio da circunferencia \n", r);
		scanf("%f", &r);
		v = (4.0/3.0) * M_PI * pow(r,3) ;
		
		printf("raio = %f \n volume = %f\n", r, v);
		
	}
	
