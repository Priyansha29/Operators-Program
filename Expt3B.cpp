
//PRIYANSHA GOUR 
//24070123079
//ENTC-A
// EXPERIMENT - 3B
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a ,b, c, d, e, t;
    float avg;
    cout<<"Enter marks for Maths: ";
    cin>>a;
    cout<<"Enter marks for Phy: ";
    cin>>b;
    cout<<"Enter marks for Chem: ";
    cin>>c;
    cout<<"Enter marks for Eng: ";
    cin>>d;
    cout<<"Enter marks for Hindi: ";
    cin>>e;
    t = (a+b+c+d+e)/5;
    
     if (t>90){
        cout<<" Grade A, outstanding"<<endl;}
     else if (t>80){
        cout<<"Grade B , good"<<endl;}
     else if (t>70){
        cout<<"Grade c, can do better"<<endl;}
     else if (t>60){
         cout<<"Grade D , needs improvement"<<endl;}
     else {
         cout<<"Grade F , failed"<<endl;
         
    return 0;
         
     }
}
