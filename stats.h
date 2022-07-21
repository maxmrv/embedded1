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
 * @file stats.h 
 * @brief Declarations for numerous statistics functions
 *
 * This header contains declarations for the basic statistics functions in the W1 excercise
 *
 * @author Max Romanov
 * @date 21-Jul-2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array
 * 
 * This function receives as input a pointer to the array, and its length and prints 
 * out median, mean, maximum and minimum
 *
 * @param array pointer to the array
 * @param length the length of the array
 *
 * @return None
 */
void print_statistics(unsigned char * array, unsigned int length);

/**
 * @brief Prints the array to the screen
 *
 * Given a pointer to the array and its length, the function prints the array to the screen
 *
 * @param @param array pointer to the array
 * @param length the length of the array
 *
 * @return None
 */
void print_array(unsigned char * array, unsigned int length);

/**
 * @brief Finds the array's median
 *
 * Given a pointer to the array and its length, the function returns the array's median
 *
 * @param @param array pointer to the array
 * @param length the length of the array
 *
 * @return The median of the array as unsinged char
 */
unsigned char find_median(unsigned char * array, unsigned int length);

/**
 * @brief Finds the array's mean
 *
 * Given a pointer to the array and its length, the function returns the array's mean
 *
 * @param @param array pointer to the array
 * @param length the length of the array
 *
 * @return The mean of the array as float
 */
float find_mean(unsigned char * array, unsigned int length);

/**
 * @brief Finds the array's maximum
 *
 * Given a pointer to the array and its length, the function returns the array's maximum value
 *
 * @param @param array pointer to the array
 * @param length the length of the array
 *
 * @return The max value of the array as unsinged char
 */
unsigned char find_maximum(unsigned char * array, unsigned int length);

/**
 * @brief Finds the array's minimum
 *
 * Given a pointer to the array and its length, the function returns the array's minimum value
 *
 * @param @param array pointer to the array
 * @param length the length of the array
 *
 * @return The min value of the array as unsinged char
 */
unsigned char find_minimum(unsigned char * array, unsigned int length);

/**
 * @brief Sorts the array in descending order
 *
 * Given a pointer to the array and its length, the function sorts the array from largest to smallest elements
 *
 * @param @param array pointer to the array
 * @param length the length of the array
 *
 * @return None
 */
void sort_array(unsigned char * array, unsigned int length);

#endif /* __STATS_H__ */
