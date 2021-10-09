#include <stdio.h>
#include <math.h>

#define TOL 1E-20
#define N0 100

double f(double x)
{
    return (x*x - x - 2.0);
}
int main()
{
    double a = 0.0, b = 0.0, xn = 0.0, x[N0] = {0}; 
    int i = 0, n = 1; 

    printf("Entre com o valor de 'a' do intervalo [a:b]: ");
    scanf("%lf",&a);
    printf("Entre com o valor de 'b' do intervalo [a:b]: ");
    scanf("%lf",&b);

	x[0] = a;
	x[1] = b; 


    while(fabs(f(x[n]))>= TOL)
    {
        xn = x[n+1] = x[n] - ((x[n] - x[n-1])/(f(x[n])-f(x[n-1])))*f(x[n]);
        n ++;
        i++; 
        if(n >= N0)
           break;
    }
     printf("Raíz: %f\nIterações %i\nf(%f) = %f\n", xn,i,xn, f(xn));

    return 0;
}
