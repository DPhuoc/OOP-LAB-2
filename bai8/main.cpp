#include <iostream>
#include "List.h"

using namespace std;

int main() {
    List list;
    int n;

    while (true) {
        cin >> n;

        if (n == -1) {
            break;
        }

        switch (n) {
            case 0: {
                double x;
                cin >> x;
                list.push_back(x);
                break;
            }
            case 1: {
                double x;
                cin >> x;
                list.pop_first(x);
                break;
            }
            case 2: {
                double x;
                cin >> x;
                list.pop_all(x);
                break;
            }
            case 3: {
                int x;
                double y;
                cin >> x >> y;
                list.replace_at(x, y);
                break;
            }
            default:
                cout << "Invalid input." << endl;
        }
    }

    cout << list.toString() << endl;

    return 0;
}
