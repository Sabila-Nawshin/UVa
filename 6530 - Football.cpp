#include <iostream>
#include <algorithm>
using namespace std;

struct Goal{
    int S, R;
    int diff;
};

bool cmp(Goal A, Goal B){
    return A.diff < B.diff;
}

int main(){
    int N, G;

    while(cin >> N >> G){
        Goal g[N];

        for (int i = 0; i < N; i++){
            int S, R;
            cin >> S >> R;
            g[i].S = S;
            g[i].R = R;
            g[i].diff = R - S;
        }

        sort(g, g + N, cmp);

        long long point = 0;
        for (int i = 0; i < N; i++){
            if (g[i].diff < 0)
                point += 3;
            else if (G - g[i].diff >= 0){
                    if (G - g[i].diff == 0) point += 1;
                    else{
                        point += 3;
                        G --;
                    }
                    G -= g[i].diff;
            }
        }

        cout << point << endl;
    }

    return 0;
}
