#!/usr/bin/env python
# Sifer Aseph
# TopCoder: GreaterGameDiv2
# https://community.topcoder.com/stat?c=problem_statement&pm=13505

def calc(snuke, sothe):
    score = 0
    for i in range(0, len(snuke)):
        if (snuke[i] > sothe[i]):
            score += 1

    return score

def main():
    print(calc([1,3], [4,2]))

if __name__ == '__main__':
    main()
