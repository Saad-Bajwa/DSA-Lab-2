#include<iostream>
using namespace std;
class Person{
    private:
        string name;
        int age;
        string cnic;
    public : 
        Person(string n, int a, string c);
        void PrintInfo();
};
Person :: Person(string n, int a, string c){
    name = n;
    age = a;
    cnic = c;
}
void Person :: PrintInfo(){
    cout << "Name of the person is : " << name << endl;
    cout << "Age of the person is : " << age << endl;
    cout << "Cnic of the person is : " << cnic << endl;
}
int main(){
    Person p1("Saad",21,"2323r23423");
    p1.PrintInfo();
}
