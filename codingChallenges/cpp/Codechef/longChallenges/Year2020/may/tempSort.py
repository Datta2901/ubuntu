def IsSorted(arr):
    for i in range(1,len(arr)):
        if arr[i] < arr [i-1]:
            return False
    return True

def bubbleSort(arr):
    indicesArray = []
    flag = True
    length = len(arr)
    while(flag):
        flag = False
        for i in range(2,length):
            secondPrev = arr[i-2]
            prev = arr[i-1]
            current = arr[i]
            if current > prev and current > secondPrev:
                continue
            flag = True

            if prev > current and prev > secondPrev:
                arr[i] = prev
                arr[i-1] = secondPrev
                arr[i-2] = current
                indicesArray.append([i,i-2,i-1])   
            
            if secondPrev > current and secondPrev > prev:
                arr[i] = secondPrev
                arr[i-1] = current
                arr[i-2] = prev
                indicesArray.append([i,i-1,i-2])   
        length-=1
            
    return IsSorted(arr),indicesArray
        


t = int(input())

while(t):
    t-=1

    n,k = [int(i) for i in input().split()]
    arr = [int(i) for i in input().split()]

    isSorted, indicesArray = bubbleSort(arr)

    if isSorted and len(indicesArray) <= k:
        print(len(indicesArray))
        for i in indicesArray:
            for j  in i :
                print(j+1,end=" ")
            print()
    else:
        print(-1)

    # input_number = 100

    # for j in range(input_number, 2,-1):
    #     arr = [ i for i in range(j,0,-1)]
    #     isSorted,indicesArray = bubbleSort(arr)
    #     print("isSorted",isSorted, j)


# # arr = [4,3,2,7,8,9,23,456,234,3425,545,2134,56,3254,345]
# # print(bubbleSort(arr), "index", j)