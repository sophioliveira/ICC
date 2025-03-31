#include <stdio.h>
#include <math.h>

int main()
	{
		float c1, c2, hip;
		
		printf("Informe o valor dos catetos \n");
		scanf("%f %f", &c1, &c2);
		hip = sqrt((pow(c1,2)) + (pow(c2,2)));
		printf("Cateto1 = %.1f\n Cateto2 = %.1f\n Hipotenusa = %.1f", c1, c2, hip);
		
	}
	
