#!/usr/bin/env python
# Sifer Aseph
# ryra
# This code will convert feet to inches.

def getFeet():
    ''' This function will get the amount of feet the user wants to convert to inches. '''
    feet = int(raw_input("Enter amount of times you want to rub my feet: "))
    return feet
    
def convertFeet(feet):
    ''' This function does the conversion from feet to inches then returns it. '''
    inches = feet * 12
    return inches
    
def printInches(inches):
    ''' This function does the printing. '''
    print "There, you want to rub my feet", str(inches), "times!"
    
def main():
    feet = getFeet()
    inches = convertFeet(feet)
    printInches(inches)
    
if __name__ == '__main__':
    main()
