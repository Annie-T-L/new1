#include <iostream>

using namespace std;

int doubN(int a1)
{
    return 2*a1;
}


int main()
{
    cout << "Enter number\t";
    int a1;
    cin >> a1;
    cout << doubN(a1) << endl;
    return 0;
}

