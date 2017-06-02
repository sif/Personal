#!/usr/bin/env python
# Sifer Aseph
# ping

import os

def main():
    hostname = "siferaseph.com"
    response = os.system("ping -c 1 " + hostname)

    if response == 0:
        print hostname, ': up'
    else:
        print hostname, ': down'

if __name__ == "__main__":
    main()
