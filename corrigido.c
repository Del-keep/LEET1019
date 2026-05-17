int* nextLargerNodes(struct ListNode* head, int* returnSize) {

    int i = 0;
    int j = 0;
    int max_indice = 0;

    struct ListNode *aux = head;

    while (aux != NULL) {
        max_indice++;
        aux = aux->next;
    } //tamanho da lista

    *returnSize = max_indice;

    int *vetor = (int*)malloc(sizeof(int) * max_indice); //vetor com valores da lista */
    
    int *r = (int*)malloc(sizeof(int) * max_indice); 

    int *pilha = (int*)malloc(sizeof(int) * max_indice);//indices

    aux = head;

    while (aux != NULL) {

        vetor[i] = aux->val;

        aux = aux->next;

        i++;
    }//lista->veotr

    for (i = 0; i < max_indice; i++) {
        r[i] = 0;
    } //respostas tds com 0 inicialmente

    j = -1;

    for (i = 0; i < max_indice; i++) {

        while (j >= 0 && vetor[i] > vetor[pilha[j]]) {

            r[pilha[j]] = vetor[i];

            j--;
        }

        j++;

        pilha[j] = i;
    }//preenche a resposta de acordo com a verif de valores



    return r;
}