#include <iostream>

using namespace std;

int main()
{
    int N;
    string word = "Wrong";
    cout << "Enter an Integer:" << endl;
    cin >> N;
    cout << ((N%5 == 0)? N/5 : -1) << endl;
    return 0;
}