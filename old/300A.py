n=int(raw_input())

a=map(int, raw_input().split())
p= [x for x in a if x >0]
q= [x for x in a if x <0]
r= [x for x in a if x==0]


if not p: # if p is empty 
	p.append(q.pop())
	p.append(q.pop())
if len(q) % 2 == 0:
	r.append(q.pop())
f = lambda x: ' '.join(map(str,x))

for x in [q,p,r]:
	print len(x),f(x)


