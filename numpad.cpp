/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

using namespace std;

#include <bits/stdc++.h>

// constraints
#define MAXN 1000000

// input data
int N;
char S[MAXN + 1];

int main() {
    //  uncomment the following lines if you want to read/write from files
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);

    assert(1 == scanf("%s", S));
    N = strlen(S);

    //int pad[4][3];
    int salti = 0;
    int x_part = 1;
    int y_part = 3;
    int x_dest;
    int y_dest;
    int num;

    for(int i = 0; i < N; i++) {
        num = S[i]-48;
        switch(num){
        case 0:
            x_dest = 1;
            y_dest = 3;
            break;
        case 1:
            x_dest = 0;
            y_dest = 0;
            break;
        case 2:
            x_dest = 1;
            y_dest = 0;
            break;
        case 3:
            x_dest = 2;
            y_dest = 0;
            break;
        case 4:
            x_dest = 0;
            y_dest = 1;
            break;
        case 5:
            x_dest = 1;
            y_dest = 1;
            break;
        case 6:
            x_dest = 2;
            y_dest = 1;
            break;
        case 7:
            x_dest = 0;
            y_dest = 2;
            break;
        case 8:
            x_dest = 1;
            y_dest = 2;
            break;
        case 9:
            x_dest = 2;
            y_dest = 2;
        }

        if(x_dest == x_part && y_dest == y_part)
            salti+=1;
        else
            salti += abs(x_part-x_dest) + abs(y_part-y_dest) + 1;

        x_part = x_dest;
        y_part = y_dest;

    }

    printf("%d", salti);  // change 42 with actual answer
    return 0;
}
