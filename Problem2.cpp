#include <iostream>
#include <list>
using namespace std;
class Student{
    private:
        int rollNo;
        string stdName;
        int marks;
    public: 
        Student(int rN,string sN,int mark);
        void Display();
        void CalulateGrade();

};
Student :: Student(int rN, string sN,int mark){
    rollNo = rN;
    stdName = sN;
    marks = mark;
}
void Student :: Display(){
    cout << "Student Roll No is : " << rollNo << endl;
    cout << "Student Name is : " << stdName << endl;
    cout << "Student Marks are : " << marks << endl;
}
void Student :: CalulateGrade(){
    if(marks < 60){
        cout << stdName <<  " is failed in the exam" << endl;
    }
}
int main(){
    int noOfstd = 3;
    list<Student> stdList;
    for(int i=0;i<noOfstd; i++){
        int rollno;
        string name;
        int mark;
        cout << "Enter the roll number of the student : ";
        cin >> rollno;
        cout << "Enter the name of the student : ";
        cin >> name;
        cout << "Enter the mark of the student : ";
        cin >> mark;
        stdList.push_back(Student(rollno,name,mark));
        
    }
    for(Student std : stdList){
       std.CalulateGrade();
    }
}