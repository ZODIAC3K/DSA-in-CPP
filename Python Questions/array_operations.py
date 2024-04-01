import array

L1 = array.array('i', [10,20,30,40,50,60,70])

# array.array(typecode, [initializers]) == create array with typecode and initializers
# b: Represents signed integer of size 1 byte.
# B: Represents unsigned integer of size 1 byte.
# h: Represents signed integer of size 2 bytes.
# H: Represents unsigned integer of size 2 bytes.
# i: Represents signed integer of size 2 bytes.
# I: Represents unsigned integer of size 2 bytes.
# l: Represents signed integer of size 4 bytes.
# L: Represents unsigned integer of size 4 bytes.
# f: Represents floating point of size 4 bytes.
# d: Represents floating point of size 8 bytes.

# Slicing array in python
# last element of array is not included in slicing.
# array[start:end:step]

print(L1) # array('i', [10, 20, 30, 40, 50, 60, 70]) == original array

print(L1[2:5]) # array('i', [30, 40, 50]) == from index 2 to 4

print(L1[:6]) # array('i', [10, 20, 30, 40, 50, 60]) == from start to index 5

print(L1[2:]) # array('i', [30, 40, 50, 60, 70]) == from index 2 to end

print(L1[:]) # array('i', [10, 20, 30, 40, 50, 60, 70]) == original array

print(L1[::2]) # array('i', [10, 30, 50, 70]) == jumps 2 steps

print(L1[-5:-2]) # array('i', [30, 40, 50]) == from index -5 to -3

print(L1[-5:]) # array('i', [30, 40, 50, 60, 70]) == from index -5 to end

print(L1[:-1]) # array('i', [10, 20, 30, 40, 50, 60]) == from start to index -2

# updating array with slicing

L1[2:5] = array.array('i', [100,200,300]) # array('i', [10, 20, 100, 200, 300, 60, 70]) == from index 2 to 4

L1 = array.array('i', [10,20,30,40,50,60,70])

L1[2:4] = array.array('i', [100,200,300]) # array('i', [10, 20, 100, 200, 300, 50, 60, 70]) == from index 2 to 3 !! Python will add extra elements if required !!

L1 = array.array('i', [10,20,30,40,50,60,70]) 

# append elements to array using function append
L1.append(80) # array('i', [10, 20, 30, 40, 50, 60, 70, 80]) == append 80 to end of array    

# Insert elements to array using function insert
L1.insert(2,90) # array('i', [10, 20, 90, 30, 40, 50, 60, 70, 80]) == insert 90 at index 2
# if index is greater than length of array, element will be added at end of array

# extend elements to array using function extend
L1.extend(array.array('i', [100,110,120])) # array('i', [10, 20, 90, 30, 40, 50, 60, 70, 80, 100, 110, 120]) == extend array with new elements at the end

# Remove elements from array using function remove
# Arrays do not have a remove method.

# Remove elements from array using function pop
L1.pop(2) # array('i', [10, 20, 40, 50, 60, 70, 80]) == remove element at index 2
# if index is not provided, last element will be removed

# Remove elements from array using function del
del L1[2] # array('i', [10, 20, 50, 60, 70, 80]) == remove element at index 2
# if index is not provided, entire array will be removed

# Remove elements from array using function clear
L1 = array.array('i', []) # array('i') == remove all elements from array

# Copy array using function copy
L1 = array.array('i', [10,20,30,40,50,60,70])
L2 = L1.copy() # L2 = array('i', [10, 20, 30, 40, 50, 60, 70]) == copy array L1 to L2
