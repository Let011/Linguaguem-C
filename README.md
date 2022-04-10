# Sobre o código


Essa atividade foi desenvolvida no primeiro semestre do curso de Analise e Desenvolvimento de sistemas do Instituto Federal de São Paulo. A Atividade foi realizada em dupla e a intenção era que nós utilizassemos funções e estrutura de decisão para implementar um programa na linguagem C que oferecia a possibilidade de um professor lançar as notas e faltas dos alunos e escolher algumas opções de retorno, como por exemplo:

// Função que apresenta o menu na tela
void apresentaMenu(void){

   // Opções do menu
   
    printf("Opção 1: Média de idade da turma;\n");
    printf("Opção 2: Média de frequência da turma;\n");
    printf("Opção 3: Quantidade de reprovados por frequência;\n");
    printf("Opção 4: Quantidade de aprovados por média final;\n");
    printf("Opção 5: Média da Média Final da turma;\n");
    printf("Opção 6: Maior Média Final da turma;\n");
    printf("Opção 7: Menor Média Final da turma;\n");
    printf("Opção 8: Finaliza o programa.\n");
    printf("Entre com o opção desejada: ");
}


# Funções 

- Utilizamos as funções para receber os dados do usuario, apresentar o menu, para calcular os resultados que deveriam ser retornados para cada opção apresentada no menu;

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


# Estruturas de decisão / repetição

- Utilizamos Switch-case para retornar o resultado das funções de acordo com a opção que o usuario selecionou no menu;
- Do-while para repetir a estrutura do switch-case enquanto o usuario não selecionasse a opção que finaliza o programa. (opção 8)
- Laço for para garantir que o usuario informe dados dentro dos parametros pré estabelecidos
- If para conseguirmos direcionar o codigo a ser executado de acordo com a solicitação do usuario e o proposito do programa

