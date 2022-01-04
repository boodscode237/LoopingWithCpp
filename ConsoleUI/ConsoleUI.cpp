#include <iostream>
using namespace std;

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
    return 0;


}
