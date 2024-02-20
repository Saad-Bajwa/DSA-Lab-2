#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
        string name;
        int age;
        string cnic;
    public : 
        void Setter(string n, int a, string c);
        void Getter();
        void PrintInfo();
};

void Person :: Setter(string n, int a, string c){
    name = n;
    if(a>0 || a < 130){
        age = a;
    }
    else{
        cout << "invalid age!!!" << endl;
    }
    if(c.length() < 13){
        cnic = c;
    }
    else{
        cout << "Invalid cnic" << endl;
    }
}
void Person :: PrintInfo(){
    cout << "Name of the person is : " << name << endl;
    cout << "Age of the person is : " << age << endl;
    cout << "Cnic of the person is : " << cnic << endl;
}
void Person :: Getter(){
    cout << "Name of the person is : " << name << endl;
    cout << "Age of the person is : " << age << endl;
    cout << "Cnic of the person is : " << cnic << endl;
}
int main(){
    Person p1();
}