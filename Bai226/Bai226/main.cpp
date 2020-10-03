//
//  main.cpp
//  Bai226
//
//  Created by MACBOOK PRO on 10/3/20.
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

void DemsoluongPTkeNhau(int a[], int n)
{
    int i;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && a[i+1]%2==0)
        {
            dem++;
        }
    }
   if(dem!=0)
   {
       dem++;
   }
    cout<<"\nCo "<<dem<<" so luong chan ke nhau\n";
}
int DemSoLuongPhanTuKeNhauMaCa2DeuChan(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i + 1] % 2 == 0)
        {
            dem++;
        }
    }
    if(dem!=0)
    {
        dem++;
    }
    return dem;
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
    DemsoluongPTkeNhau(a, n);
    return 0;
}
