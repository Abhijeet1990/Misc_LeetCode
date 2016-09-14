/**
 * Return an array of arrays of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

int** threeSum(int* nums, int numsSize, int* returnSize) {
    int k,m,i,j,temp,**array,count=0;
    
    //returnSize=&count;
    for(k=0;k<numsSize;k++)
    {
        for(m=k+1;m<numsSize;m++)
        {
            if(nums[k]>nums[m])
            {
                temp=nums[m];
                nums[m]=nums[k];
                nums[k]=temp;
                
            }
        }
        
    }
    
    //now the array is sorted
   for(k=0;nums[k]<=0;k++)
    {
        for(j=k+1;j<numsSize;j++)
        {
            for(i=j+1;i<numsSize;i++)
            {
                if(nums[k]+nums[j]+nums[i]==0)
                {   
                    count++;
                    
                }
            }
        }
    }
    
    array = malloc(count * sizeof(int *));
	
	for(i = 0; i < count; i++)
		{
		array[i] = malloc(3 * sizeof(int));
		}
    count=0;
    
    for(k=0;nums[k]<=0;k++)
    {
        for(j=k+1;j<numsSize;j++)
        {
            for(i=j+1;i<numsSize;i++)
            {
                if(nums[k]+nums[j]+nums[i]==0)
                {   
                    array[count][0]=nums[k];
                    array[count][1]=nums[j];
                    array[count][2]=nums[i];
                    count++;
                    
                }
            }
        }
    }
    
    return array;
}