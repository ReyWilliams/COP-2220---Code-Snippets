/*
• char
    – Represents an individual character value.
    – enclosed in single quotes: 'A', 'z', '2', '9', '*', '!'
    – Occupies one byte of memory on average.
*/

int main()
{
    char grade;
    grade = 'A';

    /*A single character variable or value may appear on the
    right-hand side of a character assignment statement.*/

    //these might give you errors on your IDE
    grade = "A"; /* NO! Thinks “A" is a string */
    grade = A;   /* NO! Thinks A is a variable */

    return 0;
}
