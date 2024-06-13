#include <iostream>
using namespace std;
void add()
{
    double x;
    double y;
    cout << "enter two numbers to add: " << endl;
    cin >> x >> y;
    double sum = x + y;
    cout << "sum of the entered numbers is: " << sum << endl;
}
void subt()
{
    double x;
    double y;
    cout << "enter two numbers to subtract: " << endl;
    cin >> x >> y;
    double diff = x - y;
    cout << "difference of the entered numbers is: " << diff << endl;
}
void mult()
{
    double x;
    double y;
    cout << "enter two numbers to multiply: " << endl;
    cin >> x >> y;
    double m = x * y;
    cout << "product of the entered numbers is: " << m << endl;
}
void divide()
{
    int x;
    int y;
    cout << "enter divident: ";
    cin >> x;
    cout << "enter divisor: ";
    cin >> y;
    cout << "quotient is: " << x / y << endl;
    cout << "remainder is: " << x % y << endl;
}
int main()
{
    cout << "WELCOME TO SIMPLE CALCULATOR" << endl;
    int x;
    cout << "Do you want to proceed ?" << endl;
    cout << "If yes then press 1 , if no then press 0" << endl;
    cin >> x;
    while (x == 1)
    {
        cout << "which operation do you want to perform ?" << endl;
        cout << "enter + for add , - for subtract , * for multiply , / for divide" << endl;
        char ch;
        cin >> ch;
        switch (ch)
        {
        case '+':
            add();
            break;
        case '-':
            subt();
            break;
        case '*':
            mult();
            break;
        case '/':
            divide();
            break;
        default:
            cout << "Either you have entered invalid operator or the operator is not specified in this code." << endl;
        }
        cout << "Do you want to continue ?" << endl;
        cout << "If yes then press 1 , if no then press 0" << endl;
        cin>>x;
    }
    cout<<"Thanks for visiting."<<endl;
    return 0;
}