
//Given two integers X and N, print the value X on the screen N times.
// Move to the next line after printing, even if N = 0.
class Solution {
public:
    void printX(int X, int N) {
        for (int i = 0; i < N; ++i) {
            std::cout << X;
            if (i < N - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
};
