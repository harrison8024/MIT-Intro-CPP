#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Enter a integer:" << endl;
    cin >> num;
    cout << "For Loop:" << endl;
    for(int i = 0; i < num; i++)
    {
        cout << "Hello World!" << "\n";
    }
    cout << "While Loop:" << endl;
    int j = 0;
    while(j++ < num)
    {
        cout << "Hello World!" << "\n";
        // j++;
    }
    cout << "Do-While Loop:" << endl;
    int k = 0;
    do
    {
        cout << "Hello World!" << "\n";
        // k++;
    } 
    while(++k < num);
    return 0;
}