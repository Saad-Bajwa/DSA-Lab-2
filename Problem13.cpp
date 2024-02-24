/*This program implements a set of overloaded functions that calculate the area of a square, rectangle, and circle
using pointers.*/
#include<iostream>
using namespace std;
double Area(double *rad){
    return 3.14*(*rad)*(*rad);
}
int Area(int *len){
    return (*len)*(*len);
}
double Area(double *len,double *width){
    return (*len)*(*width);
}
int main(){
    int choice,side;
    double len,rad;
    double *ptr1,*ptr2;
    int *ptr3;
    cout << "1.Area of the Circle\n2.Area of the rectangle\n3.Area of the sqare\n";
    cout << "Enter your choice : " ;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter the radius of the circle : ";
        cin >> rad;
        ptr1 = &rad;
        cout << "Area of the circle is : " << Area(ptr1);
        break;
    case 2:
        cout << "Enter the length of the rectangle : ";
        cin >> len;
        ptr1= &len;
        cout << "Enter the width of the rectangle : ";
        cin >> rad;
        ptr2 = &rad;
        cout << "Area of the rectangle is : " << Area(ptr1,ptr2);
        break;
    case 3:
        cout << "Enter the side of the square : ";
        cin >> side;
        ptr3 = &side;
        cout << "Area of the circle is : " << Area(ptr3);
        break;
    default:
        cout << "Invalid Choice!!!";
        break;
    }
}