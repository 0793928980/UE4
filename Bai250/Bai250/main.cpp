//
//  main.cpp
//  Bai250
//
//  Created by MACBOOK PRO on 10/5/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
using namespace std;

void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]"<<"\n";
        cin>>a[i];
        
    }
}



void In(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void KiemTraCapsoCong(int a[], int n)
{
    int i;
    int kt=1;
    int d=(a[1]-a[0]);
    for(i=2;i<n-1; i++)
    {
        if(a[i+1]-a[i]==d)
        {
            kt=1;
            d=a[i+1]-a[i];
        }else
        {
            kt=0;
            break;
        }
    }
    if(kt==1)
    {
        cout<<"\nMang thanh lap nen cap so cong\n";
        cout<<"Voi cong sai bang: "<<d<<"\n";
    }
    else{
        
        cout<<"\nMang Khong thanh lap nen cap so cong\n";
    }
}
    
    
    


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    
    cout<<"nhap N: \n";
    cin>>n;
    
    int a[100];
    Nhap(a, n);
    In(a, n);
   
    KiemTraCapsoCong(a, n);
    return 0;
}
