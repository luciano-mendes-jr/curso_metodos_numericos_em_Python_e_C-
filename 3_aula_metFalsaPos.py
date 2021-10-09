# -*- coding: utf-8 -*-
'''
**************************************************************************************
* Name: Método da Falsa Posição em python                                            *
* Copyright: Computação Cientifica                                                   *
* Author: Luciano Mendes                                                             *
* Date: 01/08/20 hora: 00:52am                                                       *
* Description: Programa encontra soluções para equações usando o método da F Posição *
**************************************************************************************
'''
import math

def f(x):
    return( 2.0*math.sin(2.0*x) - x**3 + 3.0)

l = 0.000001
tol = 0.000001
Ni = 100
cont = 0
a = float(input("Entre com o valor de 'a' do intervalo [a;b]: "))
b = float(input("Entre com o valor de 'b' do intervalo [a;b]: "))
c = b - a
x0 = (a*f(b) - b*f(a))/(f(b) - f(a))

while(c > l or math.fabs(f(x0)) > tol):
    if(f(a)*f(x0) < 0.0):
        b = x0
    if(f(a)*f(x0) > 0.0):
        a = x0
    c = b - a
    x0 = (a*f(b) - b*f(a))/(f(b) - f(a))
    cont = cont + 1
    if(cont >= Ni):
        break

print("\n\nRaíz: %f\nIterações: %i\nf(%f) = %g" %(x0,cont,x0,f(x0)))

