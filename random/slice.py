# a = "Manikanta"
# print(a[:8])

numbers = [2.5, 3, 4, -5]

# start parameter is not provided
numbers_sum = sum(numbers)
# print(numbers_sum)
print(sum(numbers[:3]))

# start = 10
numbers_sum = sum(numbers, 10)
print(numbers_sum)