#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >>n;
    cout << "Enter "<<n << " Number of array: ";
    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin >>arr[i];
    }
    int largest=arr[0];
    int secondlargest=-999999;
    for (int i=1; i<n; i++)
    {
        if (arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if (arr[i]> secondlargest && arr[i] !=largest)
        {
            secondlargest=arr[i];

        }

    }
    cout << "Second largest:" <<secondlargest <<endl;
        return 0;
}









