# -*- coding: utf-8 -*-

N = int(input())
dentro = 0
fora = 0
for i in range (1, N+1):
    x = 0
    x = int (input())
    if ( x >= 10 and x <= 20):
        dentro += 1
    else:
        fora += 1
print ('%d in\n%d out' %(dentro, fora))