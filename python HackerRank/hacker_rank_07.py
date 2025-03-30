def swap_case(s):
    # Initialize an empty string to store the result
    result = ""
    
    # Iterate through each character in the input string
    for char in s:
        # If the character is uppercase, convert to lowercase
        if char.isupper():
            result += char.lower()
        # If the character is lowercase, convert to uppercase
        elif char.islower():
            result += char.upper()
        # If the character is not a letter (like numbers, spaces, symbols), keep it as is
        else:
            result += char
    
    return result

# Test the function with the provided example
if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)