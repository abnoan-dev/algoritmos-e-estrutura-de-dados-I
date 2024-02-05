// Definição de novo tipo : aluno


typedef struct aluno Aluno;

// Função que aloca memoria para um struct aluno, recebe os dados via teclado e retorna um ponteiro para aluno //

Aluno * recebe_dados(void);


// Função que imprime os dados de um aluno //
void imprime_dados(Aluno * estudante);