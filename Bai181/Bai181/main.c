//
//  main.c
//  bai181
//
//  Created by MACBOOK PRO on 9/30/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>
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

void LietKe181(int a[], int n)
{
    int i;
    int kt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && (a[i-1]%2==0 || a[i+1]%2==0))
        {
            kt=1;
            printf("%d",a[i]);
        }
    }
    if(kt==0)
    {
        printf("Khong co Phan tu nao!!");
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    
    do {
        printf("Nhap N:\n");
        scanf("%d",&n);
    } while (n<0);
    
    int a[100];
    Nhap(a, n);
    
    In(a, n);
    
    
    printf("\nLiet Ke\n");
    LietKe181(a, n);
    
    
    return 0;
}
