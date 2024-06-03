#include <iostream>
using namespace std;

string FindLongestWordOrCount(string s)
{
    string LongestWordAns = "";
    string word = "";
    int wordCount = 0;
    for (char ch : s)
    {
        if (ch != ' ')
        {
            word = word + ch; // store character in word
        }
        else
        {
            if (word.length() > LongestWordAns.length())
            {
                LongestWordAns = word;
            }
            word = "";
            wordCount++;
        }
    }

    if (!word.empty())
    {
        if (word.length() > LongestWordAns.length())
        {
            LongestWordAns = word;
        }
        wordCount++;
    }
    cout << "Longest Word:   " << LongestWordAns << endl;
    cout << "WOrd Count:  " << wordCount;
}

int main()
{
    // 1] Find the longest String and Count the Total no of words in the String.
    // Input: "I Love My India".
    // Output: Word_length: 4.
    // Longest Word: India.
    string s = "I love my India";
    FindLongestWordOrCount(s);
}