a,b,n=map(int,raw_input().split())
mod = 10**9+7

f=[1]

for i in xrange(1,n+1):
	f.append(f[-1]*i%mod)

ans =0

def chk(x):
	while x:
		if x%10 !=a and x%10 !=b:
			return False
		x /=10
	return True


for i in xrange(1,n+1):
	if chk(a*i + b*(n-i)):
		ans +=pow (f[i]*f[n-i],mod -2 ,mod)
		ans %=mod

print ans * f[n] % mod


