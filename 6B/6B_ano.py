I=lambda:map(int, raw_input().split())

n,m,c=raw_input().split()
g=[]
for _ in xrange(n):
	s=raw_input()
	g.append(s)

d=set()

for i in xrange(n):
	for j in xrange(m):
		
