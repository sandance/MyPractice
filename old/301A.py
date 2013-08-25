n=int(raw_input())
a=map(int,raw_input().split())

m=len([ x for x in a if x <0])

n %=2

if n ==0: n=2

m %=n
print "A before",a
a=[abs(x) for x in a]
print "A",a
a=sorted(a)
if m: a[0] = -a[0]
print sum(a)

