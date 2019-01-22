#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

struct RFP {
    string name;
    float compliance;
    float cost;

};

int main() {
    int n, p, count = 1;
    string tempo;

    while(true) {
        cin >> n >> p;
        getchar();

        if (!n && !p)
            break;
        else if (count != 1)
            cout << "\n";

        for (int i = 0; i < n; i++) {
            getline(cin, tempo);
        }
        //cout << "here\n";

        RFP temp, maxm;
        maxm.compliance = -1;
        maxm.cost = 999999999999.00;
        int met_req;

        for (int i = 0; i < p; i++) {
            getline(cin, temp.name);

            cin >> temp.cost >> met_req;
            getchar();

            for (int j = 0; j < met_req; j++) {
                getline(cin, tempo);
            }
            temp.compliance = (met_req / (double)n);

            if (temp.compliance > maxm.compliance){
                maxm = temp;
            }
            else if (temp.compliance == maxm.compliance && temp.cost < maxm.cost) {
                    maxm = temp;
            }
        }

        cout << "RFP #" << count++ << endl;
        cout << maxm.name << "\n";

    }

    return 0;
}
