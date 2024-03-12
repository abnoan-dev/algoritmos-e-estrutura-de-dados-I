
//cirando a estrutura pilha
typedef struct pilha Pilha;

//criando as funções
Pilha* pilha_cria(void);

//função para inserir um elemento na pilha
void pilha_push(Pilha* p, float v);

//função para remover um elemento da pilha
float pilha_pop(Pilha* p);

//função para verificar se a pilha está vazia
int pilha_vazia(Pilha* p);

//função para liberar a pilha
void pilha_libera(Pilha* p);