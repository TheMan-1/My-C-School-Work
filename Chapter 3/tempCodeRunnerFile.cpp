int computeFactorials(int num, int max)
{
    cout << "Factorial of" << num << ":";
    cout << factorial(num) << endl;
    num++;
    if (num > max)
        return 0;
    else
        computeFactorials(num, max);
}
