//
//  main.c
//  Bai158
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

float TimGiatriX(float a[], int n)
{
    int i;
   float  x=a[0];
    for(i=1;i<n;i++)
    {
        x = (x > fabsf(a[i]) ? x : fabsf(a[i]));
    }
    return x;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    float a[MAX];
    printf("Nhap N: ");
    scanf("%d",&n);

    Nhapfloat(a, n);
    printf("\nGoa Tri X la: %.3f\n", TimGiatriX(a, n));
    return 0;
}
