A=[ raw_input() for i  in range(8)]
B=[]
C=set([])

for i in range(8): 
	if A[i] !='B'*8:
		B.append(i)

for i in B:
	for j in range(8):
		if A[i][j] =='B':
			C.add(j)

print len(C)+8 -len(B)