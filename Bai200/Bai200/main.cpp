//
//  main.cpp
//  Bai200
//
//  Created by MACBOOK PRO on 9/30/20.
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

int Tong200(int a[], int n)
{
    int i;
    int tong=0;
    for(i=0;i<n;i++)
    {
        tong+=a[i];
    }
    return tong;
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
    cout<<"\nTong Cac Phan Tu la: "<<Tong200(a, n) <<"\n";
    return 0;
}
