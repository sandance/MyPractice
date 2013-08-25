n=int(raw_input());
t=map(int,raw_input().split())
a,b=0,0
i,j=0,n-1

at,bt=0,0
while i<=j :
	while i<=j and at <= bt:
		at +=t[i]
		i +=1
		a +=1
	while i<=j and len(t) >= 2 :
		bt +=t[j]
		j -=1
		b +=1
	

print a,b 
