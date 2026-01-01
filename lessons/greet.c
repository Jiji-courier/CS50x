int main(int argc, string argv[])
//argc is argument count, argc is argument vector thus array of strings
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else 
    {
        printf("Hello, world\n");
    }
}