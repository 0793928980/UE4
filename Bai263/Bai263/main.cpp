//
//  main.cpp
//  Bai263
//
//  Created by MACBOOK PRO on 10/8/20.
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
    int t;
    t=a;
    a=b;
    b=t;
}


void SapXepSoDuongTangvaSoAmGiamDan(int a[], int n)
{
    int i,j;
    
    for(i=0;i<n-1;i++)
    {
       
            for(j=i+1;j<n;j++)
            {
                if((a[i]>0 && a[j]>0 && a[i]>a[j]))
                {
                    HoanVi(a[i], a[j]);
                }
                else if (a[i]<0 && a[j]<0 && a[i]<a[j])
                {
                    HoanVi(a[i], a[j]);
                }
            }
    }
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
    
    cout<<"\nSap xep So Duong Tang va So Am Giam\n";
    SapXepSoDuongTangvaSoAmGiamDan(a, n);
    In(a, n);
    return 0;
}
