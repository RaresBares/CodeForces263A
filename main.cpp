#include <iostream>

using namespace std;


int main() {


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int k;
            cin >> k;

            if (k == 1) {


                int dl = i + 1 - 3;
                int db = j + 1 - 3;
                if (db < 0)
                    db *= -1;

                if (dl < 0)
                    dl *= -1;

                cout << dl + db;
                break;
            }

        }
    }


    return 0;
}
