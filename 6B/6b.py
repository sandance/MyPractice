n,m,c=raw_input().split()
n=int(n)
m=int(m)
a=[] # list to make the matrix
b={} # dictionary will be use as a set 

for i in xrange(n):
	a.append(raw_input())

for i in xrange(n):
	for j in xrange(m):
		if a[i][j] !='.' and a[i][j] !=c:	# looping through the matrix and if a[i][j] is anything other than empty and President's color 
			for (di,dj) in ((0,1),(1,0),(-1,0),(0,-1)): # check all adjacent matrix 
				if  0 <= i + di < n and 0 <= j + dj < m and a[i+di][j+dj] == c:
								b[a[i][j]]= True
								break



print b 

print len(b)
				
			
	