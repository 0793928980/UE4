//
//  main.cpp
//  Bai285
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
void Hoandoi(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}
void DaoNguocMang(int a[], int n)
{
    int j=n-1;
    int i;
    for(i=0;i<n/2;i++)
    {
        Hoandoi(a[i], a[j]);
        j--;
    }
}
void DaonguocThutuduong(int a[], int n)
{
    int i;
    int b[100];
    int size=0;
    int check[100]={0};
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[size]=a[i];
            size++;
            check[i]=1;
        }
    }
    DaoNguocMang(b, size);
    size=0;
    for(i=0;i<n;i++)
    {
        if(check[i]==1)
        {
            a[i]=b[size];
            size++;
        }
      
    }
    
}

void DaoNguocThutusoduongTrongMang(int a[], int n)
{
    int i,j;
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]%2>0 && a[j]>0)
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
    
    cout<<"\nMang sau khi dao nguoc thu tu duong\n";
    
    DaonguocThutuduong(a, n);
    In(a, n);
    return 0;
}
