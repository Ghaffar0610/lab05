
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int min(int x,int y,int z){
    int m = x < y ? x : y;
  m = m < z ? m : z;
  return m;
}


int toGrayScaleLightness(int r , int g, int b){
//lightness tech  (max(r,g,b)+min(r,g,b))/2;

return  (max(r,g,b)+min(r,g,b))/2;
}

int toGrayScaleLuminosity(int r, int g,int b)
{
  //GrayScaleLuminosity
  return 0.21*r+0.72*g+0.07*b;
}
int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}
