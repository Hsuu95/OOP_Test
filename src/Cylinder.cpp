# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iomanip>
# include <cmath>

//const double PI = M_PI;

double Cylinder :: SurfaceArea()
{ 
  double ans;	
  ans = M_PI * radius * radius * 2 + M_PI * 2 * height*radius ;//  
  return ans;
}

double Cylinder :: Volume()
{
  double ans;
  ans = M_PI * 1 * radius * radius * height;
  return ans;
}

double Cylinder :: Circumference()
{
  double ans;
  ans = M_PI * 2 * radius ; 
  return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
  in>>cldr.radius;
  in>>cldr.height;
  return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
  out<<"Circumference: "<<fixed<<showpoint<<setprecision(3)<<cldr.Circumference()<<endl;
  out<<"SurfaceArea: "<<fixed<<showpoint<<setprecision(3)<<cldr.SurfaceArea()<<endl;
  out<<"Volume: "<<fixed<<showpoint<<setprecision(3)<<cldr.Volume()<<endl;
  return out;
}

# endif
