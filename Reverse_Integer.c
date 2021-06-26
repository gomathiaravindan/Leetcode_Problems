
int reverse(int x){

    long long int sum = 0,rem;
    
    while(x != 0)
    {
        rem = x % 10;
        sum = sum * 10 + rem;
        x/=10;
    }
    
    if(sum >= -pow(2,31) && sum <= pow(2,31))
        return sum;
    else
        return 0;
}
