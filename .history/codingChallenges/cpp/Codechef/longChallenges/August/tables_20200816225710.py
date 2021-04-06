



def findCost(familyType, tableCost):
    tableSetup={}
    currentTableArguments = 0
    tota
    for t in familyType:
        if t not in tableSetup:
            tableSetup[t] = 1
            continue
        currentTableArguments
        














t = int(input())
for i in range(t):
    [n,tableCost] = [int(i) for i in input().split()]
    familyType = [int(i) for i in input().split()]

    finalCost = findCost(familyType, tableCost)