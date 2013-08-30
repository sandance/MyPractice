[t, m] =map(int,raw_input().split())
cnt =1 
mem = [0 for i in xrange(m)]

for req in xrange(t):
	command=raw_input()
	if 'alloc' in command:
		#Then check the unallocated memory size first 
		n =int(command.split()[1])
		for i in xrange(m-n+1):
			#print "checking...",i	
			if not any(mem[i:i+n]):
				print cnt
				#print "Before ",mem
				mem[i:i+n], cnt , n = [cnt for _ in xrange(n)] , cnt + 1, 0
				#print "After",mem
				#print "printing ... ",i
				break
		if n:
			print 'NULL'
	elif 'erase' in command:
		n =int(command.split()[1])
		if n != 0 and n in mem:
			#print "Before erasing",mem
			mem = [0 if i==n else i for i in mem]
			#print "After erase",mem
		else:
			print 'ILLIGAL_ERASE_ARGUMENT'
	else:
		#print "Nothing"
		#print mem
		tmp = [ i for i in mem if cmp(i,0) !=0  ] 
		mem = tmp + [ 0 for i in xrange(m-len(tmp))]
		#print mem

	 	
				
