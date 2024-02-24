/*This program accepts an array of integers and its size as parameters. The function
find and print the minimum value using pointers.*/
#include <iostream>
using namespace std;
void PrintMin(int *array, int size){
    int min = array[0];
    for(int i=1; i<size; i++){
        if(*(array + i) < min){
            min = *(array + i);
        }
    }
    cout << "Minimum element in the array is : " << min << endl;
}
int main (){
    int size = 10;
    int array[size];
    cout << "Enter the values in the array " << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    PrintMin(array,size);
}