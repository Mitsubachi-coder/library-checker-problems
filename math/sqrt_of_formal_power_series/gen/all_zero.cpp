#include <iostream>
#include "random.h"

using namespace std;
using ll = long long;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = gen.uniform(1, 500'000);
    
    printf("%d\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d", 0);
        if (i != n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
