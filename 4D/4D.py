#from bisect import *
##bisect gives a lists where entries are sorted at the time of insertion
#def getints():
#	return map(int,raw_input().split())
#
#n,w,h=getints()
#
#a=[]
#
#for i in xrange(1,n+1):
#		x,y=getints()
#		if w<x and h < y:
#			a.append((x,y,i)) # unique list entry , all will 
#						#be inserted
#			
#print a
#f,g =[],[]
#
#t,h=0,[0]*(n+1)
#
#print h
#
#for x in sorted(a, key = lambda x: x[0] * 2000000 - x[1]):
#		print x[0] 
#		print x[1]
#		
#		p = bisect_left(f,x[1])


# By Hamilton 

from bisect import bisect_left 
n,w,h = map(int, raw_input().split())
L=[]

for i in xrange(n):
	ew,eh = map(int , raw_input().split())
	if ew>w and eh>h: 
		L.append((ew,eh,i+1))
print "L",L

L.sort(cmp=lambda x,y : x[0]-y[0] if x[0] !=y[0] else y[1]-x[1])

print L

n=len(L)

#print n	

hL=[]
d=[0]*n


for i,e in enumerate(L):
		print "e[i]",e[1]
		j = bisect_left(hL,e[1])
		print "J", j
		d[i]=j
		if j < len(hL):
			hL[j]=e[1]
		else:
			hL.append(e[1])

s=len(hL)
print s
print "D",d

			
