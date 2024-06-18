
books = []

for i in range(3):
    book = dict()
    book["author"] = input("Enter author name: ")
    book["title"] = input("Enter book title: ")
    books.append(book)

    #print
for book in books:
    print(book)
clear