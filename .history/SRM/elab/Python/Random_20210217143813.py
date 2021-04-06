class details:
    def __init__(self, ID0037, n0037, ans, u0037):
self.ID0037 = ID0037
self.n0037 = n0037
self.ans = ans
self.u0037 = u0037
def retcnf(self):
return self.ans
def showID0037(self):
return self.ID0037
def showN0037(self):
return self.n0037
def showans(self):
return self.ans
def showunit(self):
return self.u0037
class sdetails:
def __init__(self, date, amount):
self.date = date
self.amount = amount
def showdt(self):
return self.date
def showamt(self):
return self.amount
a=[]
b=[]
for i in range(5):
ID0037=input("\nCustomer ID = ")
n0037=input("Customer Name = ")
ans=input("Did you pay the bill?(y/n) = ")
u0037=int(input("Enter units Consumed = "))
a.append(details(ID0037,n0037,ans,u0037))
if a[i].retcnf()=='y' or a[i].retcnf()=='Y':
date=input("Enter the date of payment of bill? (DD/MM/YY) : ")
amount=input("Enter the amount of bill payment? = ")
b.append(sdetails(date,amount))
else:
b.append(sdetails('\0',0))
print("Bill ID0037"," ","Customer ID"," ","Name"," ","Units"," ","Date of Payment"," ","Amount Paid\n")
for i in range(5):
if a[i].retcnf()=='y' or a[i].retcnf()=='Y':
print("Bill_00",i," ",a[i].showID0037()," ",a[i].showN0037()," ",a[i].showunit()," ",b[i].showdt()," ",b[i].showamt(),"\n")
Solution Code:-
class details:
def __init__(self, ID0037, n0037, u10037,u20037,u30037):
self.ID0037 = ID0037
self.n0037 = n0037
self.u10037 = u10037
self.u20037 = u20037
self.u30037 = u30037
def pred(