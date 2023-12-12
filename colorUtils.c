#include<stdlib.h>
#include<stdio.h>
#include<math.h>
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

return  (max(r,g,b) + min(r,g,b))/2;
}

int toGrayScaleLuminosity(int r, int g,int b)
{
  //GrayScaleLuminosity
  return  round(0.21*r+0.72*g+0.07*b);
}



//three func of sepia(red,green,blue)

int toSepiaRed(int r, int g,int b){

return round(0.393*r +0.769*g+ 0.189*b);
}
int toSepiaGreen(int r, int g,int b){
return round(0.349*r+0.686*g+0.131*b);
}
int toSepiaBlue(int r, int g,int b){
return round(0.272*r+0.534*g+0.131*b);
}
int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}
