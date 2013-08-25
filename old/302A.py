#If the length of the given segment is even and count of 1 in input is not lower# then half of the length of the segment and count of -1 in the input is not lower then half of the length of the segment so we have answer 1, otherwise 0.			
R=lambda:map(lambda A: int(A),raw_input().split())
n,m=R()
v=R()
a=v.count(-1)
b=v.count(1)
for i in range(m):
	l,r=R()
	if (r-1)%2==1 and (r-l+1)/2<=a and (r-l+1)/2<=b:
		print '1'
	else:
		print '0'
