import math

# Get the Input as a float number 

def getfloats():
	return map(float, raw_input().split())

# Calculate 

def calc(v0,v,a,x):
	t = (v-v0) /a # Find the time to get the v speed with accelaration a
	x0 = v0*t+ 0.5 * a * t*t # Normal formula S=ut +(1/2 ) * a*t^2 to find the distance covered at t time , 

	print "X0 and t0",x0,t
 	
	if x0 > x:
		return  ( x, (math.sqrt(v0*v0 +2*a*x) - v0) /a) # if the distance to slow down become bigger than the actual speed 
						# then calculate v^2=u^2+2*a*s formula , to find t
						# the calculation here v= sqrt(u^2+2as) 
						# => u+at=sqrt(u^2+2*a*s)
						# t =sqrt(u^2+2as)-u / a  
						# so this is the time to go distance s
	return (x0,t)



def go(v0,v,a,x):
		x0,t =calc(v0,v,a,x)
		print "Fractional ",x0, t
		return t + (x-x0)/v # Here this is time to reach t and after passing the signal move with maximum speed 
				    # The equation for this should be (x-x0) = maximum speed (v) * t1 ( remaining time to reach 					# other city 

a,v=getfloats()
	
l,d,w=getfloats()

if w > v: w=v

x ,t = calc(0,w,a,d)

print "Obtained x and t and w",x, t, w

if x == d: print go(0,v,a,l)
else: print t + go(w,v,a,(d-x)*0.5) * 2 + go ( w,v,a,l-d)


	
