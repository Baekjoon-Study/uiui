#include <stdio.h>

int main (void)
{
    long long int fixed_cost;
    long long int variable_cost;
    long long int laptop_cost;
    long long int break_even_point;

    scanf("%lld %lld %lld",&fixed_cost,&variable_cost,&laptop_cost);

    if (variable_cost>=laptop_cost) printf("-1");
    else {
        break_even_point = fixed_cost/(laptop_cost - variable_cost)+1;    
        printf("%lld",break_even_point);
    }
    return 0;
}