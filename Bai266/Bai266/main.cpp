//
//  main.cpp
//  Bai266
//
//  Created by MACBOOK PRO on 10/8/20.
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

void ThemPTXvaoVitriK(int a[], int &n, int x, int k)
{
    int i;
    for(i=n;i>k;i--)
    {
        
        a[i]=a[i-1];
    }
    a[k]=x;
    n++;
}
void ThemptX(int a[], int &n, int x, int k)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(i>=k)
        {
            a[i+1]=a[i];
        }
        
        
        
    }
    a[k]=x;
    n++;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n,x;
    cout<<"Nhap N: \n";
    cin>>n;
    int a[100];
      Nhap(a, n);
      In(a, n);
    
    
    cout<<"\nNhap Phan Tu can them\n";
    cin>>x;
    
    int Vitri;
    cout<<"Nhap Vitri Can them\n";
    cin>>Vitri;
    
    
    
    
    ThemPTXvaoVitriK(a, n, x, Vitri);
      
      cout<<"\nMang Sau khi Them\n";
      In(a, n);
    return 0;
}
