bool isPalindrome(int x) {
    int y=0;
    int t=x;
    while(t!=0)
    {
        y=y*10;
        y+=(t%10);
        t=t/10;
    }
    if((y==x)&& x>=0)
    return true;
    else 
    return false;
    
}