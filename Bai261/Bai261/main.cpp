//
//  main.cpp
//  Bai261
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


void Hoanvi(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}

void SapXepsoDuongTangdan(int a[], int n)
{
    int i,j;
    
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]>0 && a[i]>a[j])
                {
                    Hoanvi(a[i], a[j]);
                }
            }
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
       
    SapXepsoDuongTangdan(a, n);
       cout<<"\nMang sau khi sap\n";
       In(a, n);
    return 0;
}
