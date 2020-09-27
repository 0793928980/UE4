//
//  main.c
//  Bai157
//
//  Created by MACBOOK PRO on 9/26/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include<math.h>
#define MAX 100
void Nhapfloat(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%f",&a[i]);
    }
}

void Infloat(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("%.2f ", a[i]);
    }
}

void GetKhoangCach(float a[], int n, float b[], int x){
    int i;
    for(i=0;i<n;i++)
    {
        b[i] = fabsf(x-a[i]);
    }
}

float TimKCGanNhat(float b[], int n)
{
    int i;
    float Min=b[0];
    for(i=1;i<n;i++)
    {
        if(Min<b[i])
        {
            Min =b[i];
        }
        
    }
    return Min;
}

void XuatGiatriXGanNhat(float a[], float b[], int n)
{
    int i;
    float KCGN = TimKCGanNhat(b, n);
    for(i=0;i<n;i++)
    {
        if(KCGN == b[i])
        {
            printf("%.3f",a[i]);
        }
    }
}



int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    float a[MAX];
    float b[MAX];
    
    do{
        printf("Nhap N: ");
        scanf("%d",&n);
    }while(n<0 || n>MAX);
    float x;
    printf("Nhap X: \n");
    scanf("%f",&x);
    Nhapfloat(a, n);
    printf("M\n--------------- Mang a ------------------\n");
    Infloat(a, n);
    
    GetKhoangCach(a, n, b, x);
    
    printf("\n--------------- Mang B ---------------------\n");
    Infloat(b, n);
    
    
    XuatGiatriXGanNhat(a, b, n);
    
    return 0;
}
