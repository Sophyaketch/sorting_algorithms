 #include "sort.h"                                                               
  2                                                                                 
  3 /**                                                                             
  4  * selection_sort - Sorts an array of integers in ascending order using         
  5  * the Selection Sort algorithm.                                                
  6  * @array: The array to be sorted.                                              
  7  * @size: The size of the array.                                                
  8  */                                                                             
  9 void selection_sort(int *array, size_t size)                                    
 10 {                                                                               
 11         unsigned int min, i, j, temp;                                           
 12                                                                                 
 13         for (i = 0; i < size - 1; i++)                                          
 14         {                                                                       
 15                 min = i;                                                        
 16                 for (j = i + 1; j < size; j++)                                  
 17                 {                                                               
 18                         if (array[j] < array[min])                              
 19                         {                                                       
 20                                 min = j;                                        
 21                         }                                                       
 22                 }                                                               
 23                                                                                 
 24                 if (min != i)                                                   
 25                 {                                                               
 26                         temp = array[i];                                        
 27                         array[i] = array[min];                                  
 28                         array[min] = temp;                                      
 29                                                                                 
 30                         print_array(array, size);                               
 31                 }                                                               
 32         }                                                                       
 33 }                                                                               
~                                                                                         
~                                                                                         
~                                               
