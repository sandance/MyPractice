from collections import deque

n=int(raw_input())
t=map(int,raw_input().split())

d=deque();

for i in t:
	d.append(i)


print d  
