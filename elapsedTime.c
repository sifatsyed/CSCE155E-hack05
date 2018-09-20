#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {
   double elapseTime, totalTime, percentC, denominatorCalculation, percentCSquare;
   
   printf("Enter total time\n");
   scanf("%lf", &totalTime);
   
   printf("Enter percent of C\n");
   scanf("%lf", &percentC);
   
   percentCSquare = pow(percentC,2);
   denominatorCalculation = sqrt(1-percentCSquare);
   elapseTime = totalTime/denominatorCalculation;
    
   printf("Elapsed Time: %lf\n", elapseTime);	
 }