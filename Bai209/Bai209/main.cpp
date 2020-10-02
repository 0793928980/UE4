//
//  main.cpp
//  Bai209
//
//  Created by MACBOOK PRO on 10/2/20.
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


int KTSodoiXung(int n)
{
    int snd=0;
    int t=n;
    int dv;
    while(t!=0)
    {
        dv=t%10;
        snd=snd*10+dv;
        t/=10;
        
    }
    if(snd==n)
    {
        return 1;
    }
    return 0;
}

void TongGiatriDoixung(float a[], int n)
{
    int i;
    float tong=0;
    for(i=0;i<n;i++)
    {
        if(KTSodoiXung(a[i])==1)
        {
            tong+=a[i];
        }
    }
    cout<<"Tong gia tri DOi xung la: "<<tong;
  
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    do {
        cout<<"Nhap N:\n";
        cin>>n;
    } while (n<0);
    float a[100];
    Nhap(a, n);
    In(a, n);
    TongGiatriDoixung(a, n);

    return 0;
}
