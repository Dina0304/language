#include<stdio.h>

int main()
{
   int y,f,x,j=0;     /*y:��� f�������һ�������ڼ� x����������������嶼�ǵڼ��� j������*/
   scanf("%d",&y);/*�������*/
   f= (((y-1998)+(y-1996)/4-(y-1996)/100+(y-1996)/400)+4)%7;/*�����һ�������ڼ�.���㷽�������⣬2016���һ��Ӧ�������壬������Ϊ����*/
   printf("%d���һ��������%d\n",y,f);
   if((y%4==0&&y%100!=0)||(y%400==0))/*�����һ��������*/
   {
     if(f<=5)/*��һ����������һ��������*/
     {
     	for(x=6-f;x<=6-f+365;x+=7)/*�����������һ��ĵ�6-f��13-f...��*/
     	{
     		if(x==13||x==44||x==73||x==104||x==134||x==165||x==195||x==226||x==257||x==287||x==318||x==348)/*13�ų�������һ��ĵ�13��44��...��*/
                j=j+1;
		 }
		 printf("%d",j);

	 }
	 else/*�����һ����������*/
	 {
	   for(x=7;x<=13-f+365;x+=7)/*�����������һ��ĵ�7��14...��*/
     	{
     		if(x==13||x==44||x==73||x==104||x==134||x==165||x==195||x==226||x==257||x==287||x==318||x==348)/*13�ų�������һ��ĵ�13��44��...��*/
                j=j+1;
		 }
		 printf("%d",j);
	 }

    }
    else/*�����һ�겻������*/
    {
    if(f<=5)/*��һ��������һ��������*/
     {
     	for(x=6-f;x<=6-f+364;x+=7)/*�����������һ��ĵ�6-f��13-f...��*/
     	{
     		if(x==13||x==44||x==72||x==103||x==133||x==164||x==194||x==225||x==256||x==286||x==317||x==347)/*13�ų�������һ��ĵ�13��44��...��*/
                j=j+1;
		 }
		 printf("%d",j);

	 }
	 else
	 {
	   for(x=7;x<=13-f+364;x+=7)/*�����������һ��ĵ�7��14...��*/
     	{
     		if(x==13||x==44||x==72||x==103||x==133||x==164||x==194||x==225||x==256||x==286||x==317||x==347)/*13�ų�������һ��ĵ�13��44��...��*/
                j=j+1;
		 }
		 printf("%d",j);
	 }
	}
 }