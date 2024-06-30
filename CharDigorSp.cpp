#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character";
    cin>>ch;
    int y;
    y=(int)ch;
    if (((y>=65)&&(y<=90))||((y>=97)&&(y<=122))) cout<<"It's an alphabet";
    else if ((y>=48)&&(y<=57)) cout<<"It's a digit";
    else if((y>=33)&&(y<=47)) cout<<"It's a special character:";
    else cout<<"No condition is matching";
}