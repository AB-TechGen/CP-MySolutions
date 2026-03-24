def findAllAnagrams(original, check):
    result = []
    k, n = len(check), len(original)
    if (k > n):
        return result
    
    # If frequency arrays of two arrays are equal then they are anagrams!!!!
    # Step 1: Build frequency array of required string
    target = [0] * 26
    for char in check:
        target[ord(char) - ord('a')] += 1
    
    # Step 2: 1st window
    window = [0] * 26
    for i in range(k):
        window[ord(original[i]) - ord('a')] += 1

    if window == target:
        result.append(0)

    # Step 3: Sliding
    for r in range(k, n):
        l = r - k
        window[ord(original[r]) - ord('a')] += 1
        window[ord(original[l]) - ord('a')] -= 1
        if window == target:
            result.append(l+1)
    
    return result

if __name__ == "__main__":
    original = "cbaebabacdabcabc"
    check = "abc"
    print(findAllAnagrams(original, check))


