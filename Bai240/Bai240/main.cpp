//
//  main.cpp
//  Bai240
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


int KiemTraMangco0khong(int a[], int n)
{
    int i;
    
    int kt;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            return 1;
        }
    }
    return 0;
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
    int kt=KiemTraMangco0khong(a, n);
    
    if(kt==1)
    {
        cout<<"Mang co gia tri bang 0\n";
    }else{
        cout<<"Mang khong co gia tri bang 0\n";
    }
    return 0;
}
