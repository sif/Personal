#!/usr/bin/env python
# Sifer Aseph
# virtualbox checker

import os

def main():
    virtualBoxMacAddress = "08:00:27"
    macAddressFile = '/sys/class/net/eth0/address' # find /sys -name eth0

    openFile = open(macAddressFile, "r")
    line = openFile.readline()

    if line.startswith(virtualBoxMacAddress):
        print "We are inside a Linux vbox."
        systemName = os.system( "uname -a" )
        print systemName
    else:
        print "We are probably not inside a Linux vbox."

if __name__ == "__main__":
    main()
