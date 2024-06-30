/*
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:

*/

#include<stdio.h>
#include<time.h>
int main()
{
  char week[7][5]={"Sun","Mon","Tue","Wed","Thu","FRI","Sat"};
 char month[12][20]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"};
   
 long int cur_time;
 time(&cur_time);
    struct tm *ptr=localtime(&cur_time);
    printf("%s %s %d %d:%d:%d IST %d\n",week[ptr->tm_wday],month[ptr->tm_mon],ptr->tm_mday,ptr->tm_hour,ptr->tm_min,ptr->tm_sec,(1900+(ptr->tm_year)));



    return 0;

}
 
     
     
            
            
           
   

