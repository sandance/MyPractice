read=lambda: map(lambda A :int(A), raw_input().split())
n,m=read()
c=[0]
for i in range(n):
	a,b=read()
	c.append(c[i]+a*b);

d=read()
t=0
for i in range(m):
	if (d[i] > c[i]):
		t=t+1
	print t
