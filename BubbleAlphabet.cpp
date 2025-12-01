#include<iostream>
using namespace std;

int main()
{
    string input;
    cin >> input; 

    int n = input.size();
    char arr[100];
    int swapCount = 0;

    
    for(int i = 0; i < n; ++i)
    {
        arr[i] = input[i];
    }

   
    for(int i = 0; i < n - 1; ++i)
    {
        for(int j = 0; j < n - i - 1; ++j)
        {
            if(arr[j] > arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapCount++;
            }
        }
    }

   
    for(int i = 0; i < n; ++i)
    {
        cout << arr[i];
    }
    cout << endl;

    cout << "total swaps " << swapCount << endl;

    return 0;
}
