class Computer:
    __maxprice = 0
    def _init_(self):
        self.__maxprice = 900
    def sell(self,__maxpric):
        print("Selling Price: {}".format(self.__maxprice))
    def setMaxPrice(self, price):
        self.__maxprice = price
c = Computer()
c.sell()
c.setMaxPrice(1000)
c.sell()