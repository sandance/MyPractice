db = dict()
re = input()
for ri in xrange(re):
	name = raw_input()
	num = db.get(name, 0)
	
	if num:
		print name + str(num)
	else:
		print 'OK'
	db[name] = num + 1
