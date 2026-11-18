#include <stdio.h> 
#include <stdlib.h>

int a[100], i; int n = 0;

void create() { printf("\nTotal number of elements in the array: "); scanf("%d", &n);

if(n < 0 || n > 100)
{
    printf("Invalid size!\n");
    n = 0;
    return;
}

printf("Enter the elements:\n");

for(i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}


}

void insert() { int pos, i, data;

if(n >= 100)
{
    printf("Array is full!\n");
    return;
}

printf("\nPosition of insertion: ");
scanf("%d", &pos);

if(pos < 1 || pos > n + 1)
{
    printf("Invalid position!\n");
    return;
}

printf("Which value you want to add: ");
scanf("%d", &data);

for(i = n - 1; i >= pos - 1; i--)
{
    a[i + 1] = a[i];
}

a[pos - 1] = data;
n++;

printf("New array is:\n");

for(i = 0; i < n; i++)
{
    printf("%d\n", a[i]);
}


}

void deleteElement() { int pos, i;

if(n == 0)
{
    printf("Array is empty!\n");
    return;
}

printf("\nEnter the position of array to delete an element: ");
scanf("%d", &pos);

if(pos < 1 || pos > n)
{
    printf("Invalid position!\n");
    return;
}

for(i = pos - 1; i < n - 1; i++)
{
    a[i] = a[i + 1];
}

n--;

printf("New array is:\n");

for(i = 0; i < n; i++)
{
    printf("%d\n", a[i]);
}


}

void view() { printf("\nElements are:\n");

for(i = 0; i < n; i++)
{
    printf("%d\n", a[i]);
}


}

int main() { int opt = 0;

while(1)
{
    printf("\n1) CREATE\n");
    printf("2) INSERT\n");
    printf("3) DELETE\n");
    printf("4) VIEW\n");
    printf("5) QUIT\n\n");

    printf("Choose your option: ");
    scanf("%d", &opt);

    switch(opt)
    {
        case 1:
            create();
            break;

        case 2:
            insert();
            break;

        case 3:
            deleteElement();
            break;

        case 4:
            view();
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid option! Try Again.\n");
    }
}

return 0;


}
