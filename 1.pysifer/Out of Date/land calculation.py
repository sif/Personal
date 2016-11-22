#!/usr/bin/env python
# Sifer Aseph
# A module to convert square feet into acre. 

def getSquareFeet():
    ''' This function will get the desired square feet. '''
    squareFeet = int(raw_input("Enter desired square feet to convert to acre: "))

    return squareFeet

def convertToAcre(squareFeet):
    ''' This function will convert square feet to acre. '''
    acre = squareFeet / 43560.00

    return acre

def printAcre():
    ''' This function will print square feet and acre. '''
    print "Square feet: ", squareFeet
    print "Acre: ", acre
