def majorityElement(A):
    """ 
    Time-complexity: O(n)
    Space-complexity: O(1)
    """
    n = len(A)
    balance = 0
    candidate = None
    for element in A:
        if balance == 0:
            candidate = element
        
        if candidate == element:
            count += 1
        else:
            count -= 1
    
    return candidate

if __name__ == "__main__":
    n = int(input("Enter number of elements in array: "))
    array = [input("Element %d: " % (i+1)) for i in range(n)]
    print("Original Array: ", array)