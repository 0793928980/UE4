//
//  main.cpp
//  Bai228
//
//  Created by MACBOOK PRO on 10/3/20.
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


void DemsoluongPT(int a[], int n)
{
    int i;
    int dem=0;
    
    for(i=0;i<n;i++)
    {
        if(a[i]*a[i-1]>0 && (abs(a[i]))>abs(a[i-1]))
        {
            dem++;
        }
    }
    cout<<"\nCo "<<dem<<" so luong phan tu\n";
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
    DemsoluongPT(a, n);
    return 0;
}
