#include <stdio.h>

int Menu();

int main()
{
    int num1,num2;
    int i=0;
    int end=0;
    while (end!=1)
	{
       switch (Menu())
        {
              case 1:
            {
                printf("Enter the Frist number:");
                scanf("%d", &num1);
                printf("Enter the Second number:");
                scanf("%d", &num2);
                if(num1==num2)
                {
                    break;
				}
				else
				{
					for(i=0;i<1;i++)
					{
					if(num1%2==0)
					{
						printf("the Number %d is even\n", num1);
					}
					else
					{
						printf("the Number %d is odd\n", num1);
					}
					if(num2%2==0)
					{
						printf("The Number %d is even\n", num2);
					}
					else
					{
						printf("The Number %d is odd\n", num2);
					}
				}
			}
                break;
            }
            case 2:
            {
                end=1;
                break;
            }
        }
        system("pause");
        system("cls");
    }
    return 0;
}
    
int Menu()
{
    int Epilogh;
    printf("Choose what you want to do(1-2):\n 1.Enter numbers\t2.Close the Programm");
    scanf("%d",&Epilogh);
    return Epilogh;
}
