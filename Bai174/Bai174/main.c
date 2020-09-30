//
//  main.c
//  Bai174
//
//  Created by MACBOOK PRO on 9/29/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>

void Nhap(float a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%f",&a[i]);
    }
}

void In(float a[], int n)
{
    int i=0;
    while(i<n)
    {
        printf("%f ",a[i]);
        i++;
    }
}

void LietKe(float a[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j] || a[i] == a[j])
            {
                printf("( %.f , %.f ) \n",a[i],a[j]);
            }
        }
    }
}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    do {
        printf("Nhap N: \n");
        scanf("%d",&n);
    } while (n<0);
    float a[n];
    
    Nhap(a, n);
    In(a, n);
    
    
    LietKe(a, n);
    return 0;
}
