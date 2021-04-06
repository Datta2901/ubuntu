



















t = int(input())
for i in range(t):
    [n,tablecost] = [int(i) for i in input().split()]
    familyType = [int(i) for i in input().split()]

    finalCost = findCost(familyType, cost)