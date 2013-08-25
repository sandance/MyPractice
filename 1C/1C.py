import sys
import math

# By Reanimatorzon 

DEBUG = False

def solve():
	p = [ map(float, s.split()) for s in fin.read().strip().split("\n")]

	a = distance(p[0],p[1])
	b = distance(p[1],p[2]
 
def distance(a,b):
	return math.sqrt((a[0] - b[0]) **2 + (a[1] - b[1]) **2)

def eq(f1,f2):
	return abs(f1-f2) < 1e-4

def init():
	global fin,fout
	
	if DEBUG:
		fin = open('input.txt','r')
	else:
		fin = sys.stdin
	fout = sys.stdout

def quit():
	global fin, fout
	fin.close()
	fout.close()
	sys.exit(0)

if __name__=='__main__':
	init()
	solve()
	quit()

