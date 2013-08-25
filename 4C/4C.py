
######Algorithm#####
# 1. Take the input of number of records
# 2. Insert if recond into a set data structure 
# 3. If a record already exists then create next name entry and check that 
# 	that is exists too or not
# 4.  if not add it and send it to the user

n=int(raw_input())
d={}
for i in xrange(n):
	s = raw_input()
	v = d.get(s,0)	
	print ['OK', s + 'v'] [ v >0 ]
	d[i] = v +1 
