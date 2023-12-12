/**
 * This program performs several ad-hoc unit
 * tests on the color utils library.
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#include "colorUtils.h"

#define DELTA 0.0001

/**
 * This function returns true if the two given
 * values a, b are within DELTA of each other.
 */
int isClose(double a, double b);

int main(int argc, char **argv) {

  int reportPass = 0;
  if(argc == 2) {
    printf("Usage: %s [-reportPass] - optional argument to report number of passing test cases as the exit code.", argv[0]);
    if( strcmp(argv[1], "-reportPass") == 0) {
      reportPass = 1;
    } else {
      printf("ERROR: invalid command line argument: %s\n", argv[1]);
      exit(1);
    }
  }

  int r, g, b, c;
  int x = 10, y = 20, z = 30;
  int result;
  int expectedResult;
  double expectedD, actualD;
  int numPassed = 0;
  int numFailed = 0;

  c = 123;
  expectedD = 0.4823;
  printf("TESTING: rgbIntToFloat(%d): ", c);
  actualD = rgbIntToFloat(c);
  if(!isClose(expectedD, actualD)) {
    printf("FAILED: returned %f, expected %f\n", actualD, expectedD);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  c = 53;
  expectedD = 0.2078;
  printf("TESTING: rgbIntToFloat(%d): ", c);
  actualD = rgbIntToFloat(c);
  if(!isClose(expectedD, actualD)) {
    printf("FAILED: returned %f, expected %f\n", actualD, expectedD);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", x, y, z);
  result = max(x, y, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", x, z, y);
  result = max(x, z, y);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", y, x, z);
  result = max(y, x, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", y, z, x);
  result = max(y, z, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, x, y);
  result = max(z, x, y);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, y, x);
  result = max(z, y, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", x, x, z);
  result = max(x, x, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", x, z, x);
  result = max(x, z, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, x, x);
  result = max(z, x, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, z, z);
  result = max(z, z, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 255, g = 0, b = 0;
  expectedResult = 85;
  printf("TESTING: toGrayScaleAverage(%d,%d,%d): ", r, g, b);
  result = toGrayScaleAverage(r, g, b);
  if(result != expectedResult) {
    printf("FAILED: toGrayScaleAverage returned %d, expected %d\n", result, expectedResult);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 100, g = 39, b = 40;
  expectedResult = 60;
  printf("TESTING: toGrayScaleAverage(%d,%d,%d): ", r, g, b);
  result = toGrayScaleAverage(r, g, b);
  //TODO: this test case will fail, why?
  if(result != expectedResult) {
    printf("FAILED: toGrayScaleAverage returned %d, expected %d\n", result, expectedResult);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  //TODO: add your test cases here:
  //      -at least one for each function
  //        min(), toGrayScaleLightness(), toGrayScaleLuminosity(),
  //        toSepiaRed(), toSepiaGreen(), toSepiaBlue()
  //       for at least 6 and a total of at least 20

// Minimum Function

printf("TESTING: min(%d,%d,%d): ", x, y, z);
  result = min(x, y, z);
  if(result != 10) {
    printf("FAILED: min returned %d, expected 10\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

//lightness function
r = 20, g = 25, b = 30;
  expectedResult = 25;
  printf("TESTING: toGrayScaleLightness(%d,%d,%d): ", r, g, b);
  result = toGrayScaleLightness(r, g, b);
  
  if(result != expectedResult) {
    printf("FAILED: toGrayScaleLightness returned %d, expected %d\n", result, expectedResult);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }
// lumi function
r = 50, g = 78, b = 55;
  expectedResult = 71;
  printf("TESTING: toGrayScaleLuminosity(%d,%d,%d): ", r, g, b);
  result = toGrayScaleLuminosity(r, g, b);
  
  if(result != expectedResult) {
    printf("FAILED: toGrayScaleLuminosity returned %d, expected %d\n", result, expectedResult);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }
// Sepia red funct
r = 17, g = 11, b = 32;
  expectedResult = 21;
  printf("TESTING: toSepiaRed(%d,%d,%d): ", r, g, b);
  result = toSepiaRed(r, g, b);
  
  if(result != expectedResult) {
    printf("FAILED: toSepiaRed returned %d, expected %d\n", result, expectedResult);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }
  // Sepia green funct
r = 27, g = 33, b = 52;
  expectedResult = 39;
  printf("TESTING: toSepiaGreen(%d,%d,%d): ", r, g, b);
  result = toSepiaGreen(r, g, b);
  
  if(result != expectedResult) {
    printf("FAILED: toSepiaGreen returned %d, expected %d\n", result, expectedResult);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }
  // Sepia blue funct
r = 33, g = 43, b = 60;
  expectedResult = 40;
  printf("TESTING: toSepiaBlue(%d,%d,%d): ", r, g, b);
  result = toSepiaBlue(r, g, b);
  
  if(result != expectedResult) {
    printf("FAILED: toSepiaBlue returned %d, expected %d\n", result, expectedResult);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }
  printf("Number Test Cases Passed: %6d\n", numPassed);
  printf("Number Test Cases Failed: %6d\n", numFailed);
  printf("Percent Passed:           %6.2f\n", 100.0 * numPassed / (numPassed + numFailed));

  if(reportPass) {
    return numPassed;
  } else {
    return numFailed;
  }

}

int isClose(double a, double b) {
  return (fabs(a-b) < DELTA);
}

  //OUTPUT

// PS C:\Users\hp\OneDrive\Desktop\PF LAB WORK\CSCE155-C-Lab05> make colorUtilsTester      
// gcc -std=gnu99 -Wall colorUtils.o colorUtilsTester.c -o colorUtilsTester -lm
// PS C:\Users\hp\OneDrive\Desktop\PF LAB WORK\CSCE155-C-Lab05> .\colorUtilsTester.exe
// TESTING: rgbIntToFloat(123): PASSED
// TESTING: rgbIntToFloat(53): PASSED
// TESTING: max(10,20,30): PASSED
// TESTING: max(10,30,20): PASSED
// TESTING: max(20,10,30): PASSED
// TESTING: max(20,30,10): PASSED
// TESTING: max(30,10,20): PASSED
// TESTING: max(30,20,10): PASSED
// TESTING: max(10,10,30): PASSED
// TESTING: max(10,30,10): PASSED
// TESTING: max(30,10,10): PASSED
// TESTING: max(30,30,30): PASSED
// TESTING: toGrayScaleAverage(255,0,0): PASSED
// TESTING: toGrayScaleAverage(100,39,40): FAILED: toGrayScaleAverage returned 59, expected 60
// TESTING: min(10,20,30): PASSED
// TESTING: toGrayScaleLightness(20,25,30): PASSED
// TESTING: toGrayScaleLuminosity(50,78,55): PASSED
// TESTING: toSepiaRed(17,11,32): PASSED
// TESTING: toSepiaGreen(27,33,52): PASSED
// TESTING: toSepiaBlue(33,43,60): PASSED
// Number Test Cases Passed:     19
// Number Test Cases Failed:      1
// Percent Passed:            95.00