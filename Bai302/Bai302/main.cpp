//
//  main.cpp
//  Bai302
//
//  Created by MACBOOK PRO on 10/12/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
using namespace std;

void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"] = \n";
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

void DemSolanXuatHienCuaAtrongB(int a[], int b[], int na, int nb)
{
    int i,j;
    int check=0;
    int dem=0;
    for(i=0;i<nb;i++)
    {
        if(a[0]==b[i] && nb-i>=na)
        {
            int t=i;
            check=1;
            for(j=0;j<na;j++)
            {
                if(a[j]!=b[t++])
                {
                    check=0;
                    break;
                }
         
            }
            if(check==1)
            {
                dem++;
            }
        }
    }
    cout<<"\nMang A Co "<<dem<< " lan xuat hien trong Mang B\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int na,nb;
    
    cout<<"Nhap Na: \n";
    cin>>na;
    
      
     cout<<"Nhap Nb: \n";
     cin>>nb;
    
    int a[100];
    int b[100];
    cout<<"\n------- Mang A ---------\n";
    Nhap(a, na);
    In(a, na);

    
    cout<<"\n------- Mang B ---------\n";
    Nhap(b, nb);
    In(b, nb);
    DemSolanXuatHienCuaAtrongB(a, b, na, nb);
    return 0;
}
