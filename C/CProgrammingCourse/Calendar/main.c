//
//  main.c
//  test1
//
//  Created by Dina on 16/10/17.
//  Copyright © 2016年 Dina. All rights reserved.
//

#include <stdio.h>

typedef enum {SUN,MON,TUE,WED,THU,FRI,SAT} WEEKDAY;
int pYear[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int rYear[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

//判断平年/闰年
int isLeap(int year) {
    if(((year%4==0)&&(year%100!=0)) || (year%400==0)) {
        return 1;
    }else{
        return 0;
    }
}

//计算天数
int calDays(int year, int month) {
    int days=0;
    int i,j;
    
    
    for (i=2007; i<year; i++) {
        if (isLeap(i)) {//闰年
            days = days + 366;
        }else {//平年
            days = days + 365;
        }
    }
    if (isLeap(i)) {
        for (j=1; j<month; j++) {
            days = days + rYear[j];
        }
    }else {
        for (j=1; j<month; j++) {
            days = days + pYear[j];
        }
    }
    
    
    return days;
}

//打印星期
void printWeekTitle() {
    int i;
    for (i=0; i<7; i++) {
        switch (i) {
            case 0:
                printf("Sun ");
                break;
            case 1:
                printf("Mon ");
                break;
            case 2:
                printf("Tue ");
                break;
            case 3:
                printf("Wed ");
                break;
            case 4:
                printf("Thu ");
                break;
            case 5:
                printf("Fri ");
                break;
            case 6:
                printf("Sat ");
                break;
                
            default:
                break;
        }
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    //20070101 Mon
    int year,month;
    int days;
    printf("enter year: \n");
    scanf("%d",&year);
    if (year<2007) {
        return 0;
    }
    printf("enter month: \n");
    scanf("%d",&month);
    
    days = calDays(year, month);
    printf("%d\n",days);
    int firstDay = (days%7+1);
    printf("%d\n",firstDay);
    
    printWeekTitle();
    for (int i=1; i<=rYear[month]; i++) {
        if (i==1) {
            for (int j=0; j<firstDay%7; j++) {
                printf("    ");
            }
            printf("%-4d",i);
        }else {
            printf("%-4d",i);
        }
        
        if ((firstDay%7+i)%7==0) {
            printf("\n");
        }
    }
    printf("\n");
    
    
//    printf("******The second max number******\n");
//    int second=-65536,max=-65536;
//    int a,count=0;
//    while(1) {
//        count++;
//        scanf("%d",&a);
//        if(a==0&&count>2) {
//            break;
//        }
//        if (a==0 && count<=2) {
//            continue;
//        }
//        if(a>= max) {
//            second = max;
//            max = a;
//        }else if (second<=a && a<max) {
//            second = a;
//        }
//        
//    }
//    printf("second=%d\n",second);
//    
//    printf("\n****** Who is the thief? ******\n");
//    char words;
//    int sum;
//    for (words='A'; words<='D'; words++) {
//        sum = ((words!='B' && words=='D')||(words=='B' && words!='D'))
//        +((words!='B' && words=='C')||(words=='B' && words!='C'))
//        +((words!='A' && words=='B')||(words=='A' && words!='B'))
//        +(words!='D' || words=='D');
//        if(sum == 4) {
//            switch (words) {
//                case 'A':
//                    printf("A\n");
//                    break;
//                case 'B':
//                    printf("B\n");
//                    break;
//                case 'C':
//                    printf("C\n");
//                    break;
//                case 'D':
//                    printf("D\n");
//                    break;
//                default:
//                    break;
//            }
//            break;
//        }
//    }
    
//    printf("\n****** n! ******\n");
//    int i,n;
//    int ans=1;
//    scanf("%d",&n);
//    if (n == 0) {
//        printf("从右数第一个非零数为：%d\n",1);
//    }else if (n>0 && n<=100) {
//        printf("=============");
//        for (i=1; i<=n; i++) {
//            ans = ans * i;
//            while (ans%10 == 0) {
//                ans = ans / 10;
//            }
//            ans = ans % 1000;
//        }
//        ans = ans % 10;
//        printf("从右数第一个非零数为：%d\n",ans);
//    }
    
    return 0;
}
