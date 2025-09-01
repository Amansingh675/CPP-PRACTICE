#include<iostream>
using namespace std;
int main(){
    int length, width,perimeter;
    cout<<"enter the length"<<endl;
    cin>>length;
    cout<<"enter the width"<<endl;
    cin>>width;
    cout<<"Area of Rectangle is "<<length*width<<endl;
    perimeter=2*(length+width);
    cout<<"Perimeter of Rectangle is "<<perimeter<<endl;
    return 0;
}