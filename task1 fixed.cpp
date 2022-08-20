/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int data = 255;
    int payload = 6.153;
    int flag = true;
    int ch = '#';
    cout << data << endl;
    cout << payload << endl;
    cout << true << endl;
    cout << ch <<endl;
   
    int x = 10;
    int z = 10 + 100;
    int c = 10 - 20;
    int p = 10 * 3;
    int s = 10 / 2;
    cout << "In total it will be = " << z << endl;
    cout << "In total it will be = " << c << endl;
    cout << "In total it will be = " << p << endl;
    cout << "In total it will be = " << s << endl;

    float g = 0;
    float h = 1;
    double q = 1.5426;

    int value = 3;
    int valueSec = value + 1; // змінна value вже була введена, вона = 3, щоб розрахувати і вивести "value +1 ". треба ввести нову змінну
    cout << valueSec << endl; 

  return 0;  
}
