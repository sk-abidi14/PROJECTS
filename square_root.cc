// Find square root of given number  (05-08-2025)

#include <iostream>
using namespace std;

float Square_root(int n)
{
    int i = 0;      //simple variable for calculation
    int sq = 1;     // calculate square from 1 and assign it to i

    int j;          // Nearest square of given number

    float z = -1;   //Square root of nearest square
    while (i < n)
    {
        j = i;
        i = sq * sq;
        z++;
        sq++;
    }

    if(i == n)
    {
        return sq - 1;
    }

    // Calculation of Square Root
    double sq_root;
    sq_root = z + (n - j) / (z * 2);

    return sq_root;
}
int main()
{
    int n;
    cout << "Enter a number to find square root : ";
    cin >> n;

    if (n < 0)
    {
        cout << "Square root less than zero is not real" << endl;
    }
    else if (n == 0)
    {
        cout << "Square root of 0 is 0 " << endl;
    }
    else
    {
        cout << "Square root of given number is : " << Square_root(n);
    }

    return 0;
}