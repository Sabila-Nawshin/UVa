#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

struct Direction {
    char axis;
    char sign;
};

int main() {
    int n;

    while (true) {
        scanf("%d", &n);
        getchar();

        if (n == 0) break;

        Direction d[n];
        char temp[3];

        for (int i = 0; i < n - 1; i++) {
            scanf ("%s", temp);
            d[i].sign = temp[0];
            d[i].axis = temp[1];
        }

        Direction dir;
        dir.axis = 'x';
        dir.sign = '+';

        for (int i = 0; i < n - 1; i++) {
            if (d[i].sign == 'N')
                continue;

            if ((dir.axis == 'x' && d[i].sign == '-') || ( dir.axis == d[i].axis && d[i].sign == '+')) {
                if (dir.sign == '+') dir.sign = '-';
                else dir.sign = '+';
            }

            if(dir.axis == 'x') dir.axis = d[i].axis;
            else if(dir.axis == d[i].axis) dir.axis = 'x';

        }

        cout << dir.sign << dir.axis << endl;
    }

    return 0;
}
