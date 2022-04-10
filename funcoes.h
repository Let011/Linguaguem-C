typedef struct {
  int idade;
  float notas[2];
  float frequencia;
} Estudante;

//Função que recebe os dados informados pelo usuario
void recebeDados(Estudante v[], int tam);

//Função que apresenta o menu de opções
void apresentaMenu(void);

//Função que calcula a média de idade entre os estudantes
float mediaIdade(Estudante v[], int tam);

//Função que faz a media de frequencia dos alunos
float mediaFrequencia(Estudante v[], int tam);

//Função que informa quantos alunos foram reprovados por falta
int quantidadeReprovadosFreq(Estudante v[], int tam);

//Função que retorna quantos alunos foram aprovados
int quantidadeAprovados(Estudante v[], int tam);

//Função que calcula a média de notas da turma
float mediaDaTurma(Estudante v[], int tam);

//Função que encontra a maior media final entre os alunos
float maiorMediaFinal(Estudante v[], int tam);

//Função que retorna a menor media final entre os alunos
float menorMediaFinal(Estudante v[], int tam);

//Função que calcula a media final de cada aluno
float calculaMediaFinal(Estudante v);