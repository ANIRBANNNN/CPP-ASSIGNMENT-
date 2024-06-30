#include<iostream>
using namespace std;
int main(){
    int markA,markB,markC;
    cout<<"Enter all marks:";
    cin>>markA;
    cin>>markB;
    cin>>markC;
    if (markA>markB){
        if (markA>markC){
            cout<<"Least marks is:"<<markC;
        }
        else{
            cout<<"Least marks is:"<<markB;
        }
    }
    else{
        if (markB>markC){
            cout<<"Least marks is:"<<markC;

        }
        else{
            cout<<"Least marks is:"<<markB;
        }
    }
}