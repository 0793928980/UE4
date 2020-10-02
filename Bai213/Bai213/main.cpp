//
//  main.cpp
//  Bai213
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
void TrungBinhCong213(float a[], int n, int x)
{
    int i;
    float tong=0;
    int dem=0;
    float tb;
    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            dem++;
            tong+=a[i];
        }
    }
    tb=tong/dem;
    
    cout<<"\nTrung Binh cac gia tri Lon hon X la: "<<tb;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n,x;
          do {
              cout<<"Nhap N:\n";
              cin>>n;
              cout<<"\nNhap X: \n";
              cin>>x;
          } while (n<0 && x<0);
          float a[100];
          
          Nhap(a, n);
          In(a, n);
    TrungBinhCong213(a, n, x);
    return 0;
}
