



def findCost(familyType, tableCost):
    tableSetup={}
    for t in familyType:
        if t not in tableSetup:
            tableSetup[t] = 1
            continue
        currentTable
        














t = int(input())
for i in range(t):
    [n,tableCost] = [int(i) for i in input().split()]
    familyType = [int(i) for i in input().split()]

    finalCost = findCost(familyType, tableCost)