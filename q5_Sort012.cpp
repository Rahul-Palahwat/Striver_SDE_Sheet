#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int zero = 0 , one = 0 , two=0;
   for(int i=0;i<n;i++){
      int it = arr[i];
      if(it == 0){
         zero++;
      }else if(it == 1){
         one++;
      }else{
         two++;
      }
   }
   int i=0;
   while(zero--){
      arr[i] = 0;
      i++;
   }
   while(one--){
      arr[i] = 1;
      i++;
   }
   while(two--){
      arr[i] = 2;
      i++;
   }
   return;
}