//
//  main.cpp
//  Bai233
//
//  Created by MACBOOK PRO on 10/4/20.
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

int KTVitriTrung(int a[], int n, int vitri)
{
    int i;
    for(i=vitri-1; i>=0 ;i--)
    {
        if(a[i]==a[vitri])
        {
            return 0;
        }
    }
    return 1;
}



int DemSoluonTrung(int a[], int n, int vitri)
{
    int i;
    int dem=1;
    for(i=vitri+1;i<n;i++)
    {
        if(a[i]==a[vitri])
        {
            dem++;
        }
    }
    return dem;
}
int Demsoluongtrung(int a[], int n)
{
    int i,j;
    int dem=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i] == a[j])
            {
                if(i<=j)
                {
                    dem++;
                }else{
                    break;
                }
            }
        }
    }
    return dem;
}

void LietKeTansuatXuathien1lan(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int check=KTVitriTrung(a, n, i);
        if(check==1)
        {
            int dem=Demsoluongtrung(a, n);
            cout<<"\nPhan tu "<<a[i]<<" xuat hien "<<dem<<"\n";
            
        }
    }
}

void LietKetansuatxuathienduynhat1lan(int a[], int n)
{
    int i,j;
    int dem=0;
    for(i=0;i<n;i++)
    {
        dem=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                if(i<=j)
                {
                    dem++;
                }else{
                    break;
                }
            }
        }
       if(dem!=0)
             cout<<"\nPhan tu "<<a[i]<<" xuat hien "<<dem<<"\n";
            
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
    LietKeTansuatXuathien1lan(a, n);
    LietKetansuatxuathienduynhat1lan(a, n);
    return 0;
}
