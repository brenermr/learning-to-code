#include<stdio.h>
#include<math.h>


  int main()
  {
    long long int soldier[2];
    long long int swap;
    long long int r;

    while(scanf("%lld %lld", &soldier[0], &soldier[1]) != EOF)
    {
      if(soldier[0] > soldier[1])
      {
        swap = soldier[0];
        soldier[0] = soldier[1];
        soldier[1] = swap;
      }

      r = soldier[1] - soldier[0];
      printf("%lld\n", r);
    }
  }