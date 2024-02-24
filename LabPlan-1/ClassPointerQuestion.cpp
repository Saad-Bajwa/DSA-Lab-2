/*This program create class object with pointer, Member Access through Pointer,Member Function Call through Pointer,Pointer to Multiple Objects and Object Assignment through Pointer*/
#include <iostream>
using namespace std;
class Car{
    private : 
        string model;
        int year;
    public : 
        string GetModel();
        int GetYear();
        void SetModel(string m);
        void SetYear(int y);
        Car();
        Car(string m, int y);
        void DisplayInfo();
};
Car:: Car(){
    model = "";
    year = 0;
}
Car:: Car(string m, int y){
    model = m;
    year = y;
}
void Car::SetModel(string m){
    model = m;
}
void Car::SetYear(int y){
    year = y;
}
string Car:: GetModel(){
    return model;
}
int Car:: GetYear(){
    return year;
}
void Car:: DisplayInfo(){
    cout << "Model of the car is : " << model << endl;
    cout << "Year of the car is : " << year << endl;
}
int main(){
    //Creating a pointer that is pointing to that object Task-1
    Car *ptr = new Car();
    //Accessing the model atttribute of the object thorough the pointer Task-2
    ptr->SetModel("Corrola");
    cout << "The model attribute of the class is : " << ptr->GetModel() << endl;
    ptr->SetYear(2019);
    //Displaying the details of the object thorough the pointer Task-3
    ptr->DisplayInfo();
    //Declaring an array of the car type and displaying first object thorough the pointer Task-4
    Car carArray[3] = {{"Hyundai",2023},{"Civic",2022},{"Corrola",2019}};
    Car *arrPtr = carArray;
    cout << "Displaying the first object of the Car array thorough the pointer : " << endl;
    arrPtr->DisplayInfo();
    //Declaring another object thorough the pervious pointer ptr and displaying it Task-5
    cout << "Declaring another object thorough the pervious pointer ptr and displaying it : " << endl;
    ptr = new Car();
    ptr->SetModel("Civic");
    ptr->SetYear(2022);
    ptr->DisplayInfo();
    delete[] ptr;
}