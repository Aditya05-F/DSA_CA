#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <cctype>
using namespace std;
int romanCharToInt(char roman)
{
    unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    // Convert to uppercase to handle lowercase input
    roman = toupper(roman);

    // Check if the character exists in the map
    if (romanMap.find(roman) != romanMap.end())
    {
        return romanMap[roman];
    }
    else
    {
        return -1; // Invalid Roman numeral
    }
}

int main(int argc, char const *argv[])
{
    string num = "LXIII";
    int sum = 0, index = 0;
    while (index < num.size() - 1)
    {
        if (romanCharToInt(num[index]) < romanCharToInt(num[index + 1]))
            sum -= romanCharToInt(num[index]);
        else
            sum += romanCharToInt(num[index]);
        index++;
    }
    sum += romanCharToInt(num[index]);
    cout << "The Roman Number: " << num << " In Integer Is: " << sum;
    return 0;
}
