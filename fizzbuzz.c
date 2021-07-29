char ** fizzBuzz(int n, int* returnSize){

    int i;
    
    *returnSize = n;
    char **str = (char**)malloc(sizeof(char*)*n);
    for (int i = 0; i < n; i++) {
       str[i] = (char*)malloc(sizeof(char) * 9);
	}

    for(i = 1;i<=n;i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            strcpy(&str[i - 1][0],"FizzBuzz");
        }
        else if(i % 3 == 0)
        {
            strcpy(&str[i-1][0],"Fizz");
        }
        else if(i % 5 == 0)
        {
            strcpy(&str[i-1][0], "Buzz");
        }
        else 
        {
            sprintf(&str[i-1][0] ,"%i",i);
        }
    }
    return str[0];
}
