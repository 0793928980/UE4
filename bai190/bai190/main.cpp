//
//  main.cpp
//  bai190
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
int KiemTraToanLe(int n)
{
    n=abs(n);
    int t;
    do {
        t=n%10;
        if(n%2==0)
        {
            return 0;
        }
        n/=10;
    } while (n>0);
    return 1;
}
void LietKecaGiatriToanLe(int a[],int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(KiemTraToanLe(a[i])==1)
        {
            cout<<a[i]<<" ";
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
    
    printf("\nLiet Ke Gia Tri Toan Le\n");
    LietKecaGiatriToanLe(a, n);
    return 0;
}
