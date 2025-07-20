//PRIYANSHA GOUR 
//24070123079
//ENTC-A
// EXPERIMENT - 3C
#include <iostream>
using namespace std;

int main() {
    int x , y;
    cout<<"Enter value for x :  ";
    cin>>x;
    cout<<"Enter value for y : ";
    cin>>y;
    

    
     if (x>0){
         if(y>0){
             cout<<" 1st Quadrant"<<endl;}}
             
     if (x>0){
         if(y<0){
             cout<<" 4th Quadrant"<<endl;}}
             
    if (x<0){
         if(y>0){
             cout<<" 2nd Quadrant"<<endl;}}
             
    if (x<0){
         if(y<0){
             cout<<" 3rd Quadrant"<<endl;}}
    
    if (y>0){
         if(x==0){
             cout<<" Y axis"<<endl;}}
             
    if (x<0){
         if(y==0){
             cout<<" X axis "<<endl;}}
             
    if (x==0){
         if(y==0){
             cout<<"ORIGIN"<<endl;}}
             
    return 0;
         
     
}
