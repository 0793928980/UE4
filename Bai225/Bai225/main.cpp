//
//  main.cpp
//  Bai225
//
//  Created by MACBOOK PRO on 10/3/20.
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

int TimMax(int a[], int n)
{
    int i;
    int max=a[0];
    
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}


void DemMax(int a[], int n)
{
    int i;
    int max=TimMax(a, n);
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(max==a[i])
        {
            dem++;
        }
    }
    
    cout<<"\nCo "<<dem<<" so lon nhat\n";
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
    DemMax(a, n);
    return 0;
}
