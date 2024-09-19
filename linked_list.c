#include <stdio.h>
#include <stdlib.h>

// Estrutura de um nó da lista
struct Node {
    int data;           // Dado do nó
    struct Node* next;  // Ponteiro para o próximo nó
};

// Iniciliza a lista (ponteiro para NULL)
void initialize(struct Node** head_ref) {
    *head_ref = NULL;
}

void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = malloc(sizeof(struct Node));

    // Atribuir dados ao novo nó
    new_node->data = new_data;

    // Apontar o próximo do novo nó para o nó atual da cabeça
    new_node->next = *head_ref;

    *head_ref = new_node;
}

void insertAtEnd(struct Node** head_ref, int new_data) {
        struct Node* new_node = malloc(sizeof(struct Node));
        struct Node* last = *head_ref; // Usado para percorrer a lista

        new_node->data = new_data;
        new_node->next = NULL;
        // Se a lista estiver vazia, o novo nó será o primeiro nó
        if (*head_ref = NULL) {
            *head_ref = new_node;
            return;
        }
        // Percorrer até o último nó
        while (last->next != NULL) {
            last = last->next;
        }
        // Atualizar o último nó para apontar para o novo nó
        last->next = new_node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    initialize(&head);

    insertAtBeginning(&head, 10); // Lista: 10 -> NULL
    printList(head);
    insertAtBeginning(&head, 20); // Lista: 20 -> 10 -> NULL

    printList(head);
}