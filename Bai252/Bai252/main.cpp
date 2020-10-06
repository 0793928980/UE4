//
//  main.cpp
//  Bai252
//
//  Created by MACBOOK PRO on 10/5/20.
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

void KiemtraDangsong(int a[], int n)
{
    int i;
    int kt=1;
    for(i=1;i<n-1;i++)
    {
        if((a[i] < a[i-1] && a[i] > a[i+1]) || (a[i]>a[i-1] && a[i]<a[i+1]))
        {
            kt=0;
            break;
        }
    }
    if(kt==1)
    {
        cout<<"\nMang nay co Dang song\n";
    }else{
        cout<<"\nMang nay khong co Dang song\n";
    }
}

int KiemTraDangSong(int a[], int n)
{
    int flag = 1;
    for(int i = 1; i < n - 1; i++)
    {
        if((a[i] < a[i - 1] && a[i] > a[i + 1]) || (a[i] > a[i - 1] && a[i] < a[i + 1]))
        {
            flag = 0;
            break;
        }
    }
    return flag;
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
    KiemtraDangsong(a, n);
    return 0;
}
