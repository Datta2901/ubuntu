def fibonacci(n00):
    if n00<=1:
        return n00
    else:
        return (fibonacci(n00-1) + fibonacci(n00-2))
      
n00=int(input("enter the range of series: "))
print("The fibonacci series are : ")
list10033=[]
for i in range(n00):
    #print(fibonacci(i))
    list10033.insert(i,fibonacci(i))
print(list10033)
list20033=list(filter(lambda a:a%2!=0,list10033))
list30033=list(filter(lambda a:a%2==0,list10033))
print("\nThe even numbers of the given range of fibonacci series are : ",list30033)
print("\nThe odd numbers of the given range of fibonacci series are : ",list20033)
 