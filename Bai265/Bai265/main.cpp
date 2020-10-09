//
//  main.cpp
//  Bai265
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

void SapXepTangDan(int a[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                HoanVi(a[i], a[j]);
            }
       
        }
    }
            
}


void Tron2MangThanhMangGiamDan(int a[], int b[], int c[], int na, int nb, int &nc)
{
    int i;
    nc=na+nb;
    SapXepTangDan(a, na);
    SapXepTangDan(b, nb);
    int vitriA=na-1,vitriB=nb-1;
    for(i=0;i<nc;i++)
    {
       
        if(vitriA>=0 && vitriB>=0)
        {
            if(a[vitriA]<b[vitriB])
            {
                c[i]=b[vitriB--];
            }else{
                c[i]=a[vitriA--];
            }
        }else if(vitriB<0)
        {
            c[i]=a[vitriA--];
        }else{
            c[i]=b[vitriB--];
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int na,nb,nc;

    cout<<"nhap Na: \n";
    cin>>na;

    cout<<"nhap Nb: \n";
    cin>>nb;
    int a[100];
    int b[100];
    int c[100];
    
    cout<<"\n---------  Mang A -----------\n";
    Nhap(a, na);
    In(a, na);
    
    cout<<"\n---------- Mang B -------------\n";
    Nhap(b, nb);
    In(b, nb);
    
    Tron2MangThanhMangGiamDan(a, b, c, na, nb, nc);
    
    cout<<"\n------ Sau Khi tron hai mang -----\n";
    In(c, nc);
    return 0;
}
