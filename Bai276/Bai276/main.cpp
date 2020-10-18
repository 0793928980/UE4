//
//  main.cpp
//  Bai276
//
//  Created by MACBOOK PRO on 10/10/20.
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

void XoaPt(int a[], int &n, int k)
{
    int i;
    
    for(i=k;i<n;i++)
    {
        
            a[i]=a[i+1];
        
    }
    n--;
}

void XoaPt1(int a[], int &n, int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i>=k)
        {
            a[i]=a[i+1];
      
        }
    }
    n--;
   
}

void XoaCaCPTTrungvsX(int a[], int &n, int x)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            XoaPt1(a, n, i);
            i--;
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
     int x;

             cout<<"nhap N: \n";
             cin>>n;
            cout<<"\nNhap X: \n";
            cin>>x;
             int a[100];
             Nhap(a, n);
             In(a, n);

    
       cout<<"\nMang sau khi xoa\n";
    XoaCaCPTTrungvsX(a, n, x);
    In(a, n);
    return 0;
}
