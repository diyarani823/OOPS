#include <iostream>
using namespace std;

class BookType
{
    string title, author[4], pub;
    int ISBN, noOfCpy, noOfAuth;
    float price;

public:
    string getTitle() { return title; }
    void setTitle(const string t) { title = t; }
    bool checkTitle(const string t) { return title == t; }

    int getCopies() { return noOfCpy; }
    void setCopies(const int num) { noOfCpy = num; }
    void updateCopies(const int num)
    {
        noOfCpy += num;
        if (noOfCpy < 0)
            noOfCpy = 0;
    }

    void setAuth(const string auth)
    {
        if (noOfAuth < 4)
            author[noOfAuth++] = auth;
        else
            cout << "Author limit reached!\n";
    }

    void getAuth()
    {
        cout << "Total Authors: " << noOfAuth << endl;
        for (int i = 0; i < noOfAuth; i++)
            cout << "Author " << i + 1 << ": " << author[i] << endl;
    }

    string getPub() { return pub; }
    void setPub(const string t) { pub = t; }

    float getPrice() { return price; }
    void setPrice(float p) { price = p; }

    int getISBN() { return ISBN; }
    void setISBN(int i) { ISBN = i; }

    BookType()
    {
        pub = title = "Unknown";
        for (int i = 0; i < 4; i++)
            author[i] = "N/A";
        ISBN = noOfCpy = noOfAuth = price = 0;
    }
};

/* renamed function */
void showBookDetails(BookType bk)
{
    cout << "Book Title: " << bk.getTitle() << endl;
    cout << "Publisher Name: " << bk.getPub() << endl;
    cout << "Book Price: $" << bk.getPrice() << endl;
    cout << "ISBN Code: " << bk.getISBN() << endl;
    bk.getAuth();

    if (bk.getCopies() == 0)
        cout << "Status: Not available\n";
    else
        cout << "Status: Available (" << bk.getCopies() << " copies)\n";
}

int main()
{
    BookType library[100];
    int option, bookCount = 0;

    cout << "===== Library Management System =====\n";

    do
    {
        cout << "\nChoose an option:\n";
        cout << "1. Insert new book\n";
        cout << "2. Show all books\n";
        cout << "3. Find book by title\n";
        cout << "4. Find book by ISBN\n";
        cout << "5. Find book by publisher\n";
        cout << "6. Modify stock quantity\n";
        cout << "7. Quit\n";
        cin >> option;

        switch (option)
        {
        case 1:
            if (bookCount < 100)
            {
                string bTitle, aName, pName;
                int isbnNo, stockQty, authCount;
                float cost;

                cout << "Enter book title: ";
                cin >> bTitle;
                library[bookCount].setTitle(bTitle);

                cout << "How many authors? ";
                cin >> authCount;

                for (int i = 0; i < authCount && i < 4; i++)
                {
                    cout << "Enter author name: ";
                    cin >> aName;
                    library[bookCount].setAuth(aName);
                }

                cout << "Enter publisher name: ";
                cin >> pName;
                library[bookCount].setPub(pName);

                cout << "Enter ISBN: ";
                cin >> isbnNo;
                library[bookCount].setISBN(isbnNo);

                cout << "Enter stock quantity: ";
                cin >> stockQty;
                library[bookCount].setCopies(stockQty);

                cout << "Enter book price: ";
                cin >> cost;
                library[bookCount].setPrice(cost);

                bookCount++;
            }
            else
                cout << "Book storage limit reached.\n";
            break;

        case 2:
            cout << "\nTotal books available: " << bookCount << endl;
            for (int i = 0; i < bookCount; i++)
            {
                cout << "--------------------------\n";
                showBookDetails(library[i]);
            }
            break;

        case 3:
        {
            string searchTitle;
            cout << "Enter title to search: ";
            cin >> searchTitle;

            int found = 0;
            for (int i = 0; i < bookCount; i++)
                if (library[i].checkTitle(searchTitle))
                {
                    showBookDetails(library[i]);
                    found++;
                }
            cout << "Matches found: " << found << endl;
        }
        break;

        case 4:
        {
            int searchISBN;
            cout << "Enter ISBN to search: ";
            cin >> searchISBN;

            bool found = false;
            for (int i = 0; i < bookCount; i++)
                if (library[i].getISBN() == searchISBN)
                {
                    showBookDetails(library[i]);
                    found = true;
                }
            if (!found)
                cout << "No book found with given ISBN.\n";
        }
        break;

        case 5:
        {
            string searchPub;
            cout << "Enter publisher name: ";
            cin >> searchPub;

            int count = 0;
            for (int i = 0; i < bookCount; i++)
                if (library[i].getPub() == searchPub)
                {
                    showBookDetails(library[i]);
                    count++;
                }
            cout << "Total matches: " << count << endl;
        }
        break;

        case 6:
        {
            int isbnNo, qty;
            cout << "Enter ISBN: ";
            cin >> isbnNo;

            for (int i = 0; i < bookCount; i++)
                if (library[i].getISBN() == isbnNo)
                {
                    cout << "Enter quantity to add/remove: ";
                    cin >> qty;
                    library[i].updateCopies(qty);
                }
        }
        break;

        case 7:
            cout << "Program terminated.\n";
            break;

        default:
            cout << "Invalid selection!\n";
        }

    } while (option != 7);

    return 0;
}

