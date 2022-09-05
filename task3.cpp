 #include <iostream>

using namespace std;

 

int main( )
{

int name = 8;

    for (int user = 1; user <= name; user++)
    {

        cout << "Liza" << endl;
    }


int number = 100;

    for ( int i = 0; i <= number; i++)
    {
        cout << "N: " << i << endl;
    }


int number1 = 100;

    for ( int e = -10; e <= number1; e++)
    {
        cout << "Num  " << e << endl;
    }

long int number2 = 100;

    for ( int b = -100; b <= number2; b++)
    {
        cout << "Player:  " << b << endl;
    }

int positiveNumber, n;

cout << "Enter the positive number: " << endl;
cin >> positiveNumber;

if ( positiveNumber < 0 )  
{
    cout << "Wrong number, try again!" << endl;
    cout << "Enter the positive number: ";
    cin >> positiveNumber;
}

else
{
    cout << "Your answer is accepted" << endl;
}

int sum = 0;
for ( n = 0; n <= positiveNumber; n++)
{
    sum = n*(n+1)/2;

}

cout << sum << " in total" << endl;


    int name1 = 1 ;
    while (name1 <= 8)
    {
        cout << "Liza" << endl;
        name1++;
    }

int m = 1;
while (m <= 100)
{
cout << "N: " << m << endl;
m++;
}

int b = -10;
while (b <= 100)
{
    cout << " Num " << b << endl;
    b++;
}

int t = -100;
while (t <= 100)
{
    cout << "Player: " << t << endl;
    t++;
}

int posit, h;

cout << "Enter the positive number: " << endl;
cin >> posit;

if ( posit < 0 )  
{
    cout << "Wrong number, try again!" << endl;
    cout << "Enter the positive number: ";
    cin >> posit;
}

else
{
    cout << "Your answer is accepted" << endl;
}

int sum1 = 1;
while (h <= posit)
{
    sum1 = h*(h+1)/2;
    h++;
}

cout << sum1 << " in total" << endl;
    return 0;
}
