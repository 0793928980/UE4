//
//  main.cpp
//  Bai199
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
int KTNguyenTo(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void LietKeVTSONT(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(KTNguyenTo(a[i])==1)
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
        cout<<"Nhap N:\n";
        cin>>n;
    } while (n<0);
    
    int a[100];
    
    Nhap(a, n);
    In(a, n);
    
    
    cout<<"\nLiet Ke Vi tri Gia tri chua SO NT\n";
    LietKeVTSONT(a, n);
    return 0;
}
