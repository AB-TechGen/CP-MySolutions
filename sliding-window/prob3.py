def longestNonRepeatingSubstring(string):
    longest = 0
    left = 0
    for right in range(1, len(string)):
        window = string[left:right]
        element = string[right]
        if element not in window:
            longest = right - left + 1
        else:
            while element in window:
                left += 1
                window = string[left:right]
    return longest

if __name__ == "__main__":
    string = input("Enter string: ")
    print(f"Longest substring within {string} without repeating characters is of length {longestNonRepeatingSubstring(string)}")
    