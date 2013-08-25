from collections import deque


n,k=map(int,raw_input().split())
h=map(int, raw_input().split())

ansl =0
ans = []
j = 0


ma = deque()
mi = deque()

print ma
print mi


def check():
	print ma[0][1]
	print mi[0][0] 
	while ma[0][1] < j:
		ma.popleft()
	while mi[0][1] < j:
		mi.popleft()

	return ma[0][0] - mi[0][0] <= k


		

for i in xrange(n):
	while len(ma) > 0 and ma[-1][0] <= h[i]:
		print "ma",ma[-1][0]
		ma.pop()
	ma.append((h[i],i))
	
	while len(mi) >0 and mi[-1][0] >= h[i]:
		print "mi",mi[-1][0]
		mi.pop()
	mi.append((h[i], i))

	while not check():
		j += 1
	

#rint "ma -----",ma[-1][0]
#print "ma 1 and 0", ma[1][0]	
print ma
print mi





