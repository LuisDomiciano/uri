# -*- coding: utf-8 -*-

N = int (input())
x = 0
for i in  range (1, N+1):
    x = int (input())
    if ( x > 0 ):
        if ( x % 2 == 0):
            print('EVEN POSITIVE')
        else:
            print ('ODD POSITIVE')
    elif ( x == 0):
        print ('NULL')
    elif ( x < 0 ):
        if ( x % 2 == 0):
            print('EVEN NEGATIVE')
        else:
            print ('ODD NEGATIVE')