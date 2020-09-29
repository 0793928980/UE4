//
//  main.c
//  Bai170
//
//  Created by MACBOOK PRO on 9/28/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define Max 100
void Nhap(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}

void In(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int KTNguyenTo(int n)
{
    int dem=0;
    int i;
    if(n<2)
    {
        return 0;
    }
    else if(n>2)
    {
        if(n%2==0)
        {
            dem++;
            return 0;
        }
        for(i=3;i<=sqrt(n); i+=2)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
    }
    
   
    return 1;
}


int TimSoLonNhat(int a[], int n)
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

int TimSoNTNNLonHonMoiGiaTritrongMang(int a[], int n)
{
    
    int max = TimSoLonNhat(a, n);
    int SoCanTim = max + 1;
    for(SoCanTim = max + 1;; SoCanTim++)
    {
        if(max < SoCanTim)
        {
            if(KTNguyenTo(SoCanTim))
            break;
        }
    }
    return SoCanTim;
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int n;

    do {
        printf("Nhap N: \n");
        scanf("%d",&n);
    } while (n<0 || n>Max);
    int a[n];
    Nhap(a, n);
    
    printf("\n-------- Mang A ---------\n");
    In(a, n);
    int kq = TimSoNTNNLonHonMoiGiaTritrongMang(a, n);
    printf("So nguyen To nho nhat lon hon moi gia tri trong mang %d\n",kq);
    
    
    
    return 0;
}
