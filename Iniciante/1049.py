# -*- coding: utf-8 -*-

p1 = input()
p2 = input()
p3 = input()
if (p1 == 'vertebrado'):
    if (p2 == 'ave'):
        if (p3 == 'carnivoro'):
            print ('aguia')
        if(p3 == 'onivoro'):
            print('pomba')
    if (p2 == 'mamifero'):
        if (p3 == 'onivoro'):
            print('homem')
        if(p3 == 'herbivoro'):
            print('vaca')
if (p1 == 'invertebrado'):
    if (p2 == 'inseto'):
        if (p3 == 'hematofago'):
            print('pulga')
        if (p3 == 'herbivoro'):
            print('lagarta')
    if (p2 == 'anelideo'):
        if (p3 == 'hematofago'):
            print('sanguessuga')
        if (p3 == 'onivoro'):
            print('minhoca')