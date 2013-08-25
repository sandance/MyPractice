
#Algo for me:
	# Find out the total number of line 
	# Find the max line 
	# For each line , cal (max line -  each line ) and the divide it by 2 and stating moving first caracter there 

import sys

s = [x[ : - 1]  for x in sys.stdin ]
print s 
print "\n"
t=1
l= max(len(x) for x in s)
print '*' * (l+2)
for x in s:
	y = l - len(x)
	t ^= y %2
	print '*' + (y+t)/2 * ' '+x+ (y+1 -t)/2*' '+'*'
	
print '*'*(l+2)
