//
//  main.cpp
//  Bai234
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

int DemSoluongchixuathien1trong2mang(int a[], int b[], int na, int nb)
{
    int i,j;
    int dem=0;
    int kt;
    //Dem so PT xuat hien trong Mang a xet Mang B.
    for(i=0;i<na;i++)
    {
       kt=1;
        for(j=0;j<nb;j++)
        {
            if(a[i]==b[j])
            {
                kt=0;
                break;
            }
        }
        if(kt==1)
        {
            dem++;
        }
    }
    //Dem So PT xuat hien trong mang B. CHay tren mang A
    for(i=0;i<nb;i++)
    {
        kt=1;
        for(j=0;j<na;j++)
        {
            if(a[i]==b[j])
            {
                kt=0;
                break;
            }
        }
        if(kt==1)
        {
            dem++;
        }
    }
    return dem;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int na,nb;
       do {
           cout<<"Nhap Na :\n";
           cin>>na;
           cout<<"Nhap Nb: \n";
           cin>>nb;
         
       } while (na<0 && nb<0);
    int a[100];
    int b[100];
    cout<<"\n------- Mang A ---------\n";
    Nhap(a, na);
   
    In(a, na);
    
    cout<<"\n---------- Mang B --------\n";
    Nhap(b, nb);

    In(b, nb);
    
    int dem=DemSoluongchixuathien1trong2mang(a, b, na, nb);
    
    cout<<"\nSo PT chi xuat hien 1 trong 2 mang "<<dem;
    
    return 0;
}
