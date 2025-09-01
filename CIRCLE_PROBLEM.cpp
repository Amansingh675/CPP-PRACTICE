#include<iostream>
using namespace std;
int main(){
    float radius,area,circumference;
    cout<<"Enter the radius of the circle:";
    cin>>radius;
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    cout<<"Area of circle is"<<area<<endl;
    cout<<"circumference of circle is"<<circumference<<endl;
    return 0;
}