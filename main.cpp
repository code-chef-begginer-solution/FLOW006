#include <bits/stdc++.h>

int main(int argc, char* argv[]) {

    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    /* get the test_case */
    size_t test_case;
    std::cin >> test_case;

    /* navigate through each test_case */
    while (test_case--) {
        /* get the number */
        size_t number;
        std::cin >> number;

        /* find out the digit_sum */
        size_t digit_sum{0};

        /* loop through each digit */
        while (number != 0) {
            /* extract the last digit */
            digit_sum += (number % 10);

            /* reduce number by eliminating the
             * last digit i.e. processed digit */
            number /= 10;
        }

        /* print the digit_sum */
        std::cout << digit_sum << std::endl;
    }
    return 0;
}