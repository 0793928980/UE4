//
//  main.cpp
//  Bai275
//
//  Created by MACBOOK PRO on 10/10/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
#include <math.h>
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
int KTSoCP(int n)
{
    int t=sqrt(n);
    if(t*t==n)
    {
        return 1;
    }
    return 0;
}

void XoaPt(int a[], int &n, int k)
{
    int i;
    
    for(i=k;i<=n;i++)
    {
        
            a[i]=a[i+1];
        
    }
    n--;
}




void XoaCacSoChinhPhuongtrongMang(int a[], int &n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(KTSoCP(a[i])==1)
        {
            XoaPt(a, n, i);
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
    XoaCacSoChinhPhuongtrongMang(a, n);
    In(a, n);
    
    
    
    
    return 0;
}
