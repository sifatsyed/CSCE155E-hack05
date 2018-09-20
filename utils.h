/* This function converts degrees to radians
* using the formula
* (degrees*pi)/180
*/
double degreesToRadians(double degree);

/* This function computes the air distance
* between two locations identified by their
* latitudes and longitudes using the spherical
* law of cosines :
* d = arccos (sin(1) sin(2) + cos(1) cos(2) cos())  R
*/
double getAirDistance(double originLatitude, double originLongitude,
                      double destinationLatitude, 
                      double destinationLongitude);

/* This function computes the dilated time given the normal time t
* (units may vary) and the percentage of the speed of light using
* Lorentz Equation :
* T = t/[(1-{(v)^2/(c)^2})]^(1/2)
*/
double lorentzTimeDilation(double t, double percentC);
