char findMaxOccurChar(vector<int> maxOccur)
{
    int max = 0;
    char maxChar = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (max < maxOccur[i])
        {
            max = maxOccur[i];
            maxChar = 'a' + i;
        }
    }
    return maxChar;
}
string rearrangeString(string &str)
{
    int length = str.length();
    if (length == 0)
    {
        return "NO SOLUTION";
    }
    vector<int> alphaOccur(26, 0);
    for (int i = 0; i < length; i++)
    {
        char ch = str[i];
        int position = ch - 'a';
        alphaOccur[position] = alphaOccur[position] + 1;
    }
    char maxOccurChar = findMaxOccurChar(alphaOccur);
    int charOccur = alphaOccur[maxOccurChar - 'a'];

    if (charOccur > (length + 1) / 2)
    {
        return "NO SOLUTION";
    }
    int index = 0;
    string res(length, ' ');
    while (charOccur > 0)
    {
        res[index] = maxOccurChar;
        index = index + 2;
        charOccur--;
    }
    alphaOccur[maxOccurChar - 'a'] = 0;
    for (int i = 0; i < 26; i++)
    {
        while (alphaOccur[i] > 0)
        {
            if (index >= length)
            {
                index = 1;
            }
            res[index] = 'a' + i;
            index = index + 2;
            alphaOccur[i]--;
        }
    }
    return res;
}