#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float r,Area,Circumference;
    cout<<"Enter radius of circle:\n";
    cin>>r;
    Circumference=2*M_PI*r;
    cout<<Circumference<<endl;
    Area=M_PI*r*r;
    cout<<Area<<endl;
    if (Circumference>Area){
        cout<<"Circumference of circle is larger";

    }
    else{
        cout<<"Area of circle is larger";
    }
    return 0;
}

