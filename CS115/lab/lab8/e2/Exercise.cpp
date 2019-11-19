// File name: ~ftp/pub/class/170/ftp/cpp/Inheritance/Exercise.cpp
// Purpose:   Exercise for inheritance lab

#include <iostream>
#include <math.h> // for sqrt()
using namespace std;

class TwoD
{
   protected:
      double x, y; // x and y  coordinates
   public: 
      // inline implementation of constructor
  TwoD(){x = y = 0.0; cout << "twoD default constructor" << endl;} // default constructor
  TwoD(double i, double j):x(i), y(j){cout << "twoD constructor with two arguments" << endl;} 
	
      // inline implementation of member functions
      void setX(double NewX){x = NewX;}
      void setY(double NewY){y = NewY;}
      double getX() const {return x;}
      double getY() const {return y;}
      // get distance of 2D points
  double getDistance (TwoD& point) const;
};

// calculate the distance  of two 2D points
double TwoD::getDistance(TwoD& point) const
{
   double point1[2];
   double point2[2];
   double dx, dy;
   double distance;

   point1[0] = x;
   point1[1] = y;

   point2[0] = point.getX();
   point2[1] = point.getY();

   dx = point2[0] - point1[0];
   dy = point2[1] - point1[1];

   distance = sqrt(dx * dx + dy * dy); 
   return distance;
}

class ThreeD:public TwoD
{
   private:
      double z;
   public: 

      // --->ADD CODE HERE<---:
      // Create a default inline constructor that reuses the constructor of
      // the TwoD class.
      // YOUR CODE GOES HERE
  ThreeD():TwoD(){z=0;}

      // --->ADD CODE HERE<---:
      // Create an inline constructor that initializes the 3D point
      // and reuses the TwoD class.
      // YOUR CODE GOES HERE
  ThreeD(double i, double j, double k):TwoD(i,j), z(k){};

      void setZ(double NewZ){z = NewZ;}
      double getZ() const {return z;}

      // get distance for two 3D points
      double getDistance(const ThreeD& point) const;
};

// --->ADD CODE HERE<---:
// Overload the definition of getDistance() of TwoD class so that it
// can calculate the distance between two 3D points
double ThreeD::getDistance(const ThreeD& point) const
{
   // YOUR CODE GOES HERE:
  double point1[3];
   double point2[3];
   double dx, dy, dz;
   double distance;

   point1[0] = x;
   point1[1] = y;
   point1[2] = z;

   point2[0] = point.getX();
   point2[1] = point.getY();
   point2[2] = point.getZ();

   dx = point2[0] - point1[0];
   dy = point2[1] - point1[1];
   dz = point2[2] - point1[2];

   distance = sqrt(dx * dx + dy * dy + dz * dz); 
   return distance;
}

// --->ADD CODE HERE<---:
// Implement a main() function.
// You should ask the user for the xyz coordinates of two 3D points,
// and then calculate and print out the distance between these two points.
int main()
{
   // YOUR CODE GOES HERE
  ThreeD point1;
  double x, y, z;

  cout << "This program asks for the coordinates of two points" << endl;
  cout << "int 3D space and calculates their distance." << endl;
  cout << "Please ener the xyz coordinates for the first point:" << endl;
  cin >> x >> y >> z;
  point1.setX(x);
  point1.setY(y);
  point1.setZ(z);
  cout << "Please enter the xyz coordinates for the second point:" << endl;
  cin >> x >> y >> z;
  ThreeD point2(x, y, z);

  cout << "Distance is: " << point1.getDistance(point2) << endl;

  return 0;
}
