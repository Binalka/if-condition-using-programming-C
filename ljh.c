#include <stdio.h>
#include <stdlib.h>
int time(int hours, int minutes, int seconds)
{
    return hours % 12 * 3600 + minutes * 60 + seconds;
}
int main()
{
    int h1, h2, m1, m2, s2, s1;
    printf("Enter Hours , Mins , Seconds : ");
    scanf("%d %d %d", &h1, &m1, &s1);
    if(h1 > 24 || h1 < 0 || m1 > 59 || m1 < 0 || s1 > 59 || s1 < 0)
        {
            printf("Time is out of range\n");
        }
    printf("Enter Hours , Mins , Seconds : ");
    scanf("%d %d %d", &h2, &m2, &s2);
    if(h2 > 24 || h2 < 0 || m2 > 59 || m2 < 0 || s2 > 59 || s2 < 0)
    {
        printf("Time is out of range\n");
    }
    if( !( h2 >= 12 && h1 >= 12 ||  h2 <= 12 && h1 <= 12 ) )
    {
        printf("The two times must be in the same twelve hour cycle\n");
    }
    if ( time(h1, m1, s1) > time(h2, m2, s2) )
    {
        printf("%d\n", time(h1, m1, s1) - time(h2, m2, s2) );
    }
    else
    {
        printf("%d\n", time(h2, m2, s2) - time(h1, m1, s1) );
    }
    return 0;
}
