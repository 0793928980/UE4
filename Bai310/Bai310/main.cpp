//
//  main.cpp
//  Bai310
//
//  Created by MACBOOK PRO on 10/13/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
using namespace std;



void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"] = \n";
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
int KTNT(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void TaoMangBChuaSNTcuaA(int a[], int n)
{
    int i;
    int b[100],  nb;
    
    for(i=0;i<n;i++)
    {
        nb=0;
        if(KTNT(a[i])==1)
        {
            b[nb++]=a[i];
        }
        In(b, nb);
    }
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    
    cout<<"Nhap N: \n";
    cin>>n;
    
    int a[100];

    Nhap(a, n);
    In(a, n);
    
    cout<<"\n--------- Mang B ---------\n";
    TaoMangBChuaSNTcuaA(a, n);
    return 0;
}
