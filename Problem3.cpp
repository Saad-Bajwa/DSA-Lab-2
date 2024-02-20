#include<iostream>
using namespace std;
void SortArray(int array[],int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size -1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int main(){
    int size =10;
    int array[size];
    cout << "Enter input in the array : " << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    SortArray(array,size);
    cout << "\nSorted array " << endl;
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
}