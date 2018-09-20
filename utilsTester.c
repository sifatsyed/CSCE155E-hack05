/**
 * Author: Sifat Syed
 *
 * This program is the driver for the
 * functions defined in earlier modules
 */
 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include"utils.h"

int main(int argc, char **argv) {
	
	double Epsilon = 0.00001;
	
	double degree1 = 45, degree2 = 60, degree3 = 90;
	
    double originLatitude1 = 41.948300, originLongitude1 = -87.655600,
           destinationLatitude1 = 40.820600, destinationLongitude1 = -96.705600; 
    double originLatitude2 = 40.825800, originLongitude2 = -96.685200 ,
           destinationLatitude2 = 41.252400 , destinationLongitude2 = -95.998000;	
    double originLatitude3 = 35.689500 , originLongitude3 = 139.691700,
           destinationLatitude3 = 51.482600 , destinationLongitude3 = 0.007700;		
					  
    double t1 = 600, percentC1 = 0.25;
	double t2 = 10000, percentC2 = 0.10;
	double t3 = 4500, percentC3 = 0;
	
	double rads1 = degreesToRadians(degree1);
	double rads2 = degreesToRadians(degree2);
	double rads3 = degreesToRadians(degree3);
	
	double airDist1 = getAirDistance(originLatitude1, originLongitude1,
	                  destinationLatitude1, destinationLongitude1);
	double airDist2 = getAirDistance(originLatitude2, originLongitude2, 
	                  destinationLatitude2, destinationLongitude2);
	double airDist3 = getAirDistance(originLatitude3, originLongitude3, 
	                  destinationLatitude3, destinationLongitude3);

    
	double elapsedTime1 = lorentzTimeDilation(t1, percentC1);	
    double elapsedTime2 = lorentzTimeDilation(t2, percentC2);
    double elapsedTime3 = lorentzTimeDilation(t3, percentC3);	
        
		double radsOutput1 = 0.78539816339;
		double radsOutput2 = 1.0471975512;
		double radsOutput3 = 1.5707963268;
        
		double airDistOutput1 = 764.990931;
		double airDistOutput2 = 74.645402;
		double airDistOutput3 = 9556.124161;
        
		double elapsedTimeOutput1 = 619.6773354;
		double elapsedTimeOutput2 = 10050.377789;
		double elapsedTimeOutput3 = 4500;
		
		printf("%lf\n",elapsedTime1);
		printf("%lf\n",elapsedTime2);
		printf("%lf\n",elapsedTime3);
		
	
         if(fabs(rads1 - radsOutput1)  <= Epsilon){
              printf("test cases passed\n");
	         }
           else {
			   printf("test cases failed\n");
		     }
	     if(fabs(rads2 - radsOutput2)  <= Epsilon){
              printf("test cases passed\n");
	         }
           else {
			   printf("test cases failed\n");
		     }
	
         if(fabs(rads3 - radsOutput3)  <= Epsilon){
              printf("test cases passed\n");
	         }
           else {
			   printf("test cases failed\n");
		     }	 
			 
		 if(fabs(airDist1 - airDistOutput1) <=Epsilon ){
              printf("test cases passed\n");
	         }
           else {
			   printf("test cases failed\n");
		     }
			 
		 if(fabs(airDist2 - airDistOutput2) <=Epsilon ){
              printf("test cases passed\n");
	         }
            else {
			   printf("test cases failed\n");
		     } 
         if(fabs(airDist3 - airDistOutput3) <=Epsilon ){
              printf("test cases passed\n");
	         }
            else {
			   printf("test cases failed\n");
		     }	 
			 
	     if(fabs(elapsedTime1 - elapsedTimeOutput1) <= Epsilon){
              printf("test cases passed\n");
	         }
           else {
			   printf("test cases failed\n");
		     }
     	 if(fabs(elapsedTime2 - elapsedTimeOutput2)<=Epsilon ){
              printf("test cases passed\n");
	         }
           else {
			   printf("test cases failed\n");
		     }
		 if((elapsedTime3 - elapsedTimeOutput3)<=Epsilon ){
              printf("test cases passed\n");
	         }
           else {
			   printf("test cases failed\n");
		     }	 
}

	