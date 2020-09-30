//
//  main.cpp
//  bai191
//
//  Created by MACBOOK PRO on 9/30/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
using namespace std;


void Nhap(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]"<<"\n";
        cin>>a[i];
        
    }
}



void In(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void LietKeCucDai(float a[], int n)
{
    int i;
    int kt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1] && a[i]>a[i-1])
        {
            kt=1;
            cout<<a[i]<<" ";
        }
    }
    if(kt==0)
    {
        cout<<"Khong Co Phan Tu Cuc Dai";
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
       do {
           cout<<"Nhap N: \n";
           cin>>n;
       } while (n<0);
       
       float a[100];
       
       Nhap(a, n);
       In(a, n);
    
    cout<<"\nLiet Ke Phan tu CUC DAI \n";
    LietKeCucDai(a, n);
       
    return 0;
}
