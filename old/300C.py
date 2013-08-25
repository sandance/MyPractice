a,b,n = map(int, raw_input().split())

mod = 10**9 + 7

def chk(x):
	while x:
		if x%10 !=a and x%10 !=b:
			return False
		x /=10
	return True 




f=[1] # list data structure initialized with 1
for i in xrange(1, n+1):
	f.append(f[-1]*i%mod) # Here f[-1] is nothing but f[0] which value is 1 as stated before
			      # f[-1] represents last entry in list like [1,2,3] , f[-1] should be 3
 		

print "F",f
ans =0

for i in xrange(n+1):
	if chk(a*i+b*(n-i)):
		print (pow(f[i] * f[n-i], mod -2 ,mod))
		ans +=pow(f[i] * f[n-i], mod -2 , mod)
		ans %=mod

print "ans ",ans
print "result",ans*f[n] % mod





