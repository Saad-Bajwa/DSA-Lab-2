/*This program take a pointer of constant value and print it*/
#include <iostream>
using namespace std;
void Print(const int *ptr){
    cout << "The value of the constant is : " << *ptr << endl;
}
int main(){
    const int num = 5;
    const int *ptr = &num;
    Print(ptr);
}