# Creating a dictionary
my_dict = {'name': 'Alice', 'age': 30, 'city': 'New York'}

# Accessing value by key 
print(my_dict['name'])  # Output: Alice

# Adding new key-value pair
my_dict['gender'] = 'Female'
print(my_dict)  # Output: {'name': 'Alice', 'age': 30, 'city': 'New York', 'gender': 'Female'}

# Updating value
my_dict['age'] = 31
print(my_dict)  # Output: {'name': 'Alice', 'age': 31, 'city': 'New York', 'gender': 'Female'}

# Deleting a key-value pair
del my_dict['city']
print(my_dict)  # Output: {'name': 'Alice', 'age': 31, 'gender': 'Female'}

# Another way to delete a key-value pair
del(my_dict['city']) #

# Deleting entire dictionary
del my_dict  # Deleting entire dictionary

my_dict = {'name': 'Alice', 'age': 31, 'gender': 'Female'} # Re-creating dictionary

# Iterating over keys
for key in my_dict: # it itterates over keys by default
    print(key)  # Output: name, age, gender

# Iterating over values
for value in my_dict.values(): # it itterates over values
    print(value)  # Output: Alice, 31, Female

# Iterating over key-value pairs
for key, value in my_dict.items(): # it itterates over key-value pairs
    print(key, value)  # Output: name Alice, age 31, gender Female

# Checking if a key exists
if 'age' in my_dict:
    print("Age exists in dictionary")  # Output: Age exists in dictionary
else:
    print("Age does not exist in dictionary")

# Searching for a key by value
for key, value in my_dict.items():
    if value == 'Alice':
        print(key)  # Output: name

# Length of dictionary
print(len(my_dict))  # Output: 3

# Copying dictionary
my_dict_copy = my_dict.copy()

# Merging two dictionaries
my_dict1 = {'name': 'Alice', 'age': 30}
my_dict2 = {'city': 'Banglore'}
my_dict1.update(my_dict2)
print(my_dict1)  # Output: {'name': 'Alice', 'age': 30, 'city': 'Banglore'}


# deleting specified key
my_dict.pop('name')
# if key is not present, it will throw error

# deleting last key-value pair
my_dict.popitem()
#if dictionary is empty, it will throw error

# deleting all key-value pairs
my_dict.clear()

my_dict =  {'name': 'Alice', 'age': 30} # Re-creating dictionary

#replace the value of a key
my_dict['name'] = 'Bob'

# looping through dictionary keys and values
for key, value in my_dict.items():
    print(key, value) # Output: name Bob age 30

# creating disctionary with 2 arrays
keys = ['name ', 'age', ' city']
values = ['Alice', 30, 'New York']
my_dict = dict(zip(keys, values))
print(my_dict) # Output: {'name': 'Alice', 'age': 30, 'city': 'New York'}

# creating dictionary with list of tuples
my_dict = dict([('name', 'Alice'), ('age', 30), ('city', 'New York')])
print(my_dict) # Output: {'name': 'Alice', 'age': 30, 'city': 'New York'}



# Creating a nested dictionary  [2 dimensional dictionary]
my_2d_dict = {
    'row1': {'col1': 1, 'col2': 2, 'col3': 3},
    'row2': {'col1': 4, 'col2': 5, 'col3': 6},
    'row3': {'col1': 7, 'col2': 8, 'col3': 9}
}

# Accessing value in 2D dictionary
print(my_2d_dict['row2']['col2'])  # Output: 5

# Iterating over 2D dictionary
for row_key, row_value in my_2d_dict.items():
    for col_key, col_value in row_value.items():
        print(row_key, col_key, col_value)  # Output: row1 col1 1, row1 col2 2, row1 col3 3, row2 col1 4, row2 col2 5, row2 col3 6, row3 col1 7, row3 col2 8, row3 col3 9

# creating 2D dictionary using 2D array
keys = ['row1', 'row2', 'row3']
values = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
my_2d_dict = dict(zip(keys, values))
print(my_2d_dict) # Output: {'row1': [1, 2, 3], 'row2': [4, 5, 6], 'row3': [7, 8, 9]}

# creating 2D dictionary using list of tuples
my_2d_dict = dict([('row1', {'col1': 1, 'col2': 2, 'col3': 3}), ('row2', {'col1': 4, 'col2': 5, 'col3': 6}), ('row3', {'col1': 7, 'col2': 8, 'col3': 9})])
print(my_2d_dict) # Output: {'row1': {'col1': 1, 'col2': 2, 'col3': 3}, 'row2': {'col1': 4, 'col2': 5, 'col3': 6}, 'row3': {'col1': 7, 'col2': 8, 'col3': 9}}