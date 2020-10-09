//
//  main.cpp
//  Bai268
//
//  Created by MACBOOK PRO on 10/9/20.
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

void TaoMangB(int a[], int n, int b[])
{
    int i;
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[i]=1;
        }else{
            b[i]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;

    cout<<"nhap N: \n";
    cin>>n;

    int a[100];
    int b[100];
    Nhap(a, n);
    In(a, n);
    
    cout<<"\n-------- Mang B ----------\n";
    TaoMangB(a, n, b);
    return 0;
}
