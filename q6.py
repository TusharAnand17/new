# Write a Python program to convert a tuple to a string. 

tuple_1 = ('a','b','c','d')
string = ""
for i in tuple_1:
    string = string + i
print(string)
print(type(string))

tuple_2 = [1,2,3,4,5]
string = ""
for i in tuple_2:
    string = string + str(i)
print(string)
print(type(string))