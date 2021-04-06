from abc import ABC, abstractmethod
class Startup(ABC):
    def Ideas(self):
        print("__________")
class Infra(Startup):
    def Ideas(self):
        super().Ideas()
        print("INFRASTRUCTURE ON WORK AREA")
        print("1.Commnunication networks")
        print("2.Electric system")
        print("3.Cost investment")
        print(" ")
class Fund(Startup):
    def Ideas(Self):
        super().Ideas()
        print("CAPITAL AND FUNDING")
        print("l.Equity")
        print("2.Debt")
        print(" ")
class Resource(Startup):
    def Ideas(Self):
        super().Ideas()
        printj"HUMAN RESOURCE")
        print("l.Recruitment")
        print(""))
x = Infra()
x. Ideas()
y = Fund()
y. Ideas()
z = Resource()
z. Ideas()
INFRASTRUCTURE ON WORK AREA
1. Cornnnunication networks
2. Electric system
3. Cost investment
CAPITAL AND FUNDING
1. Equity
2. Debt
HUfAAN RESOURCE
Recruitment