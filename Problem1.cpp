/*This program calculate the area of the shapes according to user choice*/

#include<iostream>
using namespace std;
void GetChoice(int choice, int &length, int & radius){
    if(choice == 1){
        cout << "Enter the length of the square : ";
        cin >>  length;
    }
    else if(choice == 2){
        cout << "Enter the radius for the circle : ";
        cin >> radius;
    }
    else if(choice == 3){
        cout << "Enter the length of the rectangle : ";
        cin >> length;
        cout << "Enter the width of the rectanlge : ";
        cin >> radius;
    }
    else{
        cout << "Invalid Choice !!!";
    }
}
int CalculateArea(int choice,int rad, int len){
    int area;
    if(choice == 1){
        return area = len*len;
    }
    else if(choice == 2){
        return area = 3*rad*rad;
    }
    else if(choice == 3){
        return area = len*rad;
    }
}

int main(){
    int choice,rad, len;
    cout << "<----------Calculation of the area of the by choice----------> ";
    cout << "Select a shape for calculating its area" << endl;
    cout << "1.Square ";
    cout << "2.Circle ";
    cout << "3.Rectangle ";
    cout << "Enter your choice : ";
    cin >> choice;
    GetChoice(choice,len,rad);
    int area = CalculateArea(choice,rad,len);
    cout << "Area of the shape is : " << area << endl;
}