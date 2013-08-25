import sys
n,m=map(int, sys.stdin.readline().split())

team=[-1]*n
graph=[[] for _ in range(n)]

for _ in range(m):
	a,b=map(int,sys.stdin.readline().split())
	a -=1
	b -=1
	graph[a].append(b)
	print "term 1",graph
	graph[b].append(a)
	print "term 2",graph

print team
print graph
def dfs(student,color):
	if team[student] != -1:
		return 
	team[student] = color
	for b in graph[student]:
		dfs(b,color)

for i in range(m):
	if team[i] == -1:
		dfs(i,i)


print team

teams = [[ j for j in range(n) if team[j] == i] for i in range(n)]
teams = [[ j for j in range(n) if team[j] == i] for i in range(n)]

print teams

if any(len(t) >3 for t in teams):
	print -1
else:
	ones = [ t for t in teams if len(t) == 1]
	twos = [ t for t in teams if len(t) == 2]
	threes = [ t for t in teams if len(t) == 3]
	if len(twos) > len(ones):
		print -1
	else:
		for one, two in zip(ones, twos):
			threes.append(one,two)
			



	


	
