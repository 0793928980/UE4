//
//  main.cpp
//  Bai222
//
//  Created by MACBOOK PRO on 10/3/20.
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



void Dem222(int a[], int n)
{
    int i;
    int dem=0;
    
    for(i=0;i<n;i++)
    {
        if(i==0 && a[i]!=a[i+1])
        {
            dem++;
        }else if((a[i] > a[i+1] && a[i] > a[i-1])  || (a[i]<a[i+1] && a[i<a[i-1]]))
        {
            dem++;
        }else if(i==n-1 && a[i]!=a[i-1])
        {
            dem++;
        }
    }
    cout<<"\nCo "<<dem<<" so luong cung lon hoac cung nho\n";
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
    Dem222(a, n);
    return 0;
}
