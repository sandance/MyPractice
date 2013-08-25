read_ints = lambda : map (int, raw_input().split())


def main():
	n=input()
	a=read_ints()
	c=a.count(1)
	ans =0
	

	for i in range(n):
		for j in xrange(i,n):
			t = c
			for k in xrange(i,j+1)
				if a[k] == 1:
					t -= 1
				else:
					t +=1
			if t > ans :
				ans = t

	print ans


if __name=='__main__':
	main()


