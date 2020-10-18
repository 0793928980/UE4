//
//  main.cpp
//  Bai287
//
//  Created by MACBOOK PRO on 10/12/20.
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

void DichPhaiXoayvongKphantu(int a[], int n, int k)
{
    int i;
    
    while(k--)
    {
        int t=a[n-1];
        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=t;
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
       
       cout<<"\nMang sau khi dich trai xoay vong\n";
    DichPhaiXoayvongKphantu(a, n, 2);
    In(a, n);
    return 0;
}
