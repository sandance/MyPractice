def f(a,b,c):
	if a+b==c or b==c+a or c==a+b:
		return 0
	if a < b+c and b < a+c  and c<a+b:
		return 1
	return -1

a,b,c,d=sorted(map(int,raw_input().split()))
print { 1: "TRIANGLE", 
	0: "SEGMENT",
  	-1: "IMPOSSIBLE" } [max(f(a,b,c),f(b,c,d),f(c,d,a),f(d,a,b))]



