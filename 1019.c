int* nextLargerNodes(struct ListNode* head, int* returnSize) {
    int i,j=0,maior,indice,max_indice;
    int *r;
    max_indice=*returnSize;
    r=(int *)malloc(sizeof(* returnSize));
    
    int *vetor[max_indice]=head[max_indice];

    for(i=0;i==max_indice;i++){
        do{
            if(vetor[i+1]>vetor[j]){
                r[i]=vetor[i+1];
                j++;
            }
            else{
                maior=vetor[j];
                indice=i;
                do{
                    if(maior>vetor[indice]||maior==vetor[indice]){
                        indice++;
                        r[i]=0;
                    }
                    else
                        r[i]=vetor[indice];
                }while(r[i]==vetor[indice]||indice==max_indice);
            }
        }while(r[i]!=vetor[i+1]||r[i]==0||r[i]==vetor[indice]);
    }    
    return r;
}