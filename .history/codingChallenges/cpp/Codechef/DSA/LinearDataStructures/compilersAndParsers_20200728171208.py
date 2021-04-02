t = int(input())
for _ in range(t):
    stack = []
    s = input()
    count = 0
    temp = 0
    for i in s:
        if i == "<":
            stack.append("<")
        else:
            if len(stack) == 0:
                break
            else:
                stack.pop(-1)
                temp += 2
                if len(stack) == 0:
                    count += temp
                    temp = 0
    print(count)
