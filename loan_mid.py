#mid sem question
#script start
l = 1 	# machines from loan
m = 0  	# owned machines
y = 1 	#year 
while (y<23):
	print(y,m+l)
	y +=1 	#new year
	m = m*2 + l  	# m new + l loans paid
	l  = m // 2 	#new loaned machines


#script ends


