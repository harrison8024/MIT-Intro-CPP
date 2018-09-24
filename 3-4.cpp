#include <iostream>

using namespace std;

// 3.4.1
// int main()
// {
//     while(1)
//     {
//         int N;
//         cout << "Enter an Integer:" << endl;
//         cin >> N;
//         cout << ((N%5 == 0 && N >=0)? N/5 : -1) << endl;
//     }
//     return 0;
// }

//3.4.2
// int main()
// {
//     while(1)
//     {
//         int N;
//         cout << "Enter an Integer:" << endl;
//         cin >> N;
//         if(N%5 > 0)
//         {
//             cout << "-1\n";
//             continue;
//         } 
//         cout << N/5 << "\n";
//     }
//     return 0;
// }


//3.4.3
int main()
{
    while(1)
    {
        int N;
        cout << "Enter an Integer:" << endl;
        cin >> N;
        if(N%5 > 0)
        {
            cout << "-1\n";
            continue;
        } 
        cout << N/5 << "\n";
        if(N == -1){
            break;
        }
    }
    cout << "Good Bye!" << endl;
    return 0;
}