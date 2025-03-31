#include <stdio.h>
#include <math.h>

int main()
	{
		int a, b, c, d, r, s;
		
		printf("Informe informe tres numeros inteiros positivos \n");
		scanf("%d %d %d", &a, & b, &c);
		d = (pow(a + b, 2) + pow(b + c, 2))/2;
		printf("O valor de D e: %d \n", d);
		
	}
	
