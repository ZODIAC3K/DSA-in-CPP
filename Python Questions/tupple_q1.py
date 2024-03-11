t1 = (1,2,3)
print(t1) # (1, 2, 3)
print(t1[2]) # 3
t1[1] = 20 # (2, 3)
print(len(t1)) # 3
print(t1) # TypeError: 'tuple' object does not support item assignment
