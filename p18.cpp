#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >>n;
    cout << "Enter "<<n << " Number of array: ";
    char arr[n];

    for (int i=0; i<n; i++)
    {
        cin >>arr[i];
    }
    bool ispalindrome=true;
    for (int i=0; i<n/2; i++)
    {
        if (arr[i]!=arr[n-1-i])
            ispalindrome=false;
          break;

    }
    if (ispalindrome)
    {
        cout << "Palindrome"<<endl;

    }
    else
    {
        cout << "Not palindrome" <<endl;
    }
}
