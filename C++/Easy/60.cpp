#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int(10);
    delete ptr;
    cout << *ptr << endl;
    return 0;
}