#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int n = 0, alpha[26] = {0};
    scanf("%d", &n);
    char str[n][10000], ans[26];
    for (int i = 0; i < n; i++)
    {
        gets(str[i]);
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < strlen(str[j]); k++)
        {
            if (str[j][k] == 'a' || str[j][k] == 'A')
            {
                alpha[0]++;
                ans[0] = 'A';
            }
            else if (str[j][k] == 'b' || str[j][k] == 'B')
            {
                alpha[1]++;
                ans[1] = 'B';
            }
            else if (str[j][k] == 'c' || str[j][k] == 'C')
            {
                alpha[2]++;
                ans[2] = 'C';
            }
            else if (str[j][k] == 'd' || str[j][k] == 'D')
            {
                alpha[3]++;
                ans[3] = 'D';
            }
            else if (str[j][k] == 'e' || str[j][k] == 'E')
            {
                alpha[4]++;
                ans[4] = 'E';
            }
            else if (str[j][k] == 'f' || str[j][k] == 'F')
            {
                alpha[5]++;
                ans[5] = 'F';
            }
            else if (str[j][k] == 'g' || str[j][k] == 'G')
            {
                alpha[6]++;
                ans[6] = 'G';
            }
            else if (str[j][k] == 'h' || str[j][k] == 'H')
            {
                alpha[7]++;
                ans[7] = 'H';
            }
            else if (str[j][k] == 'i' || str[j][k] == 'I')
            {
                alpha[8]++;
                ans[8] = 'I';
            }
            else if (str[j][k] == 'j' || str[j][k] == 'J')
            {
                alpha[9]++;
                ans[9] = 'J';
            }
            else if (str[j][k] == 'k' || str[j][k] == 'K')
            {
                alpha[10]++;
                ans[10] = 'K';
            }
            else if (str[j][k] == 'l' || str[j][k] == 'L')
            {
                alpha[11]++;
                ans[11] = 'L';
            }
            else if (str[j][k] == 'm' || str[j][k] == 'M')
            {
                alpha[12]++;
                ans[12] = 'M';
            }
            else if (str[j][k] == 'n' || str[j][k] == 'N')
            {
                alpha[13]++;
                ans[13] = 'N';
            }
            else if (str[j][k] == 'o' || str[j][k] == 'O')
            {
                alpha[14]++;
                ans[14] = 'O';
            }
            else if (str[j][k] == 'p' || str[j][k] == 'P')
            {
                alpha[15]++;
                ans[15] = 'P';
            }
            else if (str[j][k] == 'q' || str[j][k] == 'Q')
            {
                alpha[16]++;
                ans[16] = 'Q';
            }
            else if (str[j][k] == 'r' || str[j][k] == 'R')
            {
                alpha[17]++;
                ans[17] = 'R';
            }
            else if (str[j][k] == 's' || str[j][k] == 'S')
            {
                alpha[18]++;
                ans[18] = 'S';
            }
            else if (str[j][k] == 't' || str[j][k] == 'T')
            {
                alpha[19]++;
                ans[19] = 'T';
            }
            else if (str[j][k] == 'u' || str[j][k] == 'U')
            {
                alpha[20]++;
                ans[20] = 'U';
            }
            else if (str[j][k] == 'v' || str[j][k] == 'V')
            {
                alpha[21]++;
                ans[21] = 'V';
            }
            else if (str[j][k] == 'w' || str[j][k] == 'W')
            {
                alpha[22]++;
                ans[22] = 'W';
            }
            else if (str[j][k] == 'x' || str[j][k] == 'X')
            {
                alpha[23]++;
                ans[23] = 'X';
            }
            else if (str[j][k] == 'y' || str[j][k] == 'Y')
            {
                alpha[24]++;
                ans[24] = 'Y';
            }
            else if (str[j][k] == 'z' || str[j][k] == 'Z')
            {
                alpha[25]++;
                ans[25] = 'Z';
            }
        }
    }
    for (int a = 0; a < 25; a++)
    {
        for (int b = a + 1; b < 26; b++)
        {
            if (alpha[a] < alpha[b])
            {
                int tmp = alpha[a];
                alpha[a] = alpha[b];
                alpha[b] = tmp;
                char tmpans = ans[a];
                ans[a] = ans[b];
                ans[b] = tmpans;
            }
        }
    }
    for (int x = 0; x < 26; x++)
    {
        if (alpha[x] > 0)
        {
            printf("%c %d\n", ans[x], alpha[x]);
        }
    }
    return 0;
}
