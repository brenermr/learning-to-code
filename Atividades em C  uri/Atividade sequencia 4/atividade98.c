/*
I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?
*/

#include<stdio.h>
    int main()
    {
        double matriz[36][2];
        double i = 0;
        double j = 1;
       int l, c;
        int count = 0;

        for (l = 0; l < 36; l++)
        {
            if (count == 3)
            {
                j = 1;
                i +=  0.2;
                j += 0.2;
                count = 0;
            }
            matriz[l][0] = i;
            matriz[l][1] = j;
            j++;
            count++;
        }

        for (l = 0; l < 36; l++)
        {
            printf("I=%.1lf J=%.1lf\n", matriz[l][0], matriz[l][1]);
        }
        
        
    }