//
//  main.cpp
//  Bai202
//
//  Created by MACBOOK PRO on 9/30/20.
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

int TimChusoLeDauTien(int n)
{
    int dv;
    while(n>=10)
    {
        dv=n%10;
        n/=10;
        if(n%2!=0)
        {
            return 1;
        }
    }
    return 0;
}

int Tong202(int a[], int n)
{
    int i;
    int tong=0;
    for(i=0;i<n;i++)
    {
        if(TimChusoLeDauTien(a[i])==1)
        {
            tong+=a[i];
        }
    }
    return tong;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
       do {
           cout<<"Nhap N:\n";
           cin>>n;
       } while (n<0);
       int a[100];
       Nhap(a, n);
       In(a, n);
    
    
    cout<<"\nTong Chu Le Dau Tien la: " << Tong202(a, n) <<"\n";
    return 0;
}
