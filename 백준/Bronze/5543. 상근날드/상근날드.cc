#include <iostream>

using namespace std;

int main(void)
{
    int b[3], d[2];
    cin >> b[0] >> b[1] >> b[2] >> d[0] >> d[1];
    int minB = b[0], minD = d[0];
    for(int i = 0 ; i < 3; i++){
        if(minB > b[i])
            minB = b[i];
    }
    for(int j = 0; j < 2; j++){
        if(minD > d[j])
            minD = d[j];
    }
    
    cout << minB + minD - 50;
    return 0;
}