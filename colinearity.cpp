#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x-coordinates and y-coordinates:";
    cin>>x;
    cin>>y;
    if ((x==0)&&(y==0)) cout<<"Points are at origin:"<<endl;
    else if((x!=0)&&(y==0)) cout<<"Points lie on x axis"<<endl;
    else if((x==0)&&(y!=0)) cout<<"Points lie on y axis";
    else cout<<"No conditions are matching";
}