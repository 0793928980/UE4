//
//  main.c
//  Bai166
//
//  Created by MACBOOK PRO on 9/27/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//


//Bai166
#include <stdio.h>
#define MAX 100


void NhapInt(int a[], int n)
{
    
    
    
    
    int i;
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d]", i);
        scanf("%d",&a[i]);
    }
}


void Inint(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}

int KiemTraDang2k(int n)
{
    
    int k,p=1;
    
    for(k=1;p<n;k++)
    {
        p=p*2;
    }
    if(n==p)
    {
        return 1;
    }else
    {
        return 0;
    }
    
}

int TimGiaTriDauTienDang2k(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(KiemTraDang2k(a[i])==1)
        {
            return a[i];
        }
    }
    return -1;
}




int main(int argc, const char * argv[]) {
    int n;
    int a[MAX];
    
    
    do{
        printf("Nhap N ");
        scanf("%d",&n);
        
    }while(n<0 || n>MAX);
    NhapInt(a, n);
    printf("\n------------  Mang A -------------\n");
    Inint(a, n);
    
    printf("\nGia Tri Dau tien co Dang 2^k %d",TimGiaTriDauTienDang2k(a, n));
    return 0;
}
