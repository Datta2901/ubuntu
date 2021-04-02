



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

        if tableSetup[t] == 1 :
            if currentTableArguments + 2 > tableCost :
                tableSetup = {t:1}
                tableCount += 1
                currentTableArguments = 0
                continue

            currentTableArguments +=  2 
            totalTableArguments += 2
        else:
            if currentTableArguments + 1 > tableCost :
                tableSetup = {t:1}
                tableCount += 1
                currentTableArguments = 0
                continue
            
            currentTableArguments +=  1
            totalTableArguments += 1

        tableSetup[t] += 1
    
    return totalTableArguments + tableCount*tableCost
        


        









def addAll(familyType,tableCost):

    m = {}
    for i in familyType:
        if i in m :
            m[i] += 1
            continue
        m[i] = 1
    for key,val = 




t = int(input())
for i in range(t):
    [n,tableCost] = [int(i) for i in input().split()]
    familyType = [int(i) for i in input().split()]

    finalCost = addAll(familyType,tableCost)
    if tableCost == 1:
        finalCost = findCost(familyType, tableCost)

    print(finalCost)