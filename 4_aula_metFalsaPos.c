/*************************************************************************************
* Name: Método da Falsa Posição em linguagem C                                       *
* Copyright: Computação Cientifica                                                   *
* Author: Luciano Mendes                                                             *
* Date: 01/08/20 hora: 10:48pm                                                       *
* Description: Programa encontra soluções para equações usando o método da F Posição.*
**************************************************************************************/


#include <stdio.h> //biblioteca padrão
#include <math.h>  //biblioteca com funções matemáticas


double f(double x)
{
	return( 2.0*sin(2.0*x)-x*x*x + 3.0);
}

int main()
{
	float a = 0, b = 0, c = 0, x0 = 0;
	int cont = 0;
	const int Ni = 100;
	const float l = 0.000001;
	const float tol = 0.000001;

	printf("Entre com o valor do ponto 'a' do intervalo [a;b]: ");
	scanf("%f",&a);
	printf("Entre com o valor do ponto 'b' do intervalo [a;b]: ");
	scanf("%f",&b);

	c = b - a;
	x0 = (a*f(b) - b*f(a))/(f(b) - f(a));

	while(c > l)
	{
		if(f(a)*f(x0) < 0.0)
		{
			b = x0;
		}
		if(f(a)*f(x0) > 0.0)
		{
			a = x0;
		}

		c = b - a;
		x0 = (a*f(b) - b*f(a))/(f(b) - f(a));
		cont++;

		if(cont >= Ni || fabs(f(x0)) <= tol)
		{
			break;
		}
	}
	
	printf("\n\nRaíz: %f\nIterações: %i\nf(%f) = %g\n\n",x0,cont,x0,f(x0));
	return 0;
}
