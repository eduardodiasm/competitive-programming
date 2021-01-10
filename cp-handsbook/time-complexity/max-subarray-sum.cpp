#include <bits/stdc++.h>

using namespace std;

int quadratic_solution (int *array, int length) {
    int  maximum = array[0];

    for (size_t i = 0; i < length; i++)
    {
        int sum = 0;
        for (size_t j = i; j < length; j++)
        {
            sum += array[j];
            if (sum > maximum) maximum = sum;
            
        }
        
    }
    
    
    return maximum;
} 

int linear_solution (int *array, int length) {

    int sum = array[0], maximum = array[0];

    for (size_t i = 1; i < length; i++)
    {

        bool should_create_new_subarray = array[i] > sum && !(array[i] + sum > array[i]);

        if (should_create_new_subarray) sum = array[i];
        else sum += array[i];

        if (sum > maximum) maximum = sum;

    }

    return maximum;

}

int main(int argc, char const *argv[])
{
    
    int array [] = {
        -2, -3, 4, -1, -2, 1, 5, -3
    };

    int length = sizeof(array) / sizeof(array[0]);

    int ls = linear_solution(array, length);
    int qs = quadratic_solution(array, length);

    cout << ls << '\n';
    cout << qs << '\n';
    

    return 0;
}
    