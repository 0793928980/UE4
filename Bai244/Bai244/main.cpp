//
//  main.cpp
//  Bai244
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

int KTSoHT(int n)
{
    int i=1;
    int tong=0;
    while(i<=n)
    {
        if(n%i==0)
        {
            tong+=i;
        }
        i++;
    }
    if(tong==n)
    {
        return 1;
    }
    return 0;
}

void KiemTraMangKhongcoSHTLonhon256(int a[], int n)
{
    int i;
    int kt=0;
    for(i=0;i<n;i++)
    {
        
        if(KTSoHT(a[i])==1 && a[i]<256)
        {
            kt=1;
            break;
        }
    }
    if(kt==1)
    {
        cout<<"mang khong co so hoan thien lon hon 256";
    }else{
        cout<<"mang co so hoan thien lon hon 256";
    }
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
    KiemTraMangKhongcoSHTLonhon256(a, n);
    return 0;
}
