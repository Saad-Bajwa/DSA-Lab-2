/*This program uses pointer arithmetic to find the length of a character array entered
by the user.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    char *ptr = new char[100];
    cout << "Enter the value in the array : ";
    cin.getline(ptr,100);
    int len = 0;
    for(int i=0; ptr[i] != '\0'; i++){
        len++;
    }
    cout << "Length of the array is : " << len ;
    delete[] ptr;
}