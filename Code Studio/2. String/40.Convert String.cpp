string convertString(string s) 
{
	// WRITE YOUR CODE HERE
          int n = s.length();

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' and s[i] <= 'z') {
            s[i] -= 32;
        }
        while (i < n and s[i] != ' ')
            i++;
    }
    return s;
}