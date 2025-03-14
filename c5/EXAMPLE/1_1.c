// reads the noon day temp for each day and then reports the months avg temp and the highest temp and  the lowest temp

#include <stdio.h>

int main(){
    int temp[31],min,max,avg;
    int days;
    printf("How many days in the month: ");
    scanf("%d",&days);
    for (int i = 0; i < days; i++)
    {
        printf("Enter the temperature for day %d: ",i+1);
        scanf("%d",&temp[i]);
    }
    
    // find avg
    
    int sum = 0;
    for (int i = 0; i < days; i++)
    {
        sum += temp[i];
    }
    avg = sum/days;
    printf("The average temperature for the month is %d\n",avg);
    min=max=temp[0];
    for (int i = 0; i < days; i++)
    {
        if (temp[i] > max)
        {
            max = temp[i];
        }
        if (temp[i] < min)
        {
            min = temp[i];
        }
    }
    printf("The highest temperature for the month is %d\n",max);
    printf("The lowest temperature for the month is %d\n",min);
    return 0;
}