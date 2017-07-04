#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	int h = 0;
	
	do {
		printf("Height: ");
		h = GetInt();       //ввод высоты башни
        if (h == 0)         //проверка высоты башни на значени 0
        {
            return 0;
        }
	} while (h < 1 || h > 23);  //проверка значения высоты башни в пределах 1-23

	for(int i = 0; i < h; i++) // цикл условия высоты башни
	{
		for(int j = 0; j < h-i-1; j++)
        {
            printf("%s", " ");
        }
        
		for(int k = 0; k < i+2; k++)
		{
			printf("#");
		}
		printf("\n");
	}	
	return 0;
}