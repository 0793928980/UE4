//
//  main.cpp
//  Bai215
//
//  Created by MACBOOK PRO on 10/2/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

void Nhap(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]"<<"\n";
        cin>>a[i];
        
    }
}



void In(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void KhoangCacTB(float a[], int n)
{
    int i,j;
    float dem=0;
    float KC;
    for(i=0;i<n;i++)
    {
      
        for(j=i+1;j<n;j++)
        {
             KC+=abs(a[i]-a[i+1]);
            dem++;
        }
    }
    float tb = pow(KC, 1.0/dem);
    
    cout<<"Khoang Cach Trung Binh: "<<tb;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
                do {
                    cout<<"Nhap N:\n";
                    cin>>n;
                } while (n<0);
                float a[100];
                
                Nhap(a, n);
                In(a, n);
    KhoangCacTB(a, n);
    return 0;
}
