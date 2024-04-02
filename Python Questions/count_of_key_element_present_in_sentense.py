# Take input from the user
user_input = input("Enter a sentence: ")

# Split the input by spaces and store it in a list
word_list = user_input.split()

# Ask user for a key to search for
search_key = input("Enter a word to search for: ")

# Count the occurrences of the key in the list
occurrences = word_list.count(search_key)

# Return the number of occurrences
print(f"The word '{search_key}' appears {occurrences} time(s) in the input.")

