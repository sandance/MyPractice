#Walking through a connected component of a graph represented using adjacency sets

def walk(G,s,S=set()): 				# Walk the Graph from Node s
	P,Q=dict(),set()			#Predecessors + "to do" queue
	P[s]= None				# s has no prodeccessor
	Q.add(s)       				# we plan on starting with s
	while Q:
		u =Q.pop()			# Pick one,arbitarily
		for v in G[u].difference(P,S):  # New Nodes
			Q.add(v) 		# Plan to visit new node
			P[v]=u			# Remember where we came from 	
	return P 				# The traversal Tree
	


# Finding connected components

def component(G):		#BFS
	comp = []
	seen = set() 				# Nodes that we have already seen
	for v in G:				# Try every starting point
		if v in seen: continue		# Seen? Ignore it
		C = walk(G,u)			# Traverse components
		seen.update(C)			# Add keys of C to seen
		comp.append(C)			
	return comp				#collect the components

 # DFS Recursive Depth First Search


def rec_dfs(G, s, S=set()):
	if S is None: S=set()			# Initialize 
	S.add(s)				# Start with visiting s
	for u in G[s]:				#Explore neighbors
		if u in S: continue 		# Already visited , skip
			rec_dfs(G,u,S)		# Explore recursively




# Iterative DFS 

def iter_dfs(G,s):
	S,Q=set(),[]				# Use list as a stack (Last in first out)
	Q.append(s)				# Plan to visit s
	while Q:
		u=Q.pop()			# Get one
		if u in S:	continue	# Already visited? skip
		S.add(u)
		Q.extend(G[u])			#Schedule all neighbors
		yield u				#Report u as visited


#iterative BFS

def iter_BFS(G,s,qtype=set()):
	S,Q=set(),qtype()
	Q.add(s)
	while Q:
		u=Q.pop()
		if u in S: continue
		S.add(u)
		for v in G[u]:
			Q.add(v)
		yield u

























