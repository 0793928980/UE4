//
//  main.cpp
//  Bai253
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


void KiemTraPTcuaMangAtrongMangB(int a[], int b[], int na, int nb)
{
    int i,j;
    int dem=0;
    
    for(i=0;i<na;i++)
    {
        for(j=nb-1;j>0;j--)
        {
            if(a[i]==b[j])
            {
                dem++;
            }
            
        }
    }
    if(dem==na)
    {
        cout<<"\nMang B co cac PT cua Mang A.\n";
    }else{
        cout<<"\nKhong co PT nao\n";
    }
 
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int na,nb;
    
    do {
          cout<<"nhap Na: \n";
          cin>>na;
        
        cout<<"Nhap Nb: \n";
        cin>>nb;
    } while (na<0 && nb<0);
    
    int a[100];
    int b[100];
    cout<<"\n------ Mang A -------\n";
    Nhap(a, na);
    In(a, na);
    
    
    cout<<"\n------- Mang B --------\n";
    Nhap(b, nb);
    In(b, nb);
    KiemTraPTcuaMangAtrongMangB(a, b, na, nb);
    return 0;
}
