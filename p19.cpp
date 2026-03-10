#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    string name;
    int id;
    cout << "Enter student name:";
    cin>> name;
    cout << "Enter student id:";
    cin>> id;
    ofstream file ("student.txt");

    file <<"student name:" <<name <<endl;
    file << "student Id:" <<id <<endl;
    file.close();
    return 0;







}
