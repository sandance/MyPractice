N=64
rd= lambda: list(map(int,input().split())

def dfs(u):
 	x = [u]
	c.add(u)
	for v in I:
		if g[u][v] and v not in c:
			x +=dfs(v)
	return x

def fail():
	print(-1)
	exit()

n,m = rd()
g=[[0]*N for _ in range(N)]

for _ in range(m):
	u,v=rd()
	g[u][v]=g[v][u]= True
	

v=[ [], [], [], [] ]
c=set()

I=range(1,n+1)
for i in I:
	if i is not in c:
		x=dfs(i)
		l=len(x)
		if len > 3:
			fail()
		v[l] += [x]
for x in v[2]:
  if v[1]: v[3] += [x+v[1].pop()]
  else: fail()
if len(v[1])%3: fail()
while v[1]: v[3] += [v[1].pop()+v[1].pop()+v[1].pop()]
for x in v[3]: print(' '.join(map(str, x)))
	
