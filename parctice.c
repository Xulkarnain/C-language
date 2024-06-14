int main()
{
    int n;
    for ( n = 1; n <= 10; n++)  
    {
        printf(" %d ",n);
        for (; n%3 == 0;)
        {
            printf(" %d %d ",n,n);
        }
    }
    return 0;
}