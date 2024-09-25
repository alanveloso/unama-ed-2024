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

int countElements(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

struct Node* search(struct Node* head, int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return current;
        }
        current = current->next;
    }

    return NULL;

}

void deleteNode(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev;
    // Caso o nó removido seja o primeiro 
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; // Atualizar a cabeça da lista
        free(temp);
        return;
    }

    // Procurar o nó a ser removido
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Se o elemento não foi encontrado
    if (temp == NULL) {
        return;
    }
        

    // Remover o nó
    prev->next = temp->next;
    free(temp);
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void reinitialize(struct Node** head_ref) {
    struct Node* current = * head_ref;
    struct Node* next;

    // Percorrer a lista e liberar cada nó
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head_ref = NULL;
}

int main() {
    struct Node* head = NULL;
    initialize(&head);

    insertAtBeginning(&head, 10); // Lista: 10 -> NULL

    printList(head);

    insertAtBeginning(&head, 30);

    printList(head);

    int count = countElements(head);
    printf("Número de elementos: %d\n", count);

    struct Node* found = search(head, 5);

    if (found != NULL) 
        printf("Elemento encontrado: %d\n", found->data);
    else
        printf("Elemento não enontrado\n");

    deleteNode(&head, 30);
    deleteNode(&head, 10);

    printList(head);
}