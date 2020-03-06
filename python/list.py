t = int(input())
while(t>0):
    t = t-1
    n = int(input())
    l1 = [int(i) for i in input().split()]
    l2 = [int(i) for i in input().split()]
    l1.sort()
    l2.sort()

    l3 = [min(l1[i], l2[i]) for i in range(n)]
    print(sum(l3))
    