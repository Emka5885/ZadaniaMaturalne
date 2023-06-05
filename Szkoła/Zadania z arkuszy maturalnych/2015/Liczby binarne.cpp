/*
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>


bool Check(std::string num)
{
    int zero = 0, one = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }



    if (zero > one)
    {
        return true;
    }

    return false;
}

bool DividedByTwo(std::string num)
{
    if (num.back() == '0')
    {
        return true;
    }

    return false;
}

bool DividedByEight(std::string num)
{
    if (num.size() >= 3)
    {
        int n = (int)num[num.size() - 3] * 100 + (int)num[num.size() - 2] * 10 + (int)num.back();
        if (n % 8 == 0)
        {
            return true;
        }
    }
    else if (num.size() == 2)
    {
        int n = (int)num[num.size() - 2] * 10 + (int)num.back();
        if (n % 8 == 0)
        {
            return true;
        }
    }
    else if (num.size() == 1)
    {
        int n = (int)num.back();
        if (n % 8 == 0)
        {
            return true;
        }
    }

    return false;
}

bool Helper(const std::string& s1, const std::string& s2)
{
    if (s1.size() > s2.size())
    {
        return true;
    }
    else if (s1.size() == s2.size())
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] > s2[i])
            {
                return true;
            }
            else if (s1[i] < s2[i])
            {
                return false;
            }
        }
    }

    return false;
}

int main()
{
    std::vector<std::string> v;
    std::ifstream f;
    f.open("Szko³a//Zadania z arkuszy maturalnych//2015//liczby.txt");
    if (f.is_open())
    {
        while (f)
        {
            std::string num;
            f >> num;
            if(!num.empty())
                v.push_back(num);
        }
    }



    //4.1
    int counter = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (Check(v[i]))
        {
            counter++;
        }
    }
    std::cout << counter << "\n";



    //4.2
    int counterT = 0;
    int counterE = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (DividedByTwo(v[i]))
        {
            counterT++;
        }
        if (DividedByEight(v[i]))
        {
            counterE++;
        }
    }
    std::cout << counterT << " " << counterE << "\n";



    //4.3
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (Helper(v[minIndex], v[i]))
        {
            minIndex = i;
        }
        if (Helper(v[i], v[maxIndex]))
        {
            maxIndex = i;
        }
    }

    std::cout << minIndex + 1 << " " << maxIndex + 1 << "\n";

    std::cin.get();
}
*/