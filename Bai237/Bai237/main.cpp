//
//  main.cpp
//  Bai237
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

int DemSolanXuatHienMax(int a[], int n)
{
    int i,j;
    int max=1;
    for(i=0;i<n;i++)
    {
        int dem=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                dem++;
            }
        }
        if(max<dem)
        {
            max=dem;
        }
    }
    return max;
}
int Timvitritrung(int a[], int n,int vitri)
{
    int i;
    for(i=vitri-1;i>0;i--)
    {
        if(a[i]==a[vitri])
        {
            return 0;
        }
    }
    return 1;
}
int TimvitriTrung(int a[], int n)
{
    int i,j;

    for(i=1;i<=n;i++)
    {
        
        for(j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
            {
                return 0;
                break;
            }
        }
    }
    return 1;
}
int DemTanSuatXuatHien(int a[], int n,int vitri)
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
void LietKeTanSuatXuatHienNhieuNhat(int a[], int n)
{
    int i;
    int DemSolanXuatHienNhieuNhat=DemSolanXuatHienMax(a, n);
    
    
    for(i=0;i<n;i++)
    {
        int kt=Timvitritrung(a, n, i);
        if(kt==1)
        {
            int Demtansuatxuathien=DemTanSuatXuatHien(a, n,i);
            if(DemSolanXuatHienNhieuNhat==Demtansuatxuathien)
            {
                cout<<a[i]<<" ";
            }
        }
            
    }
}
 void TimGiatriXuatHienNhieuNhat(int a[], int n)
{
    int i;
    int DemsolanxuathienNhieunhat=DemSolanXuatHienMax(a, n);
    
    for(i=0;i<n;i++)
    {
        int kt=Timvitritrung(a, n, i);
        if(kt==1)
        {
            int Demtansuatxuathien=DemTanSuatXuatHien(a, n, i);
            if(DemsolanxuathienNhieunhat==Demtansuatxuathien)
            {
               cout<<"\nGia tri xuat hien nhieu nhat la: "<<a[i];
            }
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
    cout<<"\nCac Gia tri xuat hien nhieu nhat ";
    LietKeTanSuatXuatHienNhieuNhat(a, n);
    TimGiatriXuatHienNhieuNhat(a, n);
    
    return 0;
}
