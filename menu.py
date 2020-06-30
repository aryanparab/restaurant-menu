
menu = ["0", "chicken tikka", "chicken tandoori", "mutton masala", "egg masala", "chicken biryani ",
            "mutton biryani", "naan", "roti", "coca cola"]


price =[0, 240, 200, 280, 190, 210, 260, 30, 10, 20]
tableo=[0 for n in range(0,5)]
total=[0 for n in range(len(tableo))]
order=[{} for n in range(len(tableo))]
def ask():
    i=int(input("1.Order \n 2.Bill"))
    return i

def displaymenu():
    for i in range(1,len(menu)):
        print(i , ". " ,menu[i]+'-------' , price[i])
displaymenu()
while True:
    no=int(input("Enter Table no (1-5): "))
    if no not in [n for n in range(len(tableo))]:
        print("INvalid Table")
        continue
    else:
        get=ask()

        if get==1:
            print("Enter order numbers and quantity :")
            for i in range(0,4):
                inp=input().split()

                if inp[0]=='0':continue

                total[no]=total[no]+price[int(inp[0])]*int(inp[1])
                order[no][menu[int(inp[0])]]=order[no].get(menu[int(inp[0])],0)+int(inp[1])

            print(order[no])
        if get==2:
            for key,value in order[no].items():
                print(key ,'-----',value)
            print("TOTAL :  ", total[no])
            total[no]=0
            order[no]={}




