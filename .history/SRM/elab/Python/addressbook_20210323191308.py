from tkinter import *
import sqlite3

root = Tk()

root.title("address book")
root.geometry("400x400")


conn = sqlite3.connect("address_book.db")

c = conn.cursor()

c.commit()

root.mainloop()



