n,m = map(int,raw_input().split())
cnt =1
mem = [0 for i in xrange(m)]

for i in xrange(m):
	command = raw_input().split()
	if cmp(command[0], 'alloc') ==0 :
			size = int(command[1])
			flag = False
			for j in xrange(m-size +1):
				if not any(mem[j : j+size]):
					print cnt
					mem[j: j+size] = [cnt] * size
					cnt +=1
					flag =True
	 				break
			if not flag:
					print 'NULL'
	elif cmp(command[0], 'erase') == 0:
				ordinal = int(command[1])
				if cmp(ordinal,0) !=0  and ordinal in mem:
						mem =[0 if cmp(i,ordinal) ==0 else j for j in mem]
				else:
					print 'ILLIGAL_ERASE_ARGUMENT'
	else:
			tmp =[  j for j in mem if cmp(j,0) !=0]
			print tmp
			mem = tmp + [ 0 for i in xrange(m-len(tmp))]		
			print mem
			
