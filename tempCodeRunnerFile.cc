
    }
    void display()
    {
        std::cout << index;
    }
};
int main()
{
    std::vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 4;
    array a;
    a.findn(arr, target);
    a.display();