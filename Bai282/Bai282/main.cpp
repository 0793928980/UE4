//
//  main.cpp
//  Bai282
//
//  Created by MACBOOK PRO on 10/11/20.
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

void Duasochiahetcho3vedaumang(int a[], int vitridoi)
{
    int i;
    int t=a[vitridoi];
    for(i=vitridoi;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=t;
}

void DuaVedauMang(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i]%3==0)
        {
            Duasochiahetcho3vedaumang(a, i);
        }
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
    
    cout<<"\nMang sau khi Dua\n";
    DuaVedauMang(a, n);
    In(a, n);
    return 0;
}
