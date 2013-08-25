

n=input()
a=map(int, raw_input().split())

maxx= (sum(a)+1)%(n+1)

print "Maxx value %d"%maxx

for i in xrange(n):
	for j in xrange(i+1, n+1):
		now= sum(a)-(2*sum(a[i:j]))+len(a[i:j])
		print "Now %d"%now
		maxx=max(now,maxx)


print maxx


	
