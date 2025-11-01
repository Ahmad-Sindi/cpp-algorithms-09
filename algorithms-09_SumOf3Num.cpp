// Algorithm Challenge
// 9 - Sum of 3 Numbers
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Please enter 3 numbers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    int sum = num1 + num2 + num3;

    cout << "\nCalculation: " << num1 << " + " << num2 << " + " << num3 << " = " << sum << endl;
    cout << "Total Sum: " << sum << endl;

    return 0;
}
