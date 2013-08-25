from sys import stdin

s= raw_input()
stack = []
match = [False] *(len(s) +1)
# this means an list of False

print "Match Initital",match 

for i,c in enumerate(s):
	if c == ')':
		if not stack:
			stack =[]
		else:
			l = stack.pop()
			match[l] =True
			match[i] = True
			 
	else:
		stack.append(i)
print "Match done", match

#print "Stack",stack	

maxlen = 0;
occr =1

prev = -1

for i in range(len(s)+1):
	if not  match[i]: # If it is False , keep track of this false and next false
		l = i - prev -1;
		if l > maxlen:
			maxlen =l
			occr = 1
		elif l == maxlen and l != 0:
			occr += 1
		prev = i
	
print maxlen, occr
		
		

