#include <stdio.h>

int main()
{
      int arr[10];
  int nums, i , j,count=0;
  
  //Finding total no. of duplicate element of an arrat//
  
  printf ("\tFind all the elements stored in an array\n");
  printf ("\t______________________________________\n");

  printf ("Input no. of elements stored in an array : ");
  scanf ("%d", &nums);

  printf ("\nInput %d elements in the array : \n", nums);

  for (i = 0; i<nums ; i++)
    {
      printf ("Element- %d : ", i+1);
      scanf("%d",&arr[i]);
    }
    for(i=0; i < nums; i++){
        
         for(j=i+1;j<nums;j++){
             
              if(arr[i]==arr[j]){
                  count++;
                   
                   break;
              }
             
           
        }
    }
    
    printf("The no. of duplicate elements in this array are : %d", count);
    

    return 0;
}

