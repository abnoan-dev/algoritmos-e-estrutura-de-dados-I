typedef struct lista Lista;

// Função que inicializa a lista atribuindo NULL a ela.  Retorna: Lista inicializada //
Lista *cria_lista(void);


// Função que insere elementos na lista encadeada 
// argumentos: lista - lista encadeada
//             valor - valor a ser inserido

// Retorna: lista encadeada com o novo elemento inserido
// argumentos: lista - lista encadeada
Lista *insere_elementos(Lista *lista, int valor);

// imprime a lista encadeada
 void imprime_lista(Lista *lista_encadeada);


// Função que busca um elemento na lista encadeada
 void busca_elemento(Lista *lista_encadeada, int valor);