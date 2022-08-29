#include <iostream>

using namespace std;

int main()

{

int number;

std::cout << "Enter whole number: ";

std::cin >> number;

if (number < 0)
{
    std::cout << "entered number is negative" << std::endl;
    std::cout << std::endl;
}

else 

{
    std::cout << "entered number is positive" << std::endl;
    std::cout << std::endl;
}
//....................................................................................................................................//
    
    string znachennia_kraina = "Ukraine";
    string poniattia_freedom = "Ukraine";
    
    
    bool flag = false;
    std::cout << "True or false: ";
    std::cin >> flag;
    
    if (znachennia_kraina == poniattia_freedom)
    {
        flag = true;
        std::cout <<  "Ukraine is freedom" << std::endl;
        std::cout << std::endl;
    }
    else 
    {
        flag = false;
        std::cout << "Ukrain is freedom anyway, don't be like rusnia, come on.." << std::endl;
        std::cout << std::endl;
    }
        
    int number1 = 3;
    int number2 = 4;
    int number3 = 5;
    if ((number1 < number2) && (number2 < number3))
    {
        if (number1 < number3)
        {
            std::cout << "The biggest number is: " << number3 << std::endl;
        }
    }
    else
    {
        std::cout << "Error" << std::endl;
    }
    
    return 0;
}