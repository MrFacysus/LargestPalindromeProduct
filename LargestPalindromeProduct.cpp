#include <iostream>
#include <string>
#include <cmath>

int main()
{

    std::cout << "Largest palindrome product!\n";

    int answer = 0;
    int digits = 3;
    int mul = 0;

    for (int i = pow(10, digits-1); i < pow(10, digits); i++)
    {

        for (int j = pow(10, digits - 1); j < pow(10, digits); j++)
        {

            mul = i * j;

            if (std::to_string(mul)[0] == std::to_string(mul)[std::to_string(mul).length() - 1] && std::to_string(mul)[1] == std::to_string(mul)[std::to_string(mul).length() - 2] && std::to_string(mul)[2] == std::to_string(mul)[std::to_string(mul).length() - 3])
            {

                if (mul > answer)
                {

                    answer = mul;

                }

            }

        }

    }

    std::cout << answer;

}