#!/usr/bin/env python
import sys, os

def clear():
    if (os.name == 'nt'):    
        c = os.system('cls')
    else:
        c = os.system('clear')
    del c  # can also omit c totally

clear()

if len(sys.argv) > 1:
    diractual = sys.argv[1]
    apuntando = sys.argv[2]
    hexactual = diractual[-2:]

    op1 = '0x' + hexactual
    
    numeros= [0,1,2,3,4,5,6,7]
    letras=['a','b','c','d','e','f']

    aoffsets = []
    
    l = 0
    n = 0
    e = False
    aoffsets.append('0x00')
    while e != True:
        ofset = '0x' + str(n) + str(letras[l])
        aoffsets.append(ofset)
        #print ofset
        l += 1
        if l == 6:
            l = 0
            n += 1
        if n == 8:
            e = True
        
    apt = []
    for i in aoffsets:
        #print i
        #print 'hex ' + op1 + '+ 2 +' + i
        susodicho = hex( int(op1, 16) + 2 + int(i, 16) )
        if susodicho[-2:] == apuntando[-2:]:
            print 'Para hacer un jmp short desde el origen: ' + diractual + ' hasta la direccion destino: ' + apuntando
            print 'El offset correcto a usar seria: ' + i[-2:]
            apt.append(susodicho)
else:
    print 'Este escript solicita 2 direcciones, una la de origen y otra la de destino para hacer un jmp short'
    print 'Se considera short a un jump cuando es inferior a 0x80'
    print ''
    print '(ayuda) o modo de empleo:'
    print './get_relative_offset.py direccion_origen direccion_destino'
    print 'ejemplo:'
    print './get_relative_offset.py 0x00400eb3 0x00400ef3'
