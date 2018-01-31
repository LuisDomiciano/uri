# -*- coding: utf-8 -*-

num = float (input())
msg=''
if ( num < 0 or num > 100):
    msg = 'Fora de intervalo'
elif (num >= 0 and num <= 25.00):
    msg = 'Intervalo [0,25]'
elif (num > 25.00 and num <= 50.00):
    msg = 'Intervalo (25,50]'
elif (num > 50.00 and num <= 75.00):
    msg = 'Intervalo (50,75]'
elif (num > 75.00 and num <= 100.00):
    msg = 'Intervalo (75,100]'
print (msg)