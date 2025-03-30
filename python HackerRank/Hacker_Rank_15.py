#This tool computes the cartesian product of input iterables.
# It is equivalent to nested for-loops.

from itertools import product
a = [1, 2, 3]
b = [1, 2, 3]

res = [(x, y) for x in a for y in b]

print(res)

for i in a:
    for j in b:
        print(list([i, j]), end= " ")


print(list(product([1, 2, 3] , repeat= 2)))