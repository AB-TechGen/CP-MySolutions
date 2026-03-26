def majorityElement(A):
    """ 
    Time-complexity: O(3n) = O(n)
    Space-complexity: O(n) 
    """
    n = len(A)
    count = {}
    for element in A:
        count.setdefault(element, 0)
    
    for element in A:
        count[element] += 1

    majority = -1
    majorityElement = None
    for element in count:
        if count[element] > majority:
            majority = count[element]
            majorityElement = element
    
    # print(count)
    return majorityElement

if __name__ == "__main__":
    n = int(input("Enter number of elements in array: "))
    array = [input("Element %d: " % (i+1)) for i in range(n)]
    print("Original Array: ", array)

    print(f"Majority element is {majorityElement(array)}")

