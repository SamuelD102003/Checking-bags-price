#include <stdio.h>

int main(void) {
double bags,cost,bagprice;
  printf("MIA to BCN: How many checked bags do you have?:");
  scanf("%lf",&bags);
  if (bags>=3)
  {
    bagprice = 45;
    cost = 1.07*(250+25+35+(bagprice*(bags-2)));
  }
  else if (bags==2)
  {
    cost = 1.07*(250+25+35);
  }
  else if (bags==1)
  {
    cost = 1.07*(250+25);
  }
  else
  {
    cost = 1.07*(250);
  }
    
  printf("The total cost (including tax) for this trip is %.2lf",cost);
  return 0;
}