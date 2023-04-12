#include <iostream>
#include <set>


//Function that generate random numbers and pushback it to array
void generateRandomNumber(int* arr)
{
    for (int i = 0; i < 25; ++i) 
    {
        arr[i] = std::rand() % 50;
    }
}



int main() 

{
    std::srand(std::time(nullptr));
    int arr[25];

    generateRandomNumber(arr);

    //Fill multiset with numbers from array in decrease order
    std::multiset<int, std::greater<int>> ms(arr, arr + 25);

    //Output in decrease order
    for (auto it : ms) 
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    //Output in increase order
    for (auto it = ms.rbegin(); it != ms.rend(); ++it) 
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}