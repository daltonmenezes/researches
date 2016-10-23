#!/usr/bin/env python

number = int(input('Type a number to create a Fibonacci sequence of it: '))

f1 = -1
f2 = 1
counter = 0

while counter <= number:
    f = f1 + f2

    print("%d" % f)

    f1 = f2
    f2 = f

    counter += 1
