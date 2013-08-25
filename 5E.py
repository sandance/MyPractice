def main():
	n = input()
	c,l,r = [0]*(n+1), [0]*(n+1) , [0]*(n+1)

	h = map(int, raw_input().split(' '))
	x=0
	
	for i in xrange(n):
			if h[i] > h[x]:
				x = i

	h =h[x:]+h[0:x]
		
	h.append(h[0])
	print h 

	

	
	

main()	
