/*
• A Common programming practice to update variables.

• Right side is first evaluated.

• The previous value of sum is destroyed.
*/

int main()
{
    int sum = 100;
    int item = 10;

    sum = sum + item;

    sum = sum + 10; //alternatively
    
    return 0;
}
