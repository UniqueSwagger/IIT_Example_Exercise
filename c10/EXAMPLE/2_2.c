#include<stdio.h>
#include<time.h>

int main() {
    time_t t;
    t = time(NULL);
    struct tm *systime;
    struct tm *stime2;
    stime2 = gmtime(&t);
    systime = localtime(&t);

    printf("Local time: %d:%d:%d\n", systime->tm_hour, systime->tm_min, systime->tm_sec);
    printf("GM time: %d:%d:%d\n", stime2->tm_hour, stime2->tm_min, stime2->tm_sec);
    printf("%d:%d:%d", systime->tm_mon+1, systime->tm_mday, systime->tm_year+1900);
}