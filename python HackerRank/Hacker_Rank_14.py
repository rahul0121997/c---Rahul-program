n = 5

for i in range(n):
    print(" " * (n - i), end = "")
    for j in range(i, -1, -1):
        print(chr(69 - 4 + j), end = "")
    for j in range(i, 0, -1):
        print(chr(69 - 4 + j), end ="")

    print()