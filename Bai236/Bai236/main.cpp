//
//  main.cpp
//  Bai236
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

int DemSolanxuathiencuaatrongb(int a[], int b[], int na, int nb)
{
    int i,j;
    int kt;
    int t;
    int dem=0;
    for(i=0;i<nb;i++)
    {
       if(a[0]==b[i] && nb-i>=na)
       {
           t=i;
           kt=1;
           for(j=0;j<na;j++)
           {
               if(a[j]!=b[t++])
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
    }
    return dem;
    
}

int Dem236(int a[], int b[], int na, int nb)
{
    int i,j,dem=0,kt,t;
    
    for(i=0;i<nb;i++)
    {
        if(a[0]==b[i])
        {
                t=i;
                kt=1;
                for(j=0;j<na;j++)
                {
                    if(a[j]!=b[t++])
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
        
    }
    return dem;
}


//
//int Dem(int a[], int b[], int na, int nb)
//{
//    int i;
//
//    for(i=0;i<nb;i++)
//    {
//
//    }
//
//}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int na,nb;
       
       do {
           cout<<"Nhap Na: \n";
           cin>>na;
           cout<<"Nhap nb: \n";
           cin>>nb;
       } while (na<0 && nb<0);
       int a[100];
       int b[100];
       cout<<"\n---------- Mang A ---------\n";
       Nhap(a, na);
       In(a, na);
       
       cout<<"\n------------- Mang B -----------\n";
       Nhap(b, nb);
       In(b, nb);
       cout<<"\n";
    int dem=DemSolanxuathiencuaatrongb(a, b, na, nb);
    
    cout<<"Mang A Co " <<dem<<" lan xuat hien trong mang B\n";
    return 0;
}
