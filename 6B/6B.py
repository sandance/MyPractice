n,m,c=raw_input().split()

n=int(n)
m=int(m)
a=[]
for i in xrange(n):
	a.append(raw_input())

b={} # for set 

for i in xrange(n):
	for j in xrange(m):
			if a[i][j] !='.' and a[i][j] !=c:
				for (di,dj) in ((0,1),(1,0),(-1,0),(0,-1)):
#						print "i+di and j+dj value and a[i+di][j+dj]",i+di, j+dj, a[i+di][j+dj]
						if 0 <= i+di <n and 0<= j + dj <m and a[i+di][j+dj] ==c:
									print "i and j and i+di and j+dj value and a[i+di][j+dj]",i, j, i+di, j+dj, a[i+di][j+dj]
									b[a[i][j]] = True
									break

print b 

print "Length ",len(b)
