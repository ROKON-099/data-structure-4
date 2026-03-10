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
    int largest=arr[0], smallest=arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i] >largest)
            largest=arr[i];
        if (arr[i] < smallest)
            smallest=arr[i];


    }
    cout << "The largest number:" <<largest <<endl;
    cout << " The smallest number:" <<smallest <<endl;



    return 0;




}
