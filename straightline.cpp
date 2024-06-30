#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter three co-ordinates:";
    cin>>x1;
    cin>>x2;
    cin>>x3;
    cin>>y1;
    cin>>y2;
    cin>>y3;
    if((x1==x2==x3)&&(y1==y2==y3)){
        cout<<"All points lie on straight line";
    }
    else if (((x1==x2==x3)&&(y1!=y2!=y3))||((x1!=x2!=x3)&&(y1==y2==y3))){
        cout<<"All points lie on straight line";
    }
    else cout<<"Not a straight line";

}