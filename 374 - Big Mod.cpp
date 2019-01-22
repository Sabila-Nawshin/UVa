#include <cstdio>
using namespace std;

int bigMod(int B, int P, int M) {
    if (P == 0)
        return 1;

    int mid = (P/2);

    if (P % 2 == 0)
        return ((bigMod(B, mid, M) % M) * (bigMod(B, mid, M) % M)) % M;

    return ((B % M) * (bigMod(B, P - 1, M) % M)) % M;
}

int main() {
    int B, P , M;
    while(scanf ("%d%d%d", &B, &P, &M) != EOF) {
        printf("%d\n", bigMod(B, P, M));
    }

    return 0;
}
