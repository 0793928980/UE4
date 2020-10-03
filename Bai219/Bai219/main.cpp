//
//  main.cpp
//  Bai219
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



void DemsolanxuathienX(int a[], int n, int x)
{
    int i;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            dem++;
        }
    }
    cout<<"\nCo " << dem <<" lan xuat hien "<<x<<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int n,x;
       do {
           cout<<"Nhap N:\n";
           cin>>n;
           cout<<"\nNhap X: \n";
           cin>>x;
       } while (n<0);
       int a[100];
       Nhap(a, n);
       In(a, n);
    
    DemsolanxuathienX(a, n, x);
    return 0;
}
