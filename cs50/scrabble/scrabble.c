#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int getScore(string word);
int values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = getScore(word1);
    int score2 = getScore(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int getScore(string word)
{
    int score = 0;

    for (int i = 0, length = strlen(word); i < length; i++)
    {
        if (islower(word[i]))
        {
            score = score + values[word[i] - 'a'];
        }
        else if (isupper(word[i]))
        {
            score = score + values[word[i] - 'A'];
        }
    }

    return score;
}
