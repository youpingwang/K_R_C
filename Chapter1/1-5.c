//
// Created by Jack Wang on 2019-04-23.
// farh cersius table in reverse order

#include <stdio.h>
void fahr_cersius_to_reverse_order()
{
  int fahr;

  printf("fahr-celsius table in reverse orser\n");
  for(fahr = 300; fahr >= 0; fahr = fahr - 20)
      printf("%3.0d  %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
