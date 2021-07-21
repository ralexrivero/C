/* function pointers */

/* two functions */

void fun1() { printf("Fun1\n");}
void fun2() { printf("Fun2\n");}

/* function that receives a simple function */
/* as parameter and call the function */

void wrapper(void (*fun)())
{
    fun();
}

int main()
{
    wrapper(fun1);
   wrapper(fun2);
    return (0);
}