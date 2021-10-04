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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
#define SIZE (40)
void sort_array(unsigned char test[]) {
       int i = 0, j = 0;
       unsigned char temp = 0;
       for (j = 0; j < SIZE; j++) {
               for (i = 0; i < SIZE; i++) {
                       if (test[j] > test[i]) {
                               temp = test[j];
                               test[j] = test[i];
                               test[i] = temp;

                       }
               }
               
       }
}
void print_statistics(int median, int mean, int maximum, int minimum) {
       printf("Median = %i; \t Mean = %i; \t Maximum = %i; \t Minimum = %i\n", median, mean, maximum, minimum);
}

void print_array(unsigned char test[]) {
       int i = 0;
       for (i = 0; i < SIZE; i++) {
               printf("%i\t%i\n", test[i], i);
       }
}
 
int find_maximum(unsigned char test[]) {
       int i = 0, maximum = 0;
       for(i = 0; i < SIZE; i++) {
               if(maximum < test[i]) {
                       maximum = test[i];
               }
       }
}

int find_minimum(unsigned char test[]) {
       int i = 0, minimum = 0;
       for(i = 0; i < SIZE; i++) {
               if(minimum < test[i]) {
                       minimum = test[i];
               }
       }
       return minimum;
}

int find_median(unsigned char sorted_array[]) {
       int i = 0, median = 0;
       if (SIZE % 2 == 0) {
               median = sorted_array[SIZE/2] + sorted_array[SIZE/2 - 1];
       } else {
               median = sorted_array[(SIZE - 2) / 2];
       }
       return median;
}
 
int find_mean(unsigned char test[]) {
       int i = 0, mean = 0;
       for(i = 0; i < SIZE; i++) {
               mean = mean + test[i];
       }
       mean = mean / (SIZE + 1);
       return mean;
 }





#endif /* __STATS_H__ */
