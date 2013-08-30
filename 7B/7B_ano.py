[t ,m] = map(int,raw_input().split())
cnt =1
mem = [ 0 for i in xrange(m)]

for req in xrange(m):
	inp = raw_input()
	n = int(inp.split()[1])
	if 'alloc' in inp:
		for i in xrange(m-n+1):
			if not any(mem[i:i+n]):
				print cnt 
				mem[i:i+n] = [ cnt for i in xrange(n)]
				cnt =cnt +1
				n=0
			if n:
				print "NULL"
	elif 'erase' in inp:
		n =int(inp.split()[1])
		if n !=0 and n in mem:
			mem =[ 0 if i==n else i for i  in mem]
		else:
			print 'ILLIGAL_ERASE_ARGUMENT'
	else:
		mem = [ i for i mem if i] + [0 for i in xrange(m)]
	
		
