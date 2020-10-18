//
//  main.cpp
//  Bai281
//
//  Created by MACBOOK PRO on 10/10/20.
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


void DuaChanVeDau(int a[],  int vitri)
{
    int i;
    int t=a[vitri];
    for(i=vitri;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=t;
}



void Dua0vegiua(int a[], int vitridoi,int vitrichancuoi){
    int i;
    
    for(i=vitridoi;i>vitrichancuoi;i--)
    {
        a[i]=a[i-1];
    }
    a[vitrichancuoi]=0;
}



void DuaSolchanvetruoclevesau0giua(int a[], int n)
{
    int i;
    int Vitrichancuoi=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && a[i]!=0)
        {
            DuaChanVeDau(a, i);
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            Vitrichancuoi=i;
            break;
        }
    }
    
    for(;i<n;i++)
    {
        if(a[i]==0)
        {
            Dua0vegiua(a, i, Vitrichancuoi);
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
    
    cout<<"\nMang sau khi Hoan doi\n";
    DuaSolchanvetruoclevesau0giua(a, n);
    In(a, n);
    
    return 0;
}
