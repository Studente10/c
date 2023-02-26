#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[]= {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if(score1 > score2){
        printf("Player 1 wins!");
    }else if(score2 > score1){
        printf("Player 2 wins!");
    }else{
        printf("Tie!");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int size = strlen(word);
    //int size2 = sizeof(POINTS)/sizeof(POINTS[0]);
    int score = 0;
    char alphabet[]= { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
                   'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                   'w', 'x', 'y', 'z' };

     char temp;
    //bool matched = false;
    for(int i=0; i<size; i++){
        temp = tolower(word[i]);
        printf("x: %c\n",temp);
        for(int j=0; j<26; j++){
            //if(strcmp(&temp,&alphabet[j]) == 0){
            if(temp == alphabet[j]){
               // if(!matched){
                    score += POINTS[j];
                   // matched = true;
                   //printf("score: %d\n",score);
                    break;
                //}              
            }
        }
    }printf("punti: %d\n",score);
    return score;
}
