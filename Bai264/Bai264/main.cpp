//
//  main.cpp
//  Bai264
//
//  Created by MACBOOK PRO on 10/8/20.
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
void HoanVi(int &a, int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

void SapXepTangDan(int a[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                HoanVi(a[i], a[j]);
            }
       
        }
    }
            
}

void Tron2MangSapXepTangDan(int a[], int b[], int c[], int na, int nb, int &nc)
{
    nc=na+nb;
    SapXepTangDan(a, na);
    SapXepTangDan(b, nb);
    int i;
    int vitriA=0, vitriB=0;
    for(i=0;i<nc;i++)
    {
       if(vitriA < na && vitriB < nb)
       {
           if(a[vitriA]<b[vitriB])
           {
               c[i]=a[vitriA++];
           }
           else
           {
               c[i]=b[vitriB++];
           }
       }
        
        //xet them neu chay het vitri trong mang nay thi them vao mang kia.
        else if(vitriB==nb)
        {
            c[i]=a[vitriA++];
        }else{
            c[i]=b[vitriB++];
        }
        
    }
}
void Tron2MangThanh1Mang(int a[], int b[], int c[], int na, int nb, int &nc)
{
    nc = na + nb;         // Số phần tử mảng cần gộp
    SapXepTangDan(a, na);
    SapXepTangDan(b, nb);   // Sắp xếp mảng b
    int vitriA = 0, vitriB = 0;
    for(int i = 0; i < nc; i++)       // Duyệt mảng cần gộp
    {
        if(vitriA < na && vitriB < nb)   // Kiểm tra từng vị trí trong mảng A và mảng B xem có lớn hơn số phần tử của từng mảng
        {
            if(a[vitriA] < b[vitriB])     // So sánh xem phần tử của mảng nào nhỏ hơn (ở đầy là mảng a)
            {
                c[i] = a[vitriA++];          // Đổ mảng a vào mảng cần gộp
            }
            else
            {
                c[i] = b[vitriB++];             // Ngược lại thì đổ mảng b vào mảng cần gộp
            }
        }
        // Xét thêm
        else if(vitriB == nb)           // Nếu mà vị trí b tăng bằng số phần tử mảng b
        {
            c[i] = a[vitriA++];            // Chỉ còn mảng a để đổ vào mảng cần gộp
        }
        else
        {
            c[i] = b[vitriB++];
        }
    }
}

void Tron2Mangsapxeptangdan(int a[], int b[], int c[], int na, int nb, int &nc)
{
    int i,j;
    for(i=0;i<na;i++)
    {
        for(j=i+1;j<na;j++)
        {
            if(a[i]>a[j])
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
    
    
    for(i=0;i<nb;i++)
    {
        for(j=i+1;j<nb;j++)
        {
            if(a[i]>a[j])
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
    
    int vtA=0, vtB=0;
    nc=na+nb;
    for(i=0;i<nc;i++)
    {
        if(vtA<na && vtB<nb)
        {
            if(a[vtA]<b[vtB])
            {
                c[i]=a[vtA++];
            }else{
                c[i]=b[vtB++];
            }
        }
        else if(vtB==nb)
        {
            c[i]=a[vtA++];
        }else{
            c[i]=b[vtB++];
        }
        
    }
}
    
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int na,nb,nc;

    cout<<"nhap Na: \n";
    cin>>na;

    cout<<"nhap Nb: \n";
    cin>>nb;
    int a[100];
    int b[100];
    int c[100];
    
    cout<<"\n---------  Mang A -----------\n";
    Nhap(a, na);
    In(a, na);
    
    cout<<"\n---------- Mang B -------------\n";
    Nhap(b, nb);
    In(b, nb);
    
    Tron2MangSapXepTangDan(a, b, c, na, nb, nc);
    
    cout<<"\n------ Sau Khi tron hai mang -----\n";
    In(c, nc);
    
    
    
    return 0;
}
