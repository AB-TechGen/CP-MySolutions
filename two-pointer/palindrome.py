# Just using python here instead of C for string problems
# Strings in C are a pain in the ass
# And honestly, I don't care that much about computation speeds for string problems

def isPalindrome(s: str) -> bool:
    l, r = 0, len(s) - 1
    if len(s) <= 1:
        return True
    
    while l < r:
        if not s[l].isalnum():
            l += 1
            continue
        elif not s[r].isalnum():
            r -= 1
            continue
            
        if s[l].lower() != s[r].lower():
            return False
        
        l += 1
        r -= 1
        
    return True


if __name__ == "__main__":
    print(isPalindrome("Hello Ol-_l_-eH!!"))
    print(isPalindrome("fuck you uoyi"))
    print(isPalindrome("A man, a plan, a canal: Panama"))