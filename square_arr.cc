#include <iostream>

class SquareRootFinder
{
public:
    int findSquareRoot(int x)
    {
        if (x == 0 || x == 1)  // Edge cases
            return x;

        int low = 1, high = x, ans = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if (mid * mid == x)
                return mid;

            if (mid * mid < x)
            {
                ans = mid;  // Store the last valid mid
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main()
{
    int x = 8;
    SquareRootFinder solver;
    std::cout << "Integer Square Root of " << x << " is: " << solver.findSquareRoot(x) << std::endl;
}
