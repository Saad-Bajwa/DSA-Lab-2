/*This program uses an array of pointer of type string and print the data in it*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string * studentName = new string[3];
    for(int i=0; i<3; i++){
        cout << "Enter the " << i+1 << " name of the student : " ;
        getline(cin,studentName[i]);
    }
    cout << "Output of the array is : " << endl;
    for(int i=0; i<3; i++){
        cout << studentName[i] << endl;
    }
    delete[] studentName;
}