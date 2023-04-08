#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    int sec, min, hou, day;
    scanf("%d", &sec);
    //1 day == 24 hours == 24*60 minutes == 24*60*60 seconds
    
    day = sec / (24*60*60);
    
    sec %= 24*60*60; 
    hou = sec / (60*60);
    
    sec %= 60*60;
    min = sec / 60;
    
    sec %= 60;
    
    printf("%dd:%02dh:%02dm:%02ds", day, hou, min, sec);
    
    return 0;
}