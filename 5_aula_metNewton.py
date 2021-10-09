# -*- coding: utf-8 -*-
'''
**************************************************************************************
* Name: Método de Newton em python                                                   *
* Copyright: NDF                                                                     *
* Author: Luciano Mendes                                                             *
* Date: 02/08/20 hora: 07:50pm                                                       *
* Description: Programa encontra soluções para equações usando o método de Newton.   *
**************************************************************************************
'''
import math

def f(x):
    return(8.0 - 4.5*(x-math.sin(x)))
def df(x):
    h = 0.0001
    return((f(x + h) - f(x))/h)

TOL = 1e-10
Ni = 100
cont = 0
x = 0.0
x0 = float(input("Entre com a aproximação inicial: "))

while(math.fabs(f(x0)) > TOL):
    x = x0 - f(x0)/df(x0)
    x0 = x
    cont = cont + 1
    if(cont >= Ni):
        break
print("\n\nRaíz: %f\nIterações: %d\nf(%f) = %g \n\n" %(x0,cont,x0,f(x0)))





























