///7. Write a function in C to print all unique elements in an array.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr1[100], n,ctr=0;
    int i, j, k;
       printf("\n\nPrint all unique elements of an array:\n");

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr1[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=0, k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 c++;
               }
             }
        }
       if(c==0)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}


