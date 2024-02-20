#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance();
        void SetterFeet(int f);
        int GetterFeet();
        void SetterInch(float inch);
        float GetterInch();
        void Display();
        Distance AddDistance(Distance d1,Distance d2);
};
void Distance :: SetterFeet(int f){
    feet = f;
}
Distance :: Distance(){
    feet = 0;
    inches = 0.0;
}
int Distance :: GetterFeet(){
    return feet;
}
float Distance :: GetterInch(){
    return inches;
}
void Distance :: Display(){
    cout << "Distance in the inches is : " << inches << endl;
    cout << "Distance in the feets is : " << feet << endl;
}

void Distance :: SetterInch(float inch){
    inches = inch;
}
Distance Distance :: AddDistance(Distance d1, Distance d2){
    Distance d3;
    int feet = d1.GetterFeet() + d2.GetterFeet();
    d3.SetterFeet(feet);
    float inch = d1.GetterInch() + d2.GetterInch();
    d3.SetterInch(inch);
    return d3;
}
int main(){
    Distance d1;
    d1.SetterFeet(10);
    d1.SetterInch(30.5);
    Distance d2;
    d2.SetterFeet(20);
    d2.SetterInch(61);
    Distance d3;
    d3 = d3.AddDistance(d1,d2);
    cout << "Details of first distance is " << endl;
    d1.Display();
    cout << "Details of second distance is " << endl;
    d2.Display();
    cout << "\n\n<-------------After Adding both distances----------------->\n";
    d3.Display();
}