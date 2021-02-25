char * reverseOnlyLetters(char * S){

    int i,j;
    int len = strlen(S);
    char temp;
    for(i = 0,j = len - 1;i<j;)
    {
        if(!((S[i] >= 'a' && S[i] <= 'z') || S[i] >= 'A' && S[i] <= 'Z'))
        {
            i++;
        }
        else if(!((S[j] >= 'a' && S[j] <= 'z') || S[j] >= 'A' && S[j] <= 'Z'))
        {
            j--;
        }
        else
        {
            temp = S[i];
            S[i] = S[j];
            S[j] = temp;
            i++;
            j--;
        }
    }
    return S;
}
