// String 15 program

int main()
{
	char *str[] = {"Welcome", "To", "Wipro", "Technologies", "Bangalore"};
    cout<< sizeof(str) << " " << strlen(str[0]) << endl;
    cout<< str[1] << endl;
    cout<< str[2][2] <<endl;
    return 0;
}

Output = 40 7
         To
         p