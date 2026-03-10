#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the size of an array:";
    cin >>n;
    cout << "Enter " <<n << " Number of array:";
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];

    }
    for (int i=0; i<n; i++)
    {
        int num=arr[i];
        int count=0;
        for (int j=1; j<=num; j++)
        {
            if (num % j ==0)

                count ++;


        }
        if (count == 2)
        {
            cout << num << "  prime"<<endl;

        }
        else {
            cout << num << "  not prime" <<endl;

        }

    }
}
