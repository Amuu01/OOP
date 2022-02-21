// Supermarket Billing System
#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <stdio.h>
using namespace std;
int n = 0;
class Product
{

    int pno;
    char name[20];
    float qty, tax, dis, price;

public:
    int getPno()
    { // to return the product number only
        return pno;
    }

    float getPrice()
    {

        return price;
    }

    float getDiscount()
    {

        return dis;
    }

    char *getName()
    {

        return name;
    }

    void setData()
    {
        cout << "\nEnter Product Details" << endl;
        cout << "\nProduct Number: ";
        cin >> pno;
        cout << "\nProduct Name  : ";
        cin.ignore();          // getline() function takes an auto enter , by taking ignore we can fix that
        cin.getline(name, 20); // getline() to get input along with whitespaces
        cout << "\nProduct Price : ";
        cin >> price;
        cout << "\nDiscount( % ) : ";
        cin >> dis;
    }

    void modifyData() // to modify the data using this function
    {
        cout << "Product Number  :" << pno << endl;
        cout << "Enter Product Details " << endl;
        cout << "Name    : ";
        cin.ignore();
        cin.getline(name, 20);
        cout << "Price   : ";
        cin >> price;
        cout << "Discount: ";
        cin >> dis;
    }

    void showData()
    { // display for search function and delete

        cout << "\nPRODUCT DETAILS\n"
             << endl;
        cout << "Product Number  : " << pno << endl;
        cout << "Product  Name   : " << name << endl;
        cout << "Product Price   : " << price << endl;
        cout << "Discount( % )   : " << dis << endl;
    }

    void getData() // collectively display
    {

        cout.setf(ios ::left);
        cout << setw(20) << pno;
        cout << setw(20) << name;
        cout << setw(20) << price;
        cout << setw(5) << dis;
        cout<<endl;
    }
} p[25];

void heading() // to give a structure to the output result
{

    cout.setf(ios ::left);
    cout << setw(20) << "Product No";
    cout << setw(20) << "Name";
    cout << setw(20) << "Price";
    cout << setw(10) << "Discount(%)";
    cout<<endl;
}

void place_order()
{
    int i, j, arr_pn[25], qnty[25], c = 0, flag = 0;
    float amt, damt, total = 0;
    char ch;
    // we have to show the Product Details to the customer
    if (n > 0)
    {
        cout << "\n==================================\n";
        cout << "        AVAILABLE PRODUCT      \n ";
        cout << "===================================\n";
        heading();
        for (i = 0; i < n; i++)
        {
            p[i].getData();
        }
        do
        {
            cout << "\nEnter The Product Number: ";
            cin >> arr_pn[c];
            cout << "Enter The Quantity in Number: ";
            cin >> qnty[c];
            c++;
            cout << "Do U Want To Order Another Product ?( y / n ): ";
            cin >> ch;
        } while (ch == 'y' || ch == 'Y');
        cout << "Thank You For Placing The Order!!!\n";
        system("pause");
        system("cls");
        cout << "\n*********************** I N V O I C E *********************************************\n";
        cout << "Pr No. \t\tPr Name \tPrice \tQuantity \tAmount \t\tAmount After Discount\n";
        for (i = 0; i < c; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (arr_pn[i] == p[j].getPno())
                {
                    int temp_p;
                    temp_p = p[j].getPrice();
                    amt = temp_p * qnty[i];
                    damt = amt - (amt * p[j].getDiscount() / 100);
                    flag++;
                    cout <<"\n"<< arr_pn[i] << " \t\t" << p[j].getName() << "\t\t" << qnty[i] << "\t" << p[j].getPrice() << "\t\t" << amt << "\t\t\t" << damt;
                    total += damt;
                }
            }
        }
        if (flag != 0)
        {
            cout << "\nTOTAL AMOUNT TO PAID = " << total;
        }
    }
    else
    {
        cout << "\nNothing To Display!!!!";
    }
    if (flag == 0)
    {
        cout << "oops!!!You have Provided Wrong Product Number";
    }
}

void admin_menu()
{

    int ch2, i, pn, flag = 0, pos;
    do
    {
        system("cls");
        cout << "\n==================\n";
        cout << "     ADMIN MENU  \n";
        cout << "===================\n";
        cout << "1. CREATE PRODUCT LIST\n";
        cout << "2. VIEW PRODUCT MENU\n";
        cout << "3. QUERRY \n";
        cout << "4. MODIFY PRODUCT MENU\n";
        cout << "5. DELETE PRODUCT FROM PRODUCT MENU \n";
        cout << "6. BACK TO MAIN MENU\n";
        cout << "Please Enter Your Choice(1-6): ";
        cin >> ch2;
        switch (ch2)
        {
        case 1:
            p[n].setData();
            n++;
            break;
        case 2:
            if (n > 0)
            {
                heading();
                for (i = 0; i < n; i++)
                {
                    p[i].getData();
                }
            }
            else
            {
                cout << "\nNothing To Display";
            }
            break;
        case 3:
            if (n > 0)
            {
                cout << "\nEnter Product NO.\n";
                cin >> pn;
                for (i = 0; i < n; i++)
                {
                    if (pn == p[i].getPno())
                    {
                        p[i].showData();
                        flag++;
                    }
                }
            }
            else
            {
                cout << "\nNothing To Display!!!\n";
            }
            if (flag == 0)
            {
                cout << "\n No Such Product Number Found!!!";
            }
            break;
        case 4:
            if (n > 0)
            {
                cout << "\nEnter Product NO To Modify.\n";
                cin >> pn;
                for (i = 0; i < n; i++)
                {
                    if (pn == p[i].getPno())
                    {
                        cout << "\nThe Following Product Will Be Modified:";
                        p[i].showData();

                        cout << "\nEnter New Details\n";
                        p[i].modifyData();
                        cout<<"\nData Successfully Modified!!!!";
                        flag++;
                        break;
                    }
                }
            }
            else
            {
                cout << "\nNothing To Display";
            }
            if (flag == 0)
            {
                cout << "\nNo Such Product No. Found";
            }
            break;

        case 5:
            if (n > 0)
            {
                cout << "\nEnter Product No. To Delete: ";
                cin >> pn;
                for (i = 0; i < n; i++)
                {
                    if (pn == p[i].getPno())
                    {
                        cout << "\nFollowing Record is Deleted\n";
                        p[i].showData();
                        pos = i;
                        flag++;
                        break;
                    }
                }
                for (i = pos; i < n - 1; i++)
                {
                    p[i] = p[i + 1];
                }
                n--;
            }
            else
            {
                cout << "\nNothing To Delete!!!\n";
            }
            if (flag == 0)
            {
                cout << "\nNo Such Product Number Found !!!\n";
            }
            break;
        case 6:
            break;

        default:
            cout << "\a";
            admin_menu();
            break;
        }
        system("pause");
    } while (ch2 != 6);
}

int main()
{

    int ch, pos, i;
    do
    {   
        system("cls");
        cout << "\n==================\n";
        cout << "      MAIN MENU     \n";
        cout << "===================\n";
        cout << "1.ADMIN MENU\n";
        cout << "2.CUSTOMER \n";
        cout << "3.EXIT\n";
        cout << "Choose Any of The Option: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            admin_menu();
            break;
        case 2:
            place_order();
        case 3:
            exit(0);
        default:
            cout << "\a";
            break;
        }
        system("pause");
    } while (ch != 3);
    return 0;
}
