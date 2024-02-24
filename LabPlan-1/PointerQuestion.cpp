/*This programs contains pointer declaration, pointer initialization, pointer deferencing, pointer airthmetic and pointer to array elements*/
#include <iostream>
using namespace std;
int main(){
    int x = 5;
    // Pointer declaration Task-1
    int *ptr;
    //Pointer Initialization Task-2
    ptr = &x;
    //Pointer Deferencing Task-3
    cout << "The Pointer points to this value in the memory : " << *ptr << endl;
    //Pointer Arithmethic Task-4
    *ptr = x+1;
    cout << "After Pointer airhtmetic pointer points to this value in the memory : " << *ptr << endl;
    //Pointer to array element Task-5
    int arr[5] = {10,3,4,2,1};
    int *arrPtr = arr;
    cout << "The value of the first element of the array thorgh the pointer is : " << *arrPtr << endl;
}