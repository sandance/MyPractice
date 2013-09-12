def main():
	data =raw_input()
	index = set()
	pos =(0,0) # tuple 
	
	for direction in data:
		pt = { 
			'U': (pos[0], pos[1]+1),
			'D': (pos[0], pos[1]-1),
			'L': (pos[0] - 1, pos[1]),
			'R': (pos[0] + 1, pos[1])} [direction]

		if any( [ pt in index, 
			
			
