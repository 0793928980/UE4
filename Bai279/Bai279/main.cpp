//
//  main.cpp
//  Bai279
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
    for(i=0;i<n;i++)
    {
        if(i>=k)
        {
            a[i]=a[i+1];
        }
    }
    n--;
}

void XoaCacPtXuatHienQua1Lan(int a[], int &n)
{
    int i,j;
    int kt;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                XoaPt(a, n, j);
                j--;
            }
        }
    
    }
}
void Xoa(int a[], int &n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int kt=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                XoaPt(a, n, j);
                j--;
                kt=1;
            }
        }
        if(kt==1)
        {
            XoaPt(a, n, i);
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
    
   
    cout<<"\nMang sau khi xoa\n";
    
    XoaCacPtXuatHienQua1Lan(a, n);
    In(a, n);
    
   
    
    return 0;
}
