import re

n=input()

for i in range(n):
	s= raw_input()
	p=re.match(r'R(\d+)C(\d+)',s)
	if p:
		r =p.group(1)
		print r
		c = int(p.group(2))
		while c:
			r = chr(ord('A')+ (c-1)%26) + r
			c=(c-1)/26
	else:
		p=re.match('(\D+)(\d+)',s)
		r='R'+p.group(2)+'C'
		t=0
		for x in p.group(1):
			t=t*26+ord(x)-ord('A')+1
		r +=str(t)
		
	print r 


