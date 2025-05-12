#include <stdio.h>
#include <math.h>

int main()
{
	int N, i= 1;
	float s = 0;
	float m;
	
	printf("Informe um numero inteiro positivo: \n");
	scanf("%d", &N);
	 if( N <= 0)
	 {
	 	printf("o numero informado e invalido!\n");
	 }
	while(i <= N)
 	{
		s += i;
		i ++;
	}
	m = s / N;

	printf("A soma dos numeros de 1 ate %d e: %2.f\n", N, s);
	printf("A media dos numeros e: %2.f\n", m);
}