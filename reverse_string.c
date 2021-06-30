

void reverseString(char* s, int sSize){

    int i,j;
    
    for(i = 0,j = sSize - 1;i<j;i++,j--)
    {
        s[i] = s[i] ^ s[j];
        s[j] = s[i] ^ s[j];
        s[i] = s[i] ^ s[j];
    }
    
    printf("[");
    for(i = 0;i<sSize-1;i++)
    {
        
        printf("\"%c\",",s[i]);
        
    }
    printf("\"%c\"]",s[i]);
}
