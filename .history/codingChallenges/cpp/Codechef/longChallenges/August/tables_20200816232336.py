



def findCost(familyType, tableCost):
    tableSetup={}
    currentTableArguments = 0
    totalTableArguments = 0
    tableCount = 1
    for ind in range(len(familyType)):
        t = familyType[ind]
        if t not in tableSetup:
            tableSetup[t] = 1
            continue

        if tableSetup[t]
        if currentTableArguments + 1 > tableCost :
            tableSetup = {t:1}
            tableCount += 1
            currentTableArguments = 0
            continue

        if tableSetup[t] == 1:
            currentTableArguments +=  2 
            totalTableArguments += 2
        else :
            currentTableArguments +=  1
            totalTableArguments += 1
        tableSetup[t] += 1
    
    return totalTableArguments + tableCount*tableCost
        


        














t = int(input())
for i in range(t):
    [n,tableCost] = [int(i) for i in input().split()]
    familyType = [int(i) for i in input().split()]

    finalCost = findCost(familyType, tableCost)

    print(finalCost)