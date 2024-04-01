L1 = [10,20,30,40,50,60,70]

# Slicing list in python
# last element of list is not included in slicing.
# list[start:end:step]

print(L1) # [10, 20, 30, 40, 50, 60, 70] == original list

print(L1[2:5]) # [30, 40, 50] == from index 2 to 4

print(L1[:6]) # [10, 20, 30, 40, 50, 60] ==  from start to index 5

print(L1[2:]) # [30, 40, 50, 60, 70] == from index 2 to end

print(L1[:]) # [10, 20, 30, 40, 50, 60, 70] == original list

print(L1[::2]) # [10, 30, 50, 70]  == jumps 2 steps

print(L1[-5:-2]) # [30, 40, 50] == from index -5 to -3

print(L1[-5:]) # [30, 40, 50, 60, 70] == from index -5 to end

print(L1[:-1]) # [10, 20, 30, 40, 50, 60] == from start to index -2



#updating list with slicing

# L1 = [10,20,30,40,50,60,70]

L1[2:5] = [100,200,300] # [10, 20, 100, 200, 300, 60, 70]   == from index 2 to 4

L1 = [10,20,30,40,50,60,70]

L1[2:4] = [100,200,300] # [10, 20, 100, 200, 300, 50, 60, 70] == from index 2 to 3 !! Python will add extra elements if required !!

L1 = [10,20,30,40,50,60,70] 

# append elements to list using function append
L1.append(80) # [10, 20, 30, 40, 50, 60, 70, 80] == append 80 to end of list    

# Insert elements to list using function insert
L1.insert(2,90) # [10, 20, 90, 30, 40, 50, 60, 70, 80] == insert 90 at index 2
# if index is greater than length of list, element will be added at end of list

# extend elements to list using function extend
L1.extend([100,110,120]) # [10, 20, 90, 30, 40, 50, 60, 70, 80, 100, 110, 120] == extend list with new elements

# Remove elements from list using function remove
L1.remove(90) # [10, 20, 30, 40, 50, 60, 70, 80] == remove element 90
# if element is not present in list, it will throw error

# Remove elements from list using function pop
L1.pop(2) # [10, 20, 40, 50, 60, 70, 80] == remove element at index 2
# if index is not provided, last element will be removed

# Remove elements from list using function del
del L1[2] # [10, 20, 50, 60, 70, 80] == remove element at index 2
# if index is not provided, entire list will be removed

# Remove elements from list using function clear
L1.clear() # [] == remove all elements from list

# Copy list using function copy
L1 = [10,20,30,40,50,60,70]
L2 = L1.copy() # L2 = [10, 20, 30, 40, 50, 60, 70] == copy list L1 to L2

