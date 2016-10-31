#include <stdio.h>
//1998��1��1��   ������
int ryear[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};//�����12���·ֱ��ж�����
int pyear[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};//ƽ���12���·ֱ��ж�����

//�ж�ĳһ����ƽ�껹������
int isLeap (int year) {
    if((year%4==0)&& (year%100!=0) || (year%400==0)) {
        return 1;
    }else {
        return 0;
    }
}
//��ȡĳ��ĳ�µ�13�����Ƿ�Ϊ������
int getWeek(int year, int month) {
    int week = -1;
    int i;
    int days = 0;
    for(i=1998;i<year;i++) {
        if(isLeap(i)==1) {
            days = days + 366;
        }else {
            days = days + 365;
        }

    }
    if(isLeap(year)==1) {
        for(i=1;i<month;i++) {
            days = days + ryear[i];
        }
    }else {
        for(i=1;i<month;i++) {
            days = days + pyear[i];
        }
    }
    days = days + 13 - 1;
    week = (days%7+4)%7;

    return week;
}

int main() {
    int year;
    int count = 0;
    printf("Please enter year: \n");
    scanf("%d",&year);
    int week,i;
    for(i=1;i<=12;i++) {
        week = getWeek(year,i);
        if(week == 5) {
            printf("%d��%d��13����������\n",year,i);
            count++;
        }
    }
    printf("%d���ܹ���%d�켴��13������������\n",year,count);
    return 0;
}
