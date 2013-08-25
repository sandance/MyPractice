n, m=map(int,raw_input().split())
a = [[0 for i in range(n+1)] for i in range(n+1)]
print a

for i in range(m):
	u,v=map(int,raw_input().split())
	a[u][v]=a[v][u]=1
print a
s=set()
ans=[]
def dfs(u):
	s.add(u)
	ans[-1].append(u)
	print ans
	for v in range(1,n+1):
		if a[u][v] and v not in s:
			dfs(v)

print "ans",ans
for i in range(n+1):
	if i not in s:
		ans.append([])
		print "set",s
		dfs(i)

print "ans",ans
x=list(filter(lambda x: len(x) ==1, ans))
print "x",x
y=list(filter(lambda x: len(x) ==2, ans))
print "y",y
z=list(filter(lambda x: len(x) ==3, ans))
print "z",z

if any(map(lambda x: len(x) >3, ans)) or len(x) < len(y):
	print(-1)
else:
	for i in z:
		print "On loop 1"
		print(i[0], i[1], i[2])
	for i in range(len(y)):
		print "On loop 2"
		print(y[i][0],y[i][1],x[i][0])
	if len(x) >1:
		print "On loop 3"
		print(x[1][0],x[2][0],x[3][0])


