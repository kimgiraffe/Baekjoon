#include <iostream>
using namespace std;

int M, N;

bool first;

int firstSquare;

int getSum(void)
{
        int sum = 0;
        //10000은 100의 제곱
        for (int i = 1; i <= 100; i++)
        {
                 int square = i * i;
                 //범위 내에 있다면
                 if (square >= M && square <= N)
                 {
                         //첫 번째 제곱수라면
                         if (!first)
                         {
                                 firstSquare = square;
                                 first = true;
                         }
                         sum += square;
                 }
        }

        if (sum)
                 return sum;
        else
                 return -1;
}

int main(void)
{
        cin >> M >> N;
        first = false;
        cout << getSum() << endl;
        if(first)
                 cout << firstSquare << endl;
        return 0;
}