//
//  main.cpp
//  bai187
//
//  Created by MACBOOK PRO on 9/30/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
using namespace std;


void Nhap(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]"<<"\n";
        cin>>a[i];
        
    }
}

void In(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void TimVitriMinDuong(float a[], int n)
{
    int i;
    float min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(min==a[i] && a[i]>0)
        {
            cout<< i<<" ";
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int n;
       do {
           cout<<"Nhap N: \n";
           cin>>n;
          } while (n<0);
          
          float a[100];
          Nhap(a, n);
          In(a, n);
    
    cout<<"\nLiet Ke Vitri Duong Nho Nhat\n";
    TimVitriMinDuong(a, n);
    return 0;
}
