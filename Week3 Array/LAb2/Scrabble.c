/*

URL - https://cs50.harvard.edu/x/2021/labs/2/#:~:text=Lab%202:%20ScrabbleYou%20are%20welcome%20to%20collaborate%20with%20one%20or%20two%20classmates%20on%20this%20lab,%20though%20it%20is%20expected%20that%20every%20student%20in%20any%20such%20group%20contribute%20equally%20to%20the%20lab.Determine%20which%20of%20two%20Scrabble%20words%20is%20worth%20more.$%20./scrabblePlayer%201:%20COMPUTERPlayer%202:%20sciencePlayer%201%20wins!When%20to%20Do%20ItBy%20Sat,%20Jan%201,%202022,%2010:29%20AM%20GMT+5:30.BackgroundIn%20the%20game%20of%20Scrabble,%20players%20create%20words%20to%20score%20points,%20and%20the%20number%20of%20points%20is%20the%20sum%20of%20the%20point%20values%20of%20each%20letter%20in%20the%20word.ABCDEFGHIJKLMNOPQRSTUVWXYZ1332142418513113101111448410For%20example,%20if%20we%20wanted%20to%20score%20the%20word%20Code,%20we%20would%20note%20that%20in%20general%20Scrabble%20rules,%20the%20C%20is%20worth%203%20points,%20the%20o%20is%20worth%201%20point,%20the%20d%20is%20worth%202%20points,%20and%20the%20e%20is%20worth%201%20point.%20Summing%20these,%20we%20get%20that%20Code%20is%20worth%203%20+%201%20+%202%20+%201%20=%207%20points.Getting%20StartedCopy%20the%20%E2%80%9Cdistribution%20code%E2%80%9D%20(i.e.,%20starter%20code)%20from%20cdn.cs50.net/2020/fall/labs/2/scrabble.c%20into%20a%20new%20file%20in%20your%20IDE%20called%20scrabble.c.You%20can%20also%20download%20the%20distribution%20code%20by%20running%20the%20command%20wget%20https://cdn.cs50.net/2020/fall/labs/2/scrabble.c%20in%20CS50%20IDE.Implementation%20DetailsComplete%20the%20implementation%20of%20scrabble.c,%20such%20that%20it%20determines%20the%20winner%20of%20a%20short%20scrabble-like%20game,%20where%20two%20players%20each%20enter%20their%20word,%20and%20the%20higher%20scoring%20player%20wins.Notice%20that%20we%E2%80%99ve%20stored%20the%20point%20values%20of%20each%20letter%20of%20the%20alphabet%20in%20an%20integer%20array%20named%20POINTS.For%20example,%20A%20or%20a%20is%20worth%201%20point%20(represented%20by%20POINTS[0]),%20B%20or%20b%20is%20worth%203%20points%20(represented%20by%20POINTS[1]),%20etc.Notice%20that%20we%E2%80%99ve%20created%20a%20prototype%20for%20a%20helper%20function%20called%20compute_score()%20that%20takes%20a%20string%20as%20input%20and%20returns%20an%20int.%20Whenever%20we%20would%20like%20to%20assign%20point%20values%20to%20a%20particular%20word,%20we%20can%20call%20this%20function.%20Note%20that%20this%20prototype%20is%20required%20for%20C%20to%20know%20that%20compute_score()%20exists%20later%20in%20the%20program.In%20main(),%20the%20program%20prompts%20the%20two%20players%20for%20their%20words%20using%20the%20get_string()%20function.%20These%20values%20are%20stored%20inside%20variables%20named%20word1%20and%20word2.In%20compute_score(),%20your%20program%20should%20compute,%20using%20the%20POINTS%20array,%20and%20return%20the%20score%20for%20the%20string%20argument.%20Characters%20that%20are%20not%20letters%20should%20be%20given%20zero%20points,%20and%20uppercase%20and%20lowercase%20letters%20should%20be%20given%20the%20same%20point%20values.For%20example,%20!%20is%20worth%200%20points%20while%20A%20and%20a%20are%20both%20worth%201%20point.Though%20Scrabble%20rules%20normally%20require%20that%20a%20word%20be%20in%20the%20dictionary,%20no%20need%20to%20check%20for%20that%20in%20this%20problem!In%20main(),%20your%20program%20should%20print,%20depending%20on%20the%20players%E2%80%99%20scores,%20Player%201%20wins!,%20Player%202%20wins!,%20or%20Tie!.WalkthroughHintsYou%20may%20find%20the%20functions%20isupper()%20and%20islower()%20to%20be%20helpful%20to%20you.%20These%20functions%20take%20in%20a%20character%20as%20the%20argument%20and%20return%20a%20nonzero%20value%20if%20the%20character%20is%20uppercase%20(for%20isupper)%20or%20lowercase%20(for%20islower).To%20find%20the%20value%20at%20the%20nth%20index%20of%20an%20array%20called%20arr,%20we%20can%20write%20arr[n].%20We%20can%20apply%20this%20to%20strings%20as%20well,%20as%20strings%20are%20arrays%20of%20characters.Recall%20that%20computers%20represent%20characters%20using%20ASCII,%20a%20standard%20that%20represents%20each%20character%20as%20a%20number.How%20to%20Test%20Your%20CodeYour%20program%20should%20behave%20per%20the%20examples%20below.$%20./scrabblePlayer%201:%20Question?Player%202:%20Question!Tie!$%20./scrabblePlayer%201:%20Oh,Player%202:%20hai!Player%202%20wins!$%20./scrabblePlayer%201:%20COMPUTERPlayer%202:%20sciencePlayer%201%20wins!$%20./scrabblePlayer%201:%20ScrabblePlayer%202:%20wiNNeRPlayer%201%20wins!



Lab 2: Scrabble
You are welcome to collaborate with one or two classmates on this lab, though it is expected that every student in any such group contribute equally to the lab.

Determine which of two Scrabble words is worth more.

$ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!
When to Do It
By Sat, Jan 1, 2022, 10:29 AM GMT+5:30.

Background
In the game of Scrabble, players create words to score points, and the number of points is the sum of the point values of each letter in the word.

A   B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   V   W   X   Y   Z

1	3	3	2	1	4	2	4	1	8	5	1	3	1	1	3	10	1	1	1	1	4	4	8	4	10

For example, if we wanted to score the word Code, we would note that in general Scrabble rules, the C is worth 3 points, the o is worth 1 point, the d is worth 2 points, and the e is worth 1 point. Summing these, we get that Code is worth 3 + 1 + 2 + 1 = 7 points.

Getting Started
Copy the “distribution code” (i.e., starter code) from cdn.cs50.net/2020/fall/labs/2/scrabble.c into a new file in your IDE called scrabble.c.
You can also download the distribution code by running the command wget https://cdn.cs50.net/2020/fall/labs/2/scrabble.c in CS50 IDE.
Implementation Details
Complete the implementation of scrabble.c, such that it determines the winner of a short scrabble-like game, where two players each enter their word, and the higher scoring player wins.

Notice that we’ve stored the point values of each letter of the alphabet in an integer array named POINTS.
For example, A or a is worth 1 point (represented by POINTS[0]), B or b is worth 3 points (represented by POINTS[1]), etc.
Notice that we’ve created a prototype for a helper function called compute_score() that takes a string as input and returns an int. Whenever we would like to assign point values to a particular word, we can call this function. Note that this prototype is required for C to know that compute_score() exists later in the program.
In main(), the program prompts the two players for their words using the get_string() function. These values are stored inside variables named word1 and word2.
In compute_score(), your program should compute, using the POINTS array, and return the score for the string argument. Characters that are not letters should be given zero points, and uppercase and lowercase letters should be given the same point values.
For example, ! is worth 0 points while A and a are both worth 1 point.
Though Scrabble rules normally require that a word be in the dictionary, no need to check for that in this problem!
In main(), your program should print, depending on the players’ scores, Player 1 wins!, Player 2 wins!, or Tie!.
Walkthrough

Hints
You may find the functions isupper() and islower() to be helpful to you. These functions take in a character as the argument and return a nonzero value if the character is uppercase (for isupper) or lowercase (for islower).

To find the value at the nth index of an array called arr, we can write arr[n]. We can apply this to strings as well, as strings are arrays of characters.

Recall that computers represent characters using ASCII, a standard that represents each character as a number.

How to Test Your Code
Your program should behave per the examples below.

$ ./scrabble
Player 1: Question?
Player 2: Question!
Tie!


$ ./scrabble
Player 1: Oh,
Player 2: hai!
Player 2 wins!


$ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!


$ ./scrabble
Player 1: Scrabble
Player 2: wiNNeR
Player 1 wins!






*/





#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>






string UpperCase (string word);

int compute_score(string word);

int main(void)
{


    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");



    word1 = UpperCase(word1);
    word2 = UpperCase(word2);


    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
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
        printf("Tie");
    }
}

string UpperCase (string word)
{
    int s = strlen(word);
 for (int  i = 0; i<s; i++)
 {
     if(islower(word[i]))
    {
        word[i] = toupper(word[i]);
    }
    else {
        word[i] = word[i];
    }
 }
    return word;
}

int compute_score(string word)
{
    // TODO: Compute and return score for string



// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


// creating of array of alphabets

int letter[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int c = 'A';
    for (int i='A'; i<'Z'; i++)
    {
        c = POINTS[i];
    
        c++;
    }
    int sum = 0;
    int s = strlen(word);

    for (int i = 0; i<s; i++)
    {
    if (isalpha(word[i]))
    {
        sum+=word[i];
    }
    else
    {
        word[i] = 0;
    }

    }

    return sum;

}
