/*This program reverse the string thorugh a function*/
#include <iostream>
#include <cstring>
using namespace std;
void revString(char *str, char *rvsStr){
    int len = strlen(str);
    for(int i=0;i<len;i++){
        rvsStr[len - i -1] = str[i];
    }
}
int main(){
    char str[11] = "Saad Bajwa";
    char *reversedStr;
    revString(str,reversedStr);
    cout << "Reversed string is : ";
    for(int i=0; i<11; i++){
        cout << reversedStr[i];
    }
    cout << endl;
}