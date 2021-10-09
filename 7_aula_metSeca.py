'''
/*************************************************************************************
* Name: Método das secantes em Python                                                *
* Copyright: Computação Cientifica                                                   *
* Author: Luciano Mendes                                                             *
* Date: 23/08/20 hora:  09:02am                                                      *
* Description: Programa encontra soluções para equações usando o método das secantes *
**************************************************************************************/
'''

import math 

def f(x):
	return(x*x - x - 2.0)

TOL = 0.000001
N0 = 500

xn = 0.0
x = []  

a = float(input("Entre com o ponto 'a' do intervalo [a;b]: ")) 
b = float(input("Entre com o ponto 'b' do intervalo [a;b]: ")) 

x.append(a)
x.append(b)

i = 1
n = 1

while(math.fabs(f(xn)) > TOL):

	xn = x[n] - (x[n] - x[n-1])/(f(x[n]) - f(x[n-1]))*f(x[n])
	x.append(xn)     
	n = n + 1
	i = i + 1 

	if(i >= N0):
		break 

print("\nRaíz: %f\nIterações: %i\nf(%f) = %.10f\n"%(xn,i,xn,f(xn)))






































