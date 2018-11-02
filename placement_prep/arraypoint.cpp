
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int processArray(int array[], int len) {
  /* 
   * Do not make any changes outside this function.
   *
   * Modify this function to process `array` as indicated
   * in the question. At the end, return the appropriate
   * value.
   *
   * Do not print anything in this function
   * Do not write anything to the standard output
   *
   * Submit this entire program (not just this function)
   * as your answer
   */

  if(len==1)
    return 0;
  int prev = array[0];
  int  f=1,s=0,max_ans,ans_cnt=0,cnt=1;

  for (int i = 1; i < len; ++i)
  {
    if(prev<=array[i]){
      cnt++;
      s +=(array[i]-prev);

      if(cnt>ans_cnt){
        ans_cnt = cnt;
        max_ans = s;
      }
      prev = array[i]; 
    }else{
      s=0;
      prev = array[i];
      cnt=1;
    }
  }
  int min_cnt=0,min_ans=0;
  s =0;
  cnt=1;
  prev = array[0];
  for (int i = 1; i < len; ++i)
  {
    if(prev>=array[i]){
      cnt++;
      s +=(prev - array[i]);

      if(cnt>min_cnt){
        min_cnt = cnt;
        min_ans = s;
      }
      prev = array[i]; 
    }else{
      s=0;
      prev = array[i];
      cnt=1;
    }
  }
  int ans=0;
  if(min_cnt>ans_cnt){
    ans = min_ans;
  }
  else if(min_cnt==ans_cnt){
    if(max_ans<=min_ans)
      ans = min_ans;
    else
    ans = max_ans;
  }else
    ans = max_ans;
  
  return ans;
 // return 0;
}

int main() {
  int *array;
  int len = 0, maxsize = 1024, i, input;
  int result;
  array = (int *)malloc(maxsize*sizeof(int));
  while(scanf("%d", &input) == 1) {
    if (input < 0) break; /* Stop when a negative number is entered */
    array[len++] = input;
    if (len == maxsize) { /* array is full. increase size */
      maxsize *= 2;
      array = (int *)realloc(array, maxsize*sizeof(int));
    }
  }
  result = processArray(array, len);
  printf("%d\n", result);
  return 0;
}
