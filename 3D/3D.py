from heapq import heappush, heappop
s = raw_input()
s = list(s)
n=len(s)
ans =0
k=0
heap=[]

for i in xrange (n):
	if s[i] == '(':
		k +=1
	elif s[i] == ')':
		k -=1
	else:
		a,b = map(int, raw_input().split())
		ans +=b 
		heappush(heap, (a-b,i))
		s[i]= ')'
		k -=1
	
	if k < 0:	
		if len(heap) ==0:
			break;
		
		v,p = heappop(heap)
		ans +=v
		s[p] = '('
		k +=2
		
	if k !=0:
		print -1
	else:	
		print ans
		print ' '.join(s)

	
