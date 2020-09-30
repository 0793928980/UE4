//
//  main.cpp
//  bai182
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

void LietKe182(float a[], int n)
{
    int i;
    int kt=0;
    for (i=0; i<n; i++) {
        if(a[i]*a[i+1]<0 || a[i]*a[i-1]<0)
        {
            kt=1;
            cout<<a[i]<<" ";
        }
    }
    if(kt==0)
    {
        cout<<"Khong Co phan Tu nao!!!";
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
    
    cout<<"\n------- Liet Ke ------------\n";
    LietKe182(a, n);
    return 0;
}
