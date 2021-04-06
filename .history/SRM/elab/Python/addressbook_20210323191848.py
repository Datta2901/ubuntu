from tkinter import *
import sqlite3

root = Tk()

root.title("address book")
root.geometry("400x400")
root.iconbitmap("//home//manikanta//ubuntu//SRM//elab//Python")

conn = sqlite3.connect("address_book.db")

c = conn.cursor()

c.execute(""" CREATE TABLE Details(
                first_name = text,
                last_name = text,
                address_ = text,
                city = text,
                p
                zip_code = integer, 
                )

          """)


c.commit()

root.mainloop()



