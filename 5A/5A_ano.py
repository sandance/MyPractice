import sys
cnt=0
ret=0

for buf in sys.stdin:
	if buf[0] == '+':
		cnt +=1
	elif buf[0] == '-':
		cnt -=1
	else:
		tmp=buf.split(':')
		ret +=len(tmp[1]-1)*cnt
		
print ret
	
