#include <iostream>

using namespace std;

int main()
{
    int N, max, min, range, sum;
    double mean;
    cout << "Number of Integer" << endl;
    cin >> N;
    int numbers[N];
    sum = 0;
    for(int i = 0; i < N ; i++)
    {
        cout << "Enter a number:" << endl;
        cin >> numbers[i]; 
        sum += numbers[i];
        if(i == 0)
        {
            max = numbers[i];
            min = numbers[i];
        } else 
        {
            max = (numbers[i] > max)? numbers[i]:max;
            min = (numbers[i] < min)? numbers[i]:min;
        }
    }
    mean = sum / N;
    range = max - min;
    cout << "Mean: " << mean << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Range: " << range << endl;
    return 0;
}