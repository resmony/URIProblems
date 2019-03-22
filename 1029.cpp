#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int> fibonacci(int n, int &i) {
    if (n < 2) return make_tuple(n, i);
    return make_tuple(get<0>(fibonacci(n-1, ++i)) + get<0>(fibonacci(n-2, ++i)), i);
}

int main(int argc, char** argv) {
    int nums, value, i;
    cin >> nums;

    for (auto j = 0; j < nums; j++) {
        cin >> value;
        auto out = fibonacci(value, i=0);
        printf("fib(%d) =   %u  calls   =   %d\n", value, get<1>(out), get<0>(out));
    }

    return EXIT_SUCCESS;
}