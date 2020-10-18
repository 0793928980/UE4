//
//  main.cpp
//  Bai269
//
//  Created by MACBOOK PRO on 10/9/20.
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

void HoanVi(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}

void SapXepTangDan(int a[], int n)
{
    int i,j;
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

void ChenPhanTuXvaoArrayTang(int a[], int &n, int x)
{
    int i;
    int k;
    for(i=n-1;i>-1;i--)
    {
        if(x>a[i])
        {
            k=i+1;
            break;
        }else{
            k=0;
        }
    }
    n++;
    for(i=n-1;i>k;i--)
    {
        a[i]=a[i-1];
    }
    a[k]=x;
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;

       cout<<"nhap N: \n";
       cin>>n;

       int a[100];
       Nhap(a, n);
       
    SapXepTangDan(a, n);
    In(a, n);
    int x;
    cout<<"\nThem Phan Tu X vao Mang\n";
    cin>>x;
    
    cout<<"\n-------- Mang Sau Khi chen -------\n";
    ChenPhanTuXvaoArrayTang(a, n, x);
    In(a, n);
    return 0;
}
