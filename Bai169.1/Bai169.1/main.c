//
//  main.c
//  Bai169.1
//
//  Created by MACBOOK PRO on 9/28/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>
#define MAX 100

void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d] = \n",i);
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

int TimSochanMax(int a[], int n)
{
    int min=MAX;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<min && a[i] % 2!=0)
        {
            min=a[i];
        }
    }

    if(min == MAX)
    {
        return -1;
    }else
    {
        return min-1;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here
    int n;
    printf("Nhap N: \n");
    scanf("%d",&n);
    int a[n];
    
    Nhap(a, n);
    In(a, n);
    if(TimSochanMax(a, n) ==-1)
    {
        printf("Mang K co phan tu le");
    }
    printf("\nSo chan Lon nhat la : %d\n",TimSochanMax(a, n));
    return 0;
}
