#include "find_min_max.h"
#include <stdio.h>
#include <limits.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  struct MinMax min_max;
  min_max.min =min_max.max=array[0];
  for(int i=0;i<end;++i){
    if(min_max.min>array[i]){
	min_max.min=array[i];}
    if(min_max.max<array[i]){
        min_max.max=array[i];}
}

 return min_max;
}
