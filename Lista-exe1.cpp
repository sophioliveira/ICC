#include <stdio.h>
#include <math.h>

int main()
	{
		float p1, x1, y1, p2, x2, y2, dis, dif1, dif2;
		
		printf("Informe os pontos x e y do ponto 1\n");
		scanf("%f %f", &x1, &y1);
		printf("Informe os pontos x e y do ponto 2\n");
		scanf("%f %f", &x2, &y2);
		dif1 = x2 - x1;
		dif2 = y2 - y1;
		dis = sqrt((pow(dif1, 2)) + (pow(dif2, 2)));
		printf("A distancia entre esses pontos e: %.2f", dis);
		
	}
	
