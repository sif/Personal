#!/usr/bin/env python
# Sifer Aseph
# A module that rewrites the builtin function max() as an exercise. Ahem, this is my solution to a certain website. If you're here, you're probably cheating. 

def getTwoNumbers():
    ''' This function will get two numbers. '''
    num1 = int(raw_input("What is the first number? "))
    num2 = int(raw_input("What is the second number? "))

    return num1, num2

def maxOfTwoNumbers(num1, num2):
    ''' This function will do the comparison. '''
    if num1 < num2:
        return num2
    return num1

def printLargestOfTwo(num1, num2):
    ''' This function will print the largest of the two. '''
    print "The largest number of the two is " + str(maxOfTwoNumbers(num1, num2)) + "."
