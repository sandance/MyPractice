def heapsort (aList):
	# convert aList to heap
	length = len(aList) - 1
	leastParent = length /2
	
	for i in range(leastParent , -1 , -1):
			print i


heapsort([5,4,2,7,8,9,10])
