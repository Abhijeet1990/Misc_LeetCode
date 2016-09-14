char* convert(char* s, int numRows) {
    
    int n = 0,j,k=0;
    int len=strlen(s);
    int seq[len];
    int checkEorO=0;
	int newArray[]={};
    while(n<len)
    {
    if(checkEorO % 2 == 0)
    {   
        checkEorO++;
        for(j=0;j<numRows;j++){
            
                 seq[n]=j;
				 n++;
                 }
            
        
        
    }
    if(checkEorO %2 == 1)
    
    {   checkEorO++;
         for(j=numRows-1; j>0;j--){
        
            
                 seq[n]=j;
                 n++;
                 }
                 
        }
        
}//while
 for(int j=0;j<numRows;j++) {

                    for(int i=0;i<len;i++){
                            if(seq[i]== j)
                                    {printf("%c",s[i]);
                                    /*strcat(newArray,s[i]);*/}
                    }
            }
return newArray;

}
