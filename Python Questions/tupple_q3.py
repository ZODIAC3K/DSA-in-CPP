# Function to parse input and return tuples
def parse_input(input_str):
    name, age, sal = input_str.strip().split(',')
    return (name, int(age), int(sal));
# Function to sort tuples based on criteria
def sort_tuples(tuples_list, type):
    if (type == "age"):
        type = 1
    elif (type == "sal" or "salary" ):
        type = 2
    else:
        type = 0
    return sorted(tuples_list, key=lambda tuples_list: tuples_list[type])

# Main function
def main():
    # Input
    tuples_list = []
    print("Enter tuples in the format (name, age, sal), enter 'done' to finish input: ", end='')
    while True:
        user_input = input().strip()
        if user_input.lower() == 'done':
            break
        else:
            tuples_list.append(parse_input(user_input))

    # Sorting
    sorted_tuples = sort_tuples(tuples_list, input("Enter sorting criteria (default (name) / age / sal): "))

    # Output
    print("Sorted tuples:")
    print(sorted_tuples);

if __name__ == "__main__":
    main()

# Input ---->

# Tom,19,800

# John,20,900

# Sam,17,910

# Sam,17,930

# Ruby,21,850