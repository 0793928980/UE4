//
//  main.cpp
//  Bai309
//
//  Created by MACBOOK PRO on 10/13/20.
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

void TaoMangB309(int a[], int n)
{
    int i;
    int b[100],nb=0;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            b[nb]=a[i+1];
        }
        else if(i==n-1)
        {
            b[nb]=a[i-1];
        }else{
            b[nb] = a[i-1]+a[i+1];
        }
        nb++;

    }
            In(b, nb);
}
void TaoMangB(int a[], int n)
{
    int i;
    int b[100],nb=0;
    for(i=0;i<n;i++)
    {
     
        if(i==0)
        {
            b[nb]=a[i+1];
        }else if(i==n-1)
        {
            b[nb]=a[i-1];
        }else{
            b[nb]=a[i-1] + a[i+1];
        }
        nb++;
    }
    In(b, nb);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    
    cout<<"Nhap N: \n";
    cin>>n;
    
    int a[100];

    Nhap(a, n);
    In(a, n);
    
    cout<<"\n--------- Mang B ---------\n";
    TaoMangB(a, n);
    return 0;
}
