/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Various statistic functions implementation and basic usage
 *
 * Main function defines an arbitrary array and tests the various statistics functions
 * implemented in the file
 *
 * @author Max Romanov
 * @date 21-Jul-2022
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

void sort_array(unsigned char * array, unsigned int length){
  unsigned char temp;
  unsigned int i, j;
  for(i=0; i<length-1; i++){
    for(j=i+1; j<length; j++){
      if(array[i]< array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

unsigned char find_median(unsigned char * array, unsigned int length){
  unsigned char * temp = malloc(length * sizeof(array));
  unsigned int i;
  for(i=0; i<length; i++){
    temp[i] = array[i];
  }
  sort_array(temp, length);
  if(length%2==0){
    length = (length-2)/2;
  }
  else {
    length = (length-1)/2;
  }
  return temp[length];
}

float find_mean(unsigned char * array, unsigned int length){
  unsigned int sum = 0;
  unsigned int i;
  for(i=0; i<length; i++){
    sum = sum + array[i];
  }
  return sum / length;
}

unsigned char find_maximum(unsigned char * array, unsigned int length){
  unsigned char temp;
  unsigned int i = 0;
  temp = array[0];
  for(i=1; i<length; i++){
    if(temp < array[i]){
      temp = array[i];
    }
  }
  return temp;
}

unsigned char find_minimum(unsigned char * array, unsigned int length){
  unsigned char temp;
  unsigned int i = 0;
  temp = array[0];
  for(i=1; i<length; i++){
    if(temp > array[i]){
      temp = array[i];
    }
  }
  return temp;
}

void print_array(unsigned char * array, unsigned int length){
  unsigned int i;
  for(i=0; i<length; i++){
    printf("%i", array[i]);
    if(i<length-1){printf(",");}
  }
  printf("\n");
}

void print_statistics(unsigned char * array, unsigned int length){
  printf("Array statistics:\nMedian: %i\nMean: %.2f\nMaximum: %i\nMinimum: %i\n", 
          find_median(array,length),find_mean(array,length),find_maximum(array,length),find_minimum(array,length));
}

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test, SIZE);

  sort_array(test, SIZE);
  printf("Sorted array: \n");
  print_array(test, SIZE);

}

