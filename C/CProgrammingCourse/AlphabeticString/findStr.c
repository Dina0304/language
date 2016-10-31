// 2016010296_1021_6.cpp : 定义控制台应用程序的入口点。
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[30],str2[30],str3[30];
    printf("please input three alphabetic strings. \n");
    scanf("%s%s%s",str1,str2,str3);
    int i,j=0,k=0,count=0;

    for(i=0;i<strlen(str1);i++) {
        if(str1[i]==str3[j]) {
            j++;
        }else {
            j=0;
        }
        if(j==strlen(str3)) {
            break;
        }
    }

    for(i=0;i<strlen(str2);i++) {
        if(str2[i]==str3[k]) {
            k++;
        }else {
            k=0;
        }
        if(k==strlen(str3)) {
            break;
        }
    }
    if(j==strlen(str3)) {
        count++;
    }

    if(k==strlen(str3)) {
        count++;
    }

    if(count==0) {
        printf("No found!!!\n");
    }else {
        printf("it has been found for %d times\n",count);
    }

    getchar();

}
