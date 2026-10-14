#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *create_node(int value)
{
    Node *new_node = malloc(sizeof(Node));

    if (new_node == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

int insert_at_position(Node **head, int value, int position)
{
    if (position < 1)
        return 0;

    Node *new_node = create_node(value);

    if (new_node == NULL)
        return -1;

    if (position == 1)
    {
        new_node->next = *head;
        *head = new_node;
        return 1;
    }

    Node *current = *head;
    for (int current_position = 1;
         current != NULL && current_position < position - 1;
         ++current_position)
        current = current->next;

    if (current == NULL)
    {
        free(new_node);
        return 0;
    }

    new_node->next = current->next;
    current->next = new_node;
    return 1;
}

int delete_at_position(Node **head, int position)
{
    if (position < 1 || *head == NULL)
        return 0;

    Node *node_to_delete = *head;
    if (position == 1)
    {
        *head = node_to_delete->next;
    }
    else
    {
        Node *previous = *head;
        for (int current_position = 1;
             previous != NULL && current_position < position - 1;
             ++current_position)
            previous = previous->next;

        if (previous == NULL || previous->next == NULL)
            return 0;

        node_to_delete = previous->next;
        previous->next = node_to_delete->next;
    }

    free(node_to_delete);
    return 1;
}

void display(Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("Linked list: ");
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void free_list(Node **head)
{
    Node *current = *head;

    while (current != NULL)
    {
        Node *next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
}

int main(void)
{
    Node *head = NULL;
    int choice;
    int value;
    int position;

    while (1)
    {
        printf("\n--- LINKED LIST MENU ---\n");
        printf("1. Insert at position\n");
        printf("2. Delete at position\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input\n");
            free_list(&head);
            return 1;
        }

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1)
                {
                    printf("Invalid input\n");
                    free_list(&head);
                    return 1;
                }
                printf("Enter position (starting from 1): ");
                if (scanf("%d", &position) != 1)
                {
                    printf("Invalid input\n");
                    free_list(&head);
                    return 1;
                }
                int insert_result = insert_at_position(&head, value, position);
                if (insert_result == 1)
                    printf("%d inserted at position %d\n", value, position);
                else if (insert_result == 0)
                    printf("Invalid position. Valid positions are from 1 to "
                           "the list length plus 1\n");
                break;

            case 2:
                printf("Enter position to delete (starting from 1): ");
                if (scanf("%d", &position) != 1)
                {
                    printf("Invalid input\n");
                    free_list(&head);
                    return 1;
                }
                if (delete_at_position(&head, position))
                    printf("Node at position %d deleted\n", position);
                else
                    printf("No node at that position\n");
                break;

            case 3:
                display(head);
                break;

            case 4:
                free_list(&head);
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
