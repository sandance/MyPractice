import sys

s = [c.strip() for c in sys.stdin]

l = max(len(x) for c in s)

flag = False

print '*'*(l+2)

for c in s:
	d = l - len(c)
	a = d/2
	b = d-a
	
	if a != b:
		if flag: a,b=b,a
		flag = not flag
	print '*'+' '*a+c+' '*b + '*'
print '*' * (l+2)
		
