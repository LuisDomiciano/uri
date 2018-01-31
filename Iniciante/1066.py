# -*- coding: utf-8 -*-

par = impar = pos = neg = x = 0
for i in range (1, 6):
    x = int (input())
    if ( x > 0 ):
        pos += 1
    if ( x < 0 ):
        neg += 1
    if ( x % 2 == 0):
        par += 1
    if ( x % 2 != 0):
        impar += 1
print ('%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)'%(par, impar, pos, neg))