if __name__=="__main__":

		n=int (raw_input())
		d=sorted(map(int,raw_input().split()))
		print 1, d[0]
		if d[-1] > 0:
			print 1,d[-1]
			print n-2, " ".join(map(str, d[1:-1]))
		else:
			print 1, d[1], d[2]
			print n-3, " ".join(map(str, d[3:]))
