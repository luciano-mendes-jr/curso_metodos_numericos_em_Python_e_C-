/*
	Name: Método da Bisseção em C
	Copyright: NDF
	Author: Luciano Mendes
	Date: 25/07/20 hora: 17:18pm
	Description: Programa encontra soluções para equações usando o método da Bisseção.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define l 1e-4 // amplitude final de [a:b]
#define e 1e-4 // Erro tolerado ao falcular a f(x) ~ e
#define Ni 10000 // numero max de interações



float f(float x)
{
	return(x*x + x - 2.0);
}

int main(void)
{
	float c = 0, a = 0, b = 0, x = 0;
	int cont = 0;
	printf("\nEntre com o ponto 'a' do intervalo [a,b]: ");
	scanf("%f",&a);
	printf("Entre com o ponto 'b' do intervalo [a,b]: ");
	scanf("%f",&b);

	c = b - a;
	x = (a + b)/2.0;

	while(c > l || fabs(f(x)) > e)
	{
		if((f(a)*f(x)) < 0.0)
		{
			b = x;
		}
		if((f(a)*f(x)) > 0.0)
		{
			a = x;
		}

		c = b - a;       //amplitude do intervalo que contém a raíz.
		x = (a + b)/2.0; // função geradora de aproximações.
		cont ++;
		
		if(cont >= Ni)
		{
			break;
		}

	}
	printf("\n\n Raiz: %f \n Iterações: %d \n f(%f) = %g \n\n\n",x,cont,x,f(x));

	return 0;
}
