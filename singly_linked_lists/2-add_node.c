#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *duplicate;
    duplicate = strdup(str);
    if(duplicate == NULL)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        free(duplicate);
        return (NULL);
    }
        

    new_node->str = duplicate;
    new_node->len = strlen(duplicate);

    new_node->next = *head;
    *head = new_node;

    return(new_node);
}