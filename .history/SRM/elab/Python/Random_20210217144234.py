def fibonacci(n):
       if n<=1:
       return n
   else:
      return (fibonacci(n-1) + fibonacci(n-2))
      
n=int(input("enter the range of series: "))
print("The fibonacci series are : ")
list1=[]
for i in range(n):
    #print(fibonacci(i))
    list1.insert(i,fibonacci(i))
print(list1)
list2=list(filter(lambda a:a%2!=0,list1))
list3=list(filter(lambda a:a%2==0,list1))
print("\nThe even numbers of the given range of fibonacci series are : ",list3)
print("\nThe odd numbers of the given range of fibonacci series are : ",list2)
 