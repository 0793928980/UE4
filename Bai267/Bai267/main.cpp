//
//  main.cpp
//  Bai267
//
//  Created by MACBOOK PRO on 10/9/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
using namespace std;

void NhapMang(int a[], int &n)
{
    int i,j;
    int t;
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]\n";
        cin>>a[i];
        
        for(j=0;j<i;j++)
        {
           if(a[i]>a[j])
           {
               t=a[i];
               int k;
               for(k=i;k>j;k--)
               {
                   a[k]=a[k-1];
               }
               a[j]=t;
               break;
               
           }
        }
    }
}
void nhap (int a[], int &n)
{
    
    
    int i, j, k;
    for(i = 0; i < n; i++)
    {
        cout<<"Nhap a["<<i<<"]\n";
        cin>>a[i];
        for(j = 0; j <i; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                for(k = i; k > j; k--)
                {
                    a[k] = a[k - 1];
                }
                a[j] = temp;
                break;
            }
        }
    }
}

void Xuat(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    cout<<"nhap N: \n";
    cin>>n;

    int a[100];
    NhapMang(a, n);
    cout<<"\n------------ Xuat mang ----------\n";
    Xuat(a, n);
    
    return 0;
}
