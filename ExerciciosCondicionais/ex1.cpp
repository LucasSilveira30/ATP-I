#include <iostream>
using namespace std;

int main() {
    int d1, m1, a1, d2, m2, a2;
    cin >> d1 >> m1 >> a1;
    cin >> d2 >> m2 >> a2;

    if (a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2)) {
        cout << "A maior data é " << d1 << "-" << m1 << "-" << a1;
    } else if (a2 > a1 || (a1 == a2 && m2 > m1) || (a1 == a2 && m1 == m2 && d2 > d1)) {
        cout << "A maior data é " << d2 << "-" << m2 << "-" << a2;
    } else {
        cout << "As datas são iguais !";
    }

    return 0;
}
