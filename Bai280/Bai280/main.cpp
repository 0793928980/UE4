//
//  main.cpp
//  Bai280
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

void Doicho(int a[], int n, int vitri)
{
    int i;
    
    for(i=vitri;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=1;
}
void Dua1VeDauMang(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            Doicho(a, n, i);
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
    
    cout<<"\nMang sau khi them 1 vao dau \n";
    Dua1VeDauMang(a, n);
    In(a, n);
    return 0;
}
