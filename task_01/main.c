#include <stdio.h>

int main()
{
    unsigned int n;
    int n_max;
    unsigned int q_max = 1;
    scanf("%u", &n);
    scanf("%d", &n_max);
    n--;
    for(;n;n--);
    {
        int n_out;
        scanf("%d", &n_out);
        if(n_out > n_max)
        {
            n_max = n_out;
            q_max = 1;
        }
        else if(n_out == n_max)
        {
            q_max++;
        }
    printf("%u", q_max);
    return 0;
}
