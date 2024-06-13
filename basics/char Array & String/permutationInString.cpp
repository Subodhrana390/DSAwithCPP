#include <iostream>
using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

bool isInclusion(string s1, string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int number = s1[i] - 'a';
        count1[number]++;
    }

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    while (i < windowSize)
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count1, count2))
    {
        return 1;
    }

    while (i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if (checkEqual(count1, count2))
            return 1;
    }
}

int main()
{
    char s1[4], s2[100];
    cin.getline(s1, 4);
    cin.getline(s2, 100);
    cout << "Permutation or Not  is  " << isInclusion(s1, s2);
}