//
//  main.cpp
//  Bai260
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
void HoanVi(int &a, int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

void SapXepGiamDan(int a[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

void KTMangBcohoanviMangA(int a[], int b[], int na, int nb)
{
    int i,j;
    if(na!=nb)
    {
        cout<<"\nKhong phai hoan vi\n";
        
    }
    SapXepGiamDan(a, na);
    SapXepGiamDan(b, nb);
    for(i=0;i<na;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"\nKhong phai";
        }
    }
    cout<<"\nPhai\n";
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int na,nb;

    cout<<"nhap Na: \n";
    cin>>na;
    cout<<"\nNhap Nb: \n";
    cin>>nb;
    int a[100];
    int b[100];
    Nhap(a, na);
    In(a, na);
    
    Nhap(b, nb);
    In(b, nb);
    KTMangBcohoanviMangA(a, b, na, nb);
    return 0;
}
