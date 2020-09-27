//
//  main.c
//  Bai160
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


float GiaTriAmCc(float a[], int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        if(a[i] >-1 && a[i] < 0)
        {
            return a[i];
        }
    }
    return -1;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    float a[MAX];
  
    
    do{
        printf("Nhap N: ");
        scanf("%d",&n);
    }while(n<0 || n>MAX);
    float x;
    printf("Nhap X: \n");
    scanf("%f",&x);
    Nhapfloat(a, n);
    printf("\nGia Tri Am CC: %.f",GiaTriAmCc(a, n));
    
    return 0;
}

