import sys
cnt=[]
for i in range(0,8):
	buf = raw_input()
	cnt.append(buf.count('B'))
ret= min(cnt)+cnt.count(8)
print ret

if ret ==16:
	ret=8


print ret

#ret=min(cnt) 
print cnt
