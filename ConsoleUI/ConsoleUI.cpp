#include <iostream>
using namespace std;


void billAmount()
{
    float billamount;
    float discount = 0.0;

    std::cout << "Enter Bill Amount";
    std::cin >> billamount;

    if (billamount >= 500)
    {
        discount = billamount * 20 / 100;
    }
    else if (billamount >= 100 && billamount < 500)
    {
        discount = billamount * 10 / 100;
    }

    std::cout << "Bill amount is: " << billamount << endl;
    std::cout << "Discount is: " << discount << endl;
    std::cout << "Discounted amount is: " << billamount - discount << endl;
}

int main()
{
    // ELSE IF LADDER
    int day;
    std::cout << "Enter day number: ";

    std::cin >> day;

    if (day == 1)
    {
        std::cout << "Mon" << std::endl;
    }
    else if(day == 2)
    {
        std::cout << "Tue" << std::endl;
    }
    else if (day == 3)
    {
        std::cout << "Wed" << std::endl;
    }
    else if (day == 4)
    {
        std::cout << "Thur" << std::endl;
    }
    else if (day == 5)
    {
        std::cout << "Fri" << std::endl;
    }
    else if (day == 6)
    {
        std::cout << "Sat" << std::endl;
    }
    else if (day == 7)
    {
        std::cout << "Sun" << std::endl;
    }
    else
    {
        std::cout << "Invalid day" << std::endl;
    }

    // SHORT CIRCUIT

    int a = 10, b = 5, i = 5;

    if(a<b || ++i <b)
    {
	    
    }
    cout << i << endl;

    // SWITCH CAS
    std::cout << "Enter day number: ";
    std::cin >> day;
    switch (day)
    {
    case 1:
        cout << "Mon" << endl;
        break;
    case 2:
        cout << "Tue" << endl;
        break;
    case 3:
        cout << "Wend" << endl;
        break;
    case 4:
        cout << "Thur" << endl;
        break;
    case 5:
        cout << "Fri" << endl;
        break;
    case 6:
        cout << "Sat" << endl;
        break;
    case 7:
        cout << "Sun" << endl;
        break;
        default:
            cout << "Invalid day" << endl;
    }
    cout << endl << endl << endl;
    billAmount();
    return 0;


}


