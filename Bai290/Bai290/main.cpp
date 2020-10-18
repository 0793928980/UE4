//
//  main.cpp
//  Bai290
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
void Hoandoi(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}

void DaoNguocThutuChanle(int a[], int n)
{
    int i,j;
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]%2==0 && a[j]%2!=0)
            {
                Hoandoi(a[i], a[j]);
            }
            else if(a[i]%2!=0 && a[j]%2==0)
            {
                Hoandoi(a[i], a[j]);
            }
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
    
    cout<<"\nmang sau khi dao nguoc thu tu\n";
    DaoNguocThutuChanle(a, n);
    In(a, n);
    return 0;
}
