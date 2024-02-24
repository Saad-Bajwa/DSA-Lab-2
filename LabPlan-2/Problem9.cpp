/*This program swap two integers that are entered by user thorugh pointers*/
#include<iostream>
using namespace std;
void Swap(int *val1, int *val2){
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
int main(){
    int n1,n2;
    cout << "Enter first number : ";
    cin >> n1;
    int *ptr1 = &n1;
    cout << "Enter second number : ";
    cin >> n2;
    int *ptr2 = &n2;
    Swap(ptr1,ptr2);
    cout << "After swapping the values : " << endl;
    cout << "First number is : " << n1 << endl;
    cout << "Second number is : " << n2;
}