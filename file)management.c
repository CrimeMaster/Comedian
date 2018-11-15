#include <stdio.h>

int main(int argc, const char * argv[]) {
    /* Write a program to create a file student.dat
     * which contains details of n students
     * which contains information such as roll no , name
     * write a program to read the information from the file
     * display the list of students who scored 75 marks and
     * above */
    int i, n, marks;
    char name[50], ch;
    
    printf("Enter the number of students");
    scanf("%d",&n);
    //open file sample.dat in write mode
    FILE *fptr = fopen("sample.dat", "w");
    if (fptr == NULL)
    {
        printf("Could not open file");
        exit(1);
    }
    for (i=0; i<n; i++)
    {
        printf("For student%d enter name:",i+1);
        scanf("%s",name);
        printf("Enter marks: ");
        scanf("%d",&marks);
        fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
    }
    fclose(fptr);
    FILE *ptr = fopen("sample.dat","r");
    
    {
        /* Read single character from file */
        ch = fgetc(fptr);
        
        /* Print character read on console */
        putchar(ch);
        
    } while(ch != EOF); /* Repeat this if last read character is not EOF */
    
    
    /* Done with this file, close file to release resource */
    fclose(fptr);

    
    return 0;
}
