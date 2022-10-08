#Student registration form

import pymysql
import tkinter as tk

def validate():
    a1 = str(v1.get())
    a2 = str(v2.get())
    a3 = str(v3.get())
    a4 = str(v4.get())
    if a1 == '' or a2 == '' or a3 == '' or a4 == '':
        v5.set("Please fill properly")
    else:
        conn=pymysql.connect(host='localhost',port=3306,user='root',passwd='',db='registration')
        cur=conn.cursor()
        cur.execute("INSERT INTO `student` (`Name`, `E-Mail`, `Phone`, `Password`) VALUES ('"+a1+"', '"+a2+"', '"+a3+"', '"+a4+"')")
        conn.commit()
        v5.set("Registered Successfully")
        cur.close()
        conn.close()

root=tk.Tk()
root.title("Login Form")
root.minsize(400,400)

v1 = tk.StringVar()
v2 = tk.StringVar()
v3 = tk.StringVar()
v4 = tk.StringVar()
v5 = tk.StringVar()

tk.Label(root,text="Name" , fg = "red" , bg = "yellow").grid(row=0,column=0)
tk.Entry(root,textvariable=v1).grid(row=0,column=4)

tk.Label(root,text="E-Mail" , fg = "red" , bg = "yellow").grid(row=1,column=0)
tk.Entry(root,textvariable=v2).grid(row=1,column=4)

tk.Label(root,text="Phone" , fg = "red" , bg = "yellow").grid(row=2,column=0)
tk.Entry(root,textvariable=v3).grid(row=2,column=4)

tk.Label(root,text="Password" , fg = "red" , bg = "yellow").grid(row=3,column=0)
tk.Entry(root,show="*" ,textvariable=v4).grid(row=3,column=4)

tk.Button(root,text="Register",command=validate).grid(row=4,column=3)
tk.Label(root,text="" ,fg = "red" , bg = "yellow" ,textvariable=v5).grid(row=5,column=3)

root.mainloop()   
