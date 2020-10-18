//
//  main.cpp
//  Bai272
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

int TimVitriMax(int a[], int n)
{
    int i;
    int max=a[0];
   
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
void XoaPT(int a[], int &n, int k)
{
    int i;
    for(i=k;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}

void XoaTatCaSoLonNhat(int a[], int &n)
{
    int max=TimVitriMax(a, n);
    
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            XoaPT(a, n, i);
            
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
    
    cout<<"\n------- Mang sau khi xoa cac so lon nhat ----------\n";
    XoaTatCaSoLonNhat(a, n);
    In(a, n);
    return 0;
}
