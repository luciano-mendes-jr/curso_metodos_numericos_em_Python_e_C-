/************************************************************************************
* Name: Método de Newton em Linguagem C                                             *
* Copyright: Computação Cientifica                                                  *
* Author: Luciano Mendes                                                            *
* Date: 01/09/20 hora:  02:05am                                                     *
* Description: Programa encontra soluções para equações usando o método de Newton   * 
*************************************************************************************/

#include <stdio.h>
#include <math.h>

#define e 1E-20
#define N_max 10


double f(double x)
{
	return(x*x-x-2.0);
}

double df(double x)
{
	const double h = 0.0000001;
 	return((f(x + h) - f(x))/h);
}

int main(){

	double x0 = 0.0 , x = 0.0; 
    int Nitera = 0; 
    printf("\n\nEntre aproximação inicial: ");
    scanf("%lf",&x0);

	while(Nitera < N_max) // loop "infinito"
    {
       x = x0 - f(x0)/df(x0);  	  
       x0 = x;
	   Nitera++;
	   if(fabs(f(x)) <= e)
			break;
 		
    }
	printf("\nRaíz: %f\nIterações %i\nf(%f) = %f\n\n\n", x0, Nitera, x0,f(x0));

	return 0;
}























