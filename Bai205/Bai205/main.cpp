//
//  main.cpp
//  Bai205
//
//  Created by MACBOOK PRO on 10/2/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
#include <math.h>
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

void Tong205(float a[], int n)
{
    int i;
    int tong=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>abs(a[i+1]))
        {
            tong+=a[i];
        }
    }
    
    cout<<"\nTong la: "<<tong;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    do {
        cout<<"Nhap N:\n";
        cin>>n;
    } while (n<0);
    float a[100];
    Nhap(a, n);
    In(a, n);
    
    Tong205(a, n);
    return 0;
}
