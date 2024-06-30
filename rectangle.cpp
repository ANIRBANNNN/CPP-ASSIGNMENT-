#include<iostream>
using namespace std;
int main(){
    int length,breadth,area,perimeter;
    cout<<"Enter length and breadth of rectangle";
    cin>>length;
    cin>>breadth;
    area=length*breadth;
    perimeter=2*(length+breadth);
    if (area>perimeter){
        cout<<"Area is larger"<<endl;
    }
    else{
        cout<<"Perimeter is larger";
    }

    

}