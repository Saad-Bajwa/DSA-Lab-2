/*This program add two integers that are entered by user thorugh pointers and return their sum*/
#include<iostream>
using namespace std;
int Add(int *n1, int *n2){
    
    return *n1 + *n2;
}
int main(){
    int n1,n2;
    int *ptr1,*ptr2;
    cout << "Enter the first integer : " ;
    cin >> n1;
    ptr1 = &n1;
    cout << "Enter the second integer : " ;
    cin >> n2;
    ptr2 = &n2;
    int sum = Add(ptr1,ptr2);
    cout << "Sum of the integers are : " << sum << endl;
}