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
int Tansuatxuathienmax(int a[], int n)
{
    int max=1;
    
    int i,j;
    for(i=0;i<n;i++)
    {
      int  dem=1;//demtaivitri i=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                dem++;
            }
        }
        if(dem>max)
        {
            max=dem;
        }
    }
    return max;
}

int Kiemtrabitrung(int a[], int n ,int vitri)
{
    int i;
    
    for(i=vitri-1;i>=0;i--)
    {
        if(a[i]==a[vitri])
        {
            return 0;
        }
    }
    return 1;
}

int DemSotansuatxuathien(int a[], int n,int vitri)
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

void LietKeGiatriXuatHienNhieuNhat(int a[], int n)
{
    int i;
    int check;
    int dem;
    int demxuathiennhieunhat = Tansuatxuathienmax(a, n);
    for(i=0;i<n;i++)
    {
        check=Kiemtrabitrung(a, n, i);
        
            if(check==1)
            {
                dem=DemSotansuatxuathien(a, n, i);
               if(demxuathiennhieunhat==dem)
               {
                   cout<<"\nPhan tu xuat hien nhieu nhat la: "<<a[i];
               }
            }
    }
    cout<<"So lan xuat hien tan suat: "<<Tansuatxuathienmax(a, n);
}
void LietKeCacSoXuatHienNhieuNhat(int a[], int n)
{
    int TanSuatMax = Tansuatxuathienmax(a, n);
    for (int i = 0; i < n; i++)
    {
        int CheckTrung = Kiemtrabitrung(a, n, i);
        if (CheckTrung == 1)  // chỉ xử lý khi không trùng
        {
            int TanSuat = DemSotansuatxuathien(a, n, i);
            //printf("\nPhan tu %d xuat hien %d lan", a[i], TanSuat);

            if (TanSuat == TanSuatMax)
            {
                printf("\nPhan tu xuat hien nhieu nhat la %d", a[i]);
            }
        }
    }
    printf("\n=> So lan xuat hien la: %d", TanSuatMax);
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
    LietKeCacSoXuatHienNhieuNhat(a, n);
    return 0;
}
