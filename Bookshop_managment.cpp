#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int arr[20] = {1};

int amount_books{ 0 };

int serial_num[20];

string book_name[20];

int price[20];

void menu()
{
    cout << "        BookShop        " << endl;
    cout << "        --------        " << endl;
    cout << "1-Record a book" << endl;
    cout << "2-Delete a book" << endl;
    cout << "3-Search a book with name" << endl;
    cout << "4-Search a book with number" << endl;
    cout << "5-Books" << endl;
    cout << "6-Exit" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Enter your option: ";
}

void Record_book()
{
    cout << "Enter amount of books you want to enter: ";
    cin >> amount_books;

    for (int i = 1; arr[0]<=amount_books, i <= amount_books; i++,arr[0]++)
    {
        
        cout << "Enter name of book "<<i<<" :";
        cin >> book_name[arr[0]];

        cout << "Enter Bnum of book " << i << " :";
        cin >> serial_num[arr[0]];

        cout << "Enter price " << i << " :";
        cin >> price[arr[0]];
    }

}

void Delete_book()
{
    int s{ 0 };

    cout << "Enter number of book: ";
    cin >> s;

    for (size_t i = 0; i < 2; i++)
    {
        if (s == serial_num[i])
        {
            serial_num[i] = 0;
            book_name[i] = "";
            price[i] = 0;
        }
    }
    
}

void Books()
{
    
    for (size_t i = 0; i <= 6; i++)
    {
        
        cout << "[ " <<"Name: " << book_name[i] << " - ";
        cout <<"Bnum: " << serial_num[i]<<" - ";
        cout <<"Price: " << price[i] << " ]" << endl;

    }
    
}

void search_name()
{
    string o ;

    cout << "Enter Book name: ";
    cin >> o;

    for (size_t j = 0; j <= 5; j++)
    {
        if (o == book_name[j])
        {
            cout << "[ "<<"Name: " <<book_name[j] <<" - ";
            cout <<"Bnum: " << serial_num[j] <<" - ";
            cout << "Price: " << price[j] << " ]" << endl;
        }
    }
}

void search_number()
{
    int m;

    cout << "Enter Book number: ";
    cin >> m;

    for (size_t i = 0; i <= 5; i++)
    {
        if (m == serial_num[i])
        {
            cout << "[ " << "Name: " << book_name[i] << " - ";
            cout << "Bnum: " << serial_num[i] << " - ";
            cout << "Price: " << price[i] << " ]" << endl;
        }
    }
}

int main()
{
    int option{ 0 };
    do
    {
        menu();

        cin >> option;

        system("cls");

        switch (option)
        {
        case 1:Record_book();
            break;

        case 2:Delete_book();
            break;

        case 3:search_name();
            break;

        case 4:search_number();

        case 5:Books();
            break;

        default:cout << "Enter option from (1:5)" << endl;
            break;
        }
        
    } while (option != 6);

}
