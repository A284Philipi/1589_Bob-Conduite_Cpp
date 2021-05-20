#include <iostream>

using namespace std;

int main()
{
    int casos, cont = 0, a, b, rt;
    cin >> casos;
    while (cont < casos){
        cin >> a;
        cin >> b;
        rt = a + b;
        cout << rt <<endl;
        cont++;
    }
    return 0;
}
