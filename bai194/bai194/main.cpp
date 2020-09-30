//
//  main.cpp
//  bai194
//
//  Created by MACBOOK PRO on 9/30/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

void Nhap(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]\n";
        cin>>a[i];
    }
}

void In(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<< a[i]<<" ";
    }
}


void LietKeCapGiatriGanNhat(int a[], int n)
{
    int i,j;
    int KC=(abs)(a[0]-a[1]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(KC>(abs)(a[i]-a[j]))
            {
                KC=(abs)(a[i]-a[j]);
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(KC==(abs)(a[i]-a[j]))
            {
                cout<<"( "<<a[i]<<", " <<a[j] <<" )";
            }
        }
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int n;
    do {
        cout<<"Nhap N: \n";
        cin>>n;
    } while (n<0);
    
    int a[100];
    
    Nhap(a, n);
    In(a, n);
    
    cout<<"\nLiet Ke Cap Gia tri Gan Nhat Nhat\n";
    LietKeCapGiatriGanNhat(a, n);
    
    return 0;
}
