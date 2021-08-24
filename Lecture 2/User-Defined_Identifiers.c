/*
• Naming memory cells that hold data and program outputs
and to name operations that we define.
• Naming rules:

    1. An identifier must consist only of letters, digits and
    underscores.
    2. An identifier cannot begin with a digit.
    3. A C reserved word cannot be used as an identifier.
    4. An identifier defined in a C standard library should not
        be redefined.
*/

/*

Valid & Invalid Identifiers

letter_1, letter_2, inches, cent, CENT_PER_INCH, Hello, variable
*/

/*
Invalid Identifier  -   Reason Invalid
1Letter             -   begins with a number
double              -   reserved word
int                 -   reserved word
TWO*FOUR            -   character * not allowed
joe's               -   character ' not allowed
*/

/**
 * General Guideslines for Identifier Names



- Use all uppercase letters in the names of
constant macros.

KMS_PER_MILE CMS_PER_INCH

- Pick a meaningful names, so that it’s easy to
understand.

miles, kms 

- Avoid excessively long names, as errors in
typing can occur.

lbs_per_sq_in - GOOD
pounds_per_square_inch - BAD


Do not choose names that are similar to each
other.

LARGE, large  - BAD
xbox, x_box - BAD
*/