//
//  main.cpp
//  Bai232
//
//  Created by MACBOOK PRO on 10/4/20.
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

void LietKeCacGiaXuatHienqua1lan(int a[], int n)
{
    int i,j;
    int dem=0;
    for(i=0;i<n;i++)//Giu vi tri thu i.
    {
        dem=0;
        for(j=0;j<n;j++)//chay tren i.
        {
            if(a[i]==a[j])
            {
                if(i<=j)
                {
                    dem++;
                }else{
                    break;
                }
            }
        }
        if(dem>1)
        {
            cout<<"\nGia tri xuat hien qua 1 lan: "<<a[i]<<"\n";
        }
    }
    if(dem==1)
    {
        cout<<"\nKhong co phan tu nao xuat hien qua 1 lan\n";
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
    LietKeCacGiaXuatHienqua1lan(a, n);
    return 0;
}
