//
//  main.cpp
//  Bai277
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


void XoaPT(int a[], int  &n, int k)
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
int KTNguyenTo(int n)
{
    if(n<2)
    {
        return 0;
    }
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void XoaCacSoNT(int a[], int &n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(KTNguyenTo(a[i])==1)
        {
            XoaPT(a, n, i);
            i--;
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
    XoaCacSoNT(a, n);
    In(a, n);
    return 0;
}
