// Another of C's time and date functions is called gmtime( ) . Its 
// prototype is 
// struct tm 'gmtime(time_t 'time); 
// The gmtime( ) function works exactly like localtime( ), 
// except that it returns the Coordinated Universal Time (which is, 
// essentially, Greenwich Mean Time) of the system. Change the 
// program in Example 2 so that it displays both local time and 
// Coordinated Universal Time. (Note: Coordinated Universal 
// Time may not be available on your system.) 

#include<stdio.h>
#include<time.h>

int main() {
    time_t t;
    t = time(NULL);
    struct tm *systime;
    struct tm *stime2;
    systime = localtime(&t);
    
    printf("Local time: %d:%d:%d\n", systime->tm_hour, systime->tm_min, systime->tm_sec);
    stime2 = gmtime(&t);
    printf("GM time: %d:%d:%d\n", stime2->tm_hour, stime2->tm_min, stime2->tm_sec);
    printf("%d:%d:%d", systime->tm_mon+1, systime->tm_mday, systime->tm_year+1900);
}