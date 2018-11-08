//
//  main.c
//  struct
//
//  Created by Gladwin Tirkey on 11/7/18.
//  Copyright © 2018 Gladwin Tirkey. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};

int main( ) {
    // create an array of 5 book structs
    int i, j = 0;
    char temp[100];
    struct Books book[3];
    book[0].book_id = 456;
    book[1].book_id = 567;
    book[2].book_id = 231;
    for(i = 0 ; i < 3 ; i++){
        printf("Enter no %d title name ", i+1);
        scanf("%[^\n]%*c", temp);
        strcpy(book[i].title, temp);
        printf("Enter no %d author name ", i+1);
        scanf("%[^\n]%*c", temp);
        strcpy(book[i].author, temp);
        printf("Enter no %d subject ", i+1);
        scanf("%[^\n]%*c", temp);
        strcpy(book[i].subject, temp);
       /* printf("Enter book id");
        scanf("%d",j);
        book[i].book_id = 23;*/
        
    }
    
    for(i = 0 ; i < 3 ; i++){
        printf("book Title [%d] %s, ",i+1, book[i].title);
        printf("book Author [%d] %s, ",i+1, book[i].author);
        printf("book subject [%d]%s, ",i+1, book[i].subject);
        printf("book id no[%d} = %d \n", i+1, book[i].book_id);
    }
    
    return 0;
}
