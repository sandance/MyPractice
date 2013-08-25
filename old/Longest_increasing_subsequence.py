# This is a naive solution for longest increasing subsequence problem in python

from itertools import combinations

def naive_lis(seq):
	for length in range(len(seq),0,-1):
		for sub in combinations(seq,length):
			if list(sub) == sorted(sub):
				return sub


print naive_lis([3,1,0,2,4])

