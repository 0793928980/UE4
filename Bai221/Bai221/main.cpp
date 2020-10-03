//
//  main.cpp
//  Bai221
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
int DemSochan(int a[], int n)
{
    int i;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            dem++;
        }
    }
    return dem;
}

int DemSole(int a[], int n)
{
    int i;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            dem++;
        }
    }
        return dem;
}


int TuonquanChanle(int a[], int n)
{
    int i;
    int demchan=0;
    int demle=0;
    
    
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           demchan++;
       }else{
           demle++;
       }
       
    }
    
    if(demchan>demle)
    {
        return -1;
    }
    else if(demchan<demle)
    {
        return 1;
    }
    return 0;
    
    
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
        
    int Tuongquanchanle = TuonquanChanle(a, n);
    
    if(Tuongquanchanle==-1)
    {
        cout<<"\nSo chan Nhieu hon So le\n";
    }else if(Tuongquanchanle==1)
    {
        cout<<"\nSo le Nhieu hon So chan\n";
    }else{
        cout<<"\nSo chan bang So le\n";
    }
    return 0;
}
