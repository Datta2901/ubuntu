t = int(input())
while t > 0:
    size = int(input())
    lt = []
    lt = [int(x) for x in input().split()]
    max_so_far = -1e10 - 1
    max_ending_here = 0
    for i in lt:
        max_ending_here = max_ending_here + i
        if (max_so_far < max_ending_here):
            max_so_far = max_ending_here
        if max_ending_here < 0:
            max_ending_here = 0  
    print(max_so_far)
    t -= 1   