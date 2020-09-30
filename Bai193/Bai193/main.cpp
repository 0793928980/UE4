//
//  main.cpp
//  Bai193
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
        cout<<"Nhap a["<<i<<"]\n";
        cin>>a[i];
    }
}

void In(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<< a[i]<<" ";
    }
}
int KiemTraDang3K(int n)
{
    if(n<1)
    {
        return 1;
    }
    while(n>1){
        if(n%3!=0)
        {
            return 0;
        }
        n/=3;
        
    }
    return 1;
}

void LietKeCacGiatriDang3K(int a[], int n)
{
    int i;
    int kt=0;
    
    for(i=0;i<n;i++)
    {
        if(KiemTraDang3K(a[i])==1)
        {
            kt++;
            cout<<a[i]<<" ";
        }
    }
    if(kt==0)
    {
        cout<<"0\n";
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
    
    int a[100];
    
    Nhap(a, n);
    In(a, n);
    
    cout<<"\nLiet Ke Phan Tu dang 3^K\n";
    LietKeCacGiatriDang3K(a, n);
    
    return 0;
}
