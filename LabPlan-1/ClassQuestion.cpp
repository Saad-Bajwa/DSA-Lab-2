/*This program contains class definition,object creation, member access, method access and multiple object*/
#include<iostream>
using namespace std;
// Class Definition Task-2
class Person{
    private :
        string name;
        int age;
        string gender;
    public: 
        void SetName(string n);
        void SetGender(string g);
        void SetAge(int a);
        string GetName();
        string GetGender();
        int GetAge();
        void DisplayInfo();
};

void Person:: SetName(string n){
    name = n;
}
void Person:: SetGender(string g){
    gender = g;
}
void Person:: SetAge(int a){
    age = a;
}
string Person:: GetName(){
   return name; 
}
string Person:: GetGender(){
   return gender; 
}
int Person:: GetAge(){
   return age; 
}
//Creating a display info method
void Person:: DisplayInfo(){
    cout << "Name of the person is : " << name << endl;
    cout << "Gender of the person is : " << gender << endl;
    cout << "Age of the person is : " << age << endl;
}
int main(){
    // Creating object Task-1
    Person p1;
    // Setting name and printing it Task-3
    p1.SetName("Saad");
    cout << "Name of the person is : " << p1.GetName() << endl;
    //Creating another object and displaying it through the DisplayInfo member. task-5
    Person p2;
    p2.SetName("Ahmad");
    p2.SetGender("Male");
    p2.SetAge(20);
    cout << "Second Person details with DisplayInfo method : " << endl;
    p2.DisplayInfo();
}