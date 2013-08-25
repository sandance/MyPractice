n,a,b=map(int,raw_input().split())

h=map(int,raw_input().split())
d={} # Dictionary 


def shoot(t, i):
	print t

	print "t[:i-1",t[:i-1]
	print t[:i-1] + (t[i-1]-b,) + (t[i]-a,)+(t[i+1]-b,)+t[i+2:]

	return t[:i-1] + (t[i-1]-b,) + (t[i]-a,)+(t[i+1]-b,)+t[i+2:]



def f(t):
	r=0
	if d.get(t) !=None:
		return d.get(t)
	if all([i<0 for i in t]):
		return(' ',0)

	i=0
	while( t[i] <0)
		i +=1

	if i!=n-2:
		c1 = f(shoot(t,i))
		c2= f(shoot(t,i+1))


















l=r=0
h=tuple(h)

while h[0]>=0:
	h=shoot(h,1)
	l +=1

while h[-1]>=0:
	h=shoot(h, len(h)-2)
	r +=1

print h

res = f(h)

