//
//  main.cpp
//  Bai235
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



void LietKegiatrixuathienmottronghaimang(int a[], int b[], int na, int nb)
{
    int i,j;
    int kt;
    for(i=0;i<na;i++)
    {
        kt=1;
        for(j=0;j<nb;j++)
        {
            if(a[i]==b[j])
            {
                kt=0;
                cout<<"\nTrong mang A co phan tu a["<<i<<"] = " <<a[i]<<" nam trong mang B\n";
            }
        }
        if(kt==1)
        {
            cout<<a[i]<<" ";
        }
    }
    
    
    
    for(i=0;i<nb;i++)
    {
        kt=1;
        for(j=0;j<na;j++)
        {
            if(b[i]==a[j])
            {
                kt=0;
                cout<<"Trong Mang B co phan tu b["<<i<<"] = "<<b[i]<<" nam trong mang A\n";
            }
        }
        if(kt==1)
        {
            cout<<a[j]<<" "<<b[i] <<" ";
        }
    }
}
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
    
    LietKegiatrixuathienmottronghaimang(a, b, na, nb);
    
    return 0;
}
