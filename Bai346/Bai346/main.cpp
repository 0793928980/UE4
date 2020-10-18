//
//  main.cpp
//  Bai346
//
//  Created by MACBOOK PRO on 10/17/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
void NhapMaTran(int a[][100],int n, int m)
{
    int i,j;
    //n la cot, m la hang.
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Nhap a["<<i<<"]"<<"["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}
void XuatMaTran( int a[][100], int n, int m)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int TimMax(int a[][100], int n, int m)
{
    int i,j;
    int max=a[0][0];
    for(i=1;i<m;i++)
    {
        
        for(j=1;j<n;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    return max;
}
int KiemTraCoPhaiPhanTuHoangHau(int a[][100], int vtdong, int vtcot, int dong, int cot)
{
    int x = a[vtdong][vtcot];

    // kiểm tra dòng
    for(int i = 0; i < cot; i++)
    {
        if(a[vtdong][i] > x)
        {
            return 0;
        }
    }
    // kiểm tra cột
    for(int j = 0; j < dong; j++)
    {
        if(a[j][vtcot] > x)
        {
            return 0;
        }
    }
    //ktra duong cheo thu nhat
    int vtdong1 = vtdong + 1;
    int vtcot1 = vtcot + 1;
    while (vtcot1 + 1 < cot && vtdong1 < vtdong)
    {
        if (a[vtcot1][vtdong1] > x)
            return 0;
        // tăng phải
        vtcot1++;
        vtdong1++;
    }
    vtdong1 = vtdong - 1;
    vtcot1 = vtcot - 1;
    while (vtcot1 - 1 >= 0 && vtdong1 >= 0)
    {
        if (a[vtcot1][vtdong1] > x)
            return 0;
        //giảm qua trái
        vtcot1--;
        vtdong1--;
    }
    // duong cheo thu 2
    vtdong1 = vtdong + 1;
    vtcot1 = vtcot - 1;
    while (vtcot1 - 1 >= 0 && vtdong1 < dong)
    {
        if (a[vtcot1][vtdong1] > x)
            return 0;
        // tăng trái
        vtdong1++;
        vtcot1--;
    }
    vtdong1 = vtdong - 1;
    vtcot1 = vtcot + 1;

    while (vtdong1 - 1 >= 0 && vtcot1 < cot)
    {
        if (a[vtcot1][vtdong1] > x)
            return 0;
        // giảm phải
        vtdong1--;
        vtcot1++;
    }
    return 1;
}


int KTHoangHauTrongmaTran(int a[][100], int n, int m, int vitridong, int vitricot)
{
   
    int i,j;
    int x=a[vitridong][vitricot];
    //xet Tren hang.
    for(j=0;j<n;j++)
    {
        if(x<a[vitridong][j])
        {
            return 0;
        }
    }
    //xet tren Cot.
    for(i=0;i<m;i++)
    {
        if(x<a[i][vitricot])
        {
            return 0;
        }
    }
    
    //Xet Tren Duong cheo thu nhat
    int k=vitridong;
    int h=vitricot;
   while(k>=0 && h>=0)
   {
       if(a[k][h]>x)
       {
           return 0;
       }
       k--;
       h--;
   }
    
    while(k<n && h<m)
    {
        if(a[k][h]>x)
        {
            return 0;
        }
        k++;
        h++;
    }
    while(k>=0 && h<n)
    {
        if(a[k][h]>x)
        {
            return 0;
        }
        k--;
        h++;
    }
    
    while(k<m && h>=0)
    {
        if(a[k][h]>x)
        {
            return 0;
        }
        k++;
        h--;
    }

        return 1;
    
}


void DemSoluongHoangHau(int a[][100], int n, int m)
{
    int dem=0;
    int i,j;
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(KiemTraCoPhaiPhanTuHoangHau(a, i, j, m, n)==1)
            {
                dem++;
            }
        }
    }
    cout<<"Co "<<dem<<"  quan hau trong ma tran"<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
   int n,m;
    
    do {
        cout<<"Nhap N la Cot: \n";
        cin>>n;
        cout<<"Nhap M la Hang: \n";
        cin>>m;
       
       
        
    } while (n<0 && m<0);
    int a[n][100];
    
    NhapMaTran(a,n,m);
    XuatMaTran(a, n, m);
    DemSoluongHoangHau(a, n, m);
    return 0;
}

