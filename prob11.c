int maxArea(int* height, int heightSize) {
    
    int max=0,prod,x;
    for(int i=0;i<heightSize;i++)
    {
        for(int j=i+1;j<heightSize;j++){
        x=(height[i]<height[j])?height[i]:height[j];
        prod=(j-i)*x;
        if(prod>max)
        max=prod;
    }
    }
    return max;
}