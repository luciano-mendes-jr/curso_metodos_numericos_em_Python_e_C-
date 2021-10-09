# -*- coding: utf-8 -*-

'''
**************************************************************************************
* Name: Método da Bisseção em python                                                 *
* Copyright: Computação Cientifica                                                   *
* Author: Luciano Mendes                                                             *
* Date: 25/07/20 hora: 05:18pm                                                       *
* Description: Programa encontra soluções para equações usando o método da Bisseção  *
**************************************************************************************
'''
import math

def f(x):
    return(8.0-4.5*(x- math.sin(x)))

l = 1e-4
e = 1e-4
Ni = 10000

a = float(input("Entre com o valor de 'a' do intervalo [a,b]: "))
b = float(input("Entre com o valor de 'b' do intervalo [a,b]: "))

cont = 0

c = b - a
x = (a + b)/2.0

while(c > l):
    if(f(a)*f(x) < 0.0):
        b = x
    if(f(a)*f(x)> 0.0):
        a = x
    c = b - a
    x = (a + b)/2.0
    cont = cont + 1
    if(cont >= Ni or math.fabs(f(x)) < e):
        break
    
print("\n\nRaíz: %f\nIterações: %d\nf(%f) = %f \n\n" %(x,cont,x,f(x)))






























