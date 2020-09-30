//
//  main.cpp
//  bai196
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
void LietKeSoam(int a[], int n)
{
    int i;
    int kt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            kt++;
            cout <<a[i]<<" ";
        }
    }
    if(kt==0)
    {
        cout<<"Khong co Gia tri nao!!";
    }
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    
    do {
        cout<<"Nhap N:\n";
        cin>>n;
    } while (n<0);
    
    int a[100];
    
    Nhap(a, n);
    In(a, n);
    
    
    cout<<"\nLiet Ke Cac So am\n";
    LietKeSoam(a, n);
    return 0;
}
