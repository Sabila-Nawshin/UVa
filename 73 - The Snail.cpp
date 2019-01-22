#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    //freopen ("input.txt", "r", stdin);

    double H, U, D, F;

    while (true) {
        cin >> H >> U >> D >> F;

        if (!H) break;

        double dis = 0, dayCount = 1;
        bool flag = false;

        F /= 100.0;
        F *= U;

        while (true){
            dis += U;
            if (dis > H)
                break;

            dis -= D;
            //cout << dis << endl;
            if (dis < 0)
                break;

            U -= F;
            if (U < 0) {
                U = 0;
            }


            dayCount++;
        }

        if (dis >= 0)
            cout << "success on day " << dayCount << endl;
        else
            cout << "failure on day " << dayCount << endl;

    }

    return 0;
}
