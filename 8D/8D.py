from math import *

def getfloats():
	return map(float, raw_input().split())

#def inter((A,rA),(B,rB)):











t1,t2 = getfloats()

A,B,C = [complex(*getfloats()) for i in xrange(3)]

print A, B, C

	
