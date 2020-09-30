//
//  main.cpp
//  bai186
//
//  Created by MACBOOK PRO on 9/30/20.
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

int TimAmDautien(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            return a[i];
        }
    }
    return -1;
}

void LietKeVitriAmbangVitriDau(int a[], int n)
{
    int i;
    
    int soam=TimAmDautien(a, n);
    
    for(i=0;i<n;i++)
    {
        if(soam==a[i] && a[i]<0)
        {
            cout<<i<<" ";
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
    
    cout<<"\nLiet Ke Vi tri gia tri tai do bang gia tri am dau tien\n";
    LietKeVitriAmbangVitriDau(a, n);
    return 0;
}
