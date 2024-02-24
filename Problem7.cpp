/*This program take the array address in function and return an array of even number in the main*/
#include <iostream>
using namespace std;

int* EvenInArray(int* arr, int& size) {
    int numberOfEvens = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            numberOfEvens++;
        }
    }

    int* evenArray = new int[numberOfEvens];

    int j = 0; 
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenArray[j++] = arr[i];
        }
    }

    size = numberOfEvens; 
    return evenArray;
}
int main(){
    int size = 10;
    int array[size];
    cout << "Enter the value of the array : " << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    int *evenArray = EvenInArray(array,size);
    cout << "Even numbers in the array are : " << endl;
    for(int i=0; i<size; i++){
        cout << *(evenArray+i) << " ";
    }
}