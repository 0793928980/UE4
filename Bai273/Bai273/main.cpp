//
//  main.cpp
//  Bai273
//
//  Created by MACBOOK PRO on 10/9/20.
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

void XoaPt(int a[], int &n, int k)
{
    int i;
    for(i=k;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}

void XoaCacGiatriAm(int a[], int &n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            XoaPt(a, n, i);
        }
    }
}

void XoaCacgiatriAmMaMangTangDan(int a[], int &n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
       
        if(a[i]<0 )
        {
            XoaPt(a, n, i);
            int j;
            for(j=0;j<n;j++)
            {
                if(a[i]>a[j])
                {   int t=a[i];
                    int k;
                    for(k=i;k>j;k--)
                    {
                        a[k]=a[k-1];
                    }
                    a[j]=t;
                    break;
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
    
    cout<<"\n------ Mang --------\n";
    XoaCacgiatriAmMaMangTangDan(a, n);
    In(a, n);
    return 0;
}
