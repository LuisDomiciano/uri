n = int (input())
fat = 1
while ( n > 1 ):
	fat = fat * n
	n = n - 1
print ("%d" %(fat))