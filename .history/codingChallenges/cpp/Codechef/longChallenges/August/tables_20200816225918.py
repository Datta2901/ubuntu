



def findCost(familyType, tableCost):
    tableSetup={}
    currentTableArguments = 0
    totalTableArguments = 0
    tableCount = 1
    for t in familyType:
        if t not in tableSetup:
            tableSetup[t] = 1
            continue
        if currentTableArguments + tableSetup[t] > tableCost :
            tableSetup = {t:1}
            tableCount +0=1


        














t = int(input())
for i in range(t):
    [n,tableCost] = [int(i) for i in input().split()]
    familyType = [int(i) for i in input().split()]

    finalCost = findCost(familyType, tableCost)