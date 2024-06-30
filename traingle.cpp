 #include<iostream>
 using namespace std;
 int main(){
    int angle1,angle2,angle3;
    cout<<"Enter 3 angles";
    cin>>angle1;
    cin>>angle2;
    cin>>angle3;
    if (angle1+angle2+angle3==180){
        if(angle1==angle2 && angle2==angle3){
            cout<<"Equilateral triangle";
        }
        if (((angle1==angle2) && (angle2!=angle3))||((angle1==angle3)&&(angle3!=angle2))){
            cout<<"Isoceles triangle";
        }
        if ((angle1!=angle2)&&(angle2!=angle3)){
            cout<<"Scalene triangle";
        }


    }
    else cout<<"Not a triangle";
 }