//
//  main.c
//  Bai159
//
//  Created by MACBOOK PRO on 9/26/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>
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

float TimGiaTriLonhon2003(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i]>2003)
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
printf("M\n--------------- Mang a ------------------\n");
Infloat(a, n);
    
    printf("Tim Gia Tri Dau tien Lon hon 2003 la: %.f",TimGiaTriLonhon2003(a, n));
    return 0;
}
