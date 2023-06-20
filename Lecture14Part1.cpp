#include<bits/stdc++.h>
using namespace std;


void swap(int *x,int *y){
    int c;
    
    c=*x;
    *x=*y;
    *y=c;

    cout<<"Swapped successfully"<<endl;
}


int main(){
    
    int a =10;
    int b=20;

    cout<<"Entities before swapping are : "<<a<<" "<<b<<endl;

    swap(&a,&b);

    cout<<"Entities after swapping are : "<<a<<" "<<b;

    return 0;
}