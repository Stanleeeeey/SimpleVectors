#include <iostream>
#include <cmath>

class vector2D{
public:
  int x;
  int y;

  vector2D(int x1, int y1){
    x = x1;
    y = y1;
  }

  void Add(vector2D add){
    x += add.x;
    y += add.y;
  }

  float GetDegree(){
    double tg = y/x;
    return atan(tg)* (180.0/(atan(1)*4));
  }

  float GetRadian(){
    double tg = y/x;
    return atan(tg);
  }

  int Scalar(vector2D Scalar){
    x *= Scalar.x;
    y *= Scalar.y;
    return x+y;
    
  }

  void Minus(vector2D minus){
    x -= minus.x;
    y -= minus.y;
    Add(minus);
  }

  void Multipy(int z){
    x *= z;
    y *= z;
  }

  float length(){
    float ans = sqrt(x*x + y*y);
    return ans;
  }

  void pow(int pow){
  vector2D ans = vector2D(1,1);
   for(int i = 0; i < pow; i++){
     ans.x *= x;
     ans.y *= y;
   } 
    x = ans.x;
    y = ans.y;
  }
};
