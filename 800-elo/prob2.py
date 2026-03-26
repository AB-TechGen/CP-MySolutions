n = int(input())
for _ in range(n):
    word = input()
    if len(word) <= 10:
        print(word)
    else:
        bw = len(word) - 2
        newWord = word[0] + f'{bw}' + word[bw+1]
        print(newWord)
