width = 5
print("rahul" .ljust(width,"H"))

for i in range(width):
    print(("H" *i).rjust(width-1)+"H"+("H"*i).ljust(width-1))
for i in range(width + 1):
    print(("H" * width).center(width *2)+("H" * width).center(width * 6))

for i in range(width,0,-2):
    print(("H" * (width * 6)))

for i in range(width + 1):
    print(("H" * width).center(width *2)+("H" * width).center(width * 6))

for i in range(width - 1, 0, -1):
    print(("H" *i).rjust(width * 4)+"H"+("H"*i).ljust(width + 1))