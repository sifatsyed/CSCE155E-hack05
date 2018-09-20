/* This program contains the definitions of the
*  functions declared earlier in another module
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include"utils.h"


   double degreesToRadians(double degree) {
     
	 //definition of the function
     
	 return (degree* M_PI)/180; //value is returned here
}

  double getAirDistance(double originLatitude, double originLongitude,
                      double destinationLatitude,
                      double destinationLongitude) {
    
	//definition of function 
	
	double latitudeRadiansA, latitudeRadiansB, longitudeRadiansA, 
	       longitudeRadiansB, differenceOfLongitudes, sinOfLatitudes,
		   cosOfLatitudes, result;
	
	latitudeRadiansA = (originLatitude/180.0) * (M_PI);

	latitudeRadiansB = (destinationLatitude/180.0) * (M_PI);

	longitudeRadiansA = (originLongitude/180.0) * (M_PI);

	longitudeRadiansB = (destinationLongitude/180.0) * (M_PI);
	
	differenceOfLongitudes = longitudeRadiansB - longitudeRadiansA; 

	sinOfLatitudes = sin(latitudeRadiansA) * sin(latitudeRadiansB);

	cosOfLatitudes = cos(latitudeRadiansA) * cos(latitudeRadiansB);

	result = (acos(sinOfLatitudes +  cosOfLatitudes * cos(differenceOfLongitudes)) * 6371.0);
	
	return result;

  }
  
   double lorentzTimeDilation(double t, double percentC) {
	  
	 double elapsedTime, denominatorCalculation, percentCSquare; 
    
	  percentCSquare = pow(percentC,2);
      denominatorCalculation = sqrt(1-percentCSquare);
      elapsedTime = t/denominatorCalculation;
    
    return elapsedTime; 
   
   }