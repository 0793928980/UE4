//
//  main.cpp
//  Bai192
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

int KiemChusoChanDau(int n)
{
    int dv;
    while(n>=10)
    {
        dv=n%10;
        n/=10;
        if(n%2==0)
        {
            return 1;
        }
    }
    return 0;
}

void LietKeChusoDautienLaChan(float a[], int n)
{
    int i;
    int kt=0;
    for(i=0;i<n;i++)
    {
        
        if(KiemChusoChanDau(a[i])==1)
        {
            kt++;
            cout<<a[i]<<" ";
        }
    }
    if(kt==0)
    {
        cout<<"Khong co Phan Tu nao Ton tai!!!";
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
    
    cout<<"\nLiet Ke Chu So Dau tien La chan\n";
    LietKeChusoDautienLaChan(a, n);
    
    
    return 0;
}
