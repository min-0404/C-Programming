#include <stdio.h>
#define SEED 17
int MULT = 25173;
int INC = 13849;
int MOD = 65536;
static unsigned int seed = SEED;

double f_rand(){
    seed = (MULT * seed * INC) % MOD;
    return seed/(double) MOD;
}
int main(){
    for(int i = 0; i<5; i++)
        printf("%lf \n", f_rand());
    return 0;

}