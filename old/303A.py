def P(v):
	print ' '.join(map(str,v))

n=input()
if n%2:
	a=range(n)
	P(a)
	P(a)
	P((x[0]+x[1])%n for x in zip(a,a))
else:
	print -1


