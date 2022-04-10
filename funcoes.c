#include <stdio.h>
#include "funcoes.h"

// Função que recebe os dados dos estudantes e armazena no vetor recebido
void recebeDados(Estudante v[], int tam){
  int i;

  // Laço para pedir que o usuario informe dados dentro dos parametros pré estabelecidos
  for(i = 0; i < tam; i++){

      printf("Entre com a idade do estudante %d: ", i + 1);
      scanf("%d", &v[i].idade);

    if(v[i].idade < 0 ||v[i].idade > 100){
      printf("Por favor insira uma idade valida!!\n\n");
      printf("Entre com a idade do estudante %d: ", i + 1);
      scanf("%d", &v[i].idade);
      }

      printf("Entre com a nota 1 do estudante %d: ", i + 1);
      scanf("%f", &v[i].notas[0]);
    if(v[i].notas[0] > 100 || v[i].notas[0] < 0){
      printf("Por favor insira uma nota entre 0 e 100!!\n\n");
      printf("Entre com a nota 1 do estudante %d: ", i + 1);
      scanf("%f", &v[i].notas[0]);
      }
    
      printf("Entre com a nota 2 do estudante %d: ", i + 1);
      scanf("%f", &v[i].notas[1]);

    if(v[i].notas[1] > 100 || v[i].notas[1] < 0){
      printf("Por favor insira uma nota entre 0 e 100!!\n\n");
      printf("Entre com a nota 2 do estudante %d: ", i + 1);
      scanf("%f", &v[i].notas[1]);
      }

      printf("Entre com a frequência do estudante %d: ", i + 1);
      scanf("%f", &v[i].frequencia);
      if(v[i].frequencia > 100 || v[i].frequencia < 0){
      printf("Por favor insira um valor entre 0 e 100!!\n\n");
      printf("Entre com a frequência do estudante %d: ", i + 1);
      scanf("%f", &v[i].frequencia);
      }

      printf("\n\n");
   }
}

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

// Função que calcula a média de idade entre os estudantes
float mediaIdade(Estudante v[], int tam){
  float somaIdade, media;
  int i;

//Laço for que acessa todas as posições de idade e atribui o valor da posição a variavel somaIdade para que depois seja possivel calcular a media

  for(i = 0; i < tam; i++){
    somaIdade = somaIdade + (v[i].idade);
    }

    media = somaIdade / tam;

return media;
}

// Função que retorna a média de frequência dos estudantes
float mediaFrequencia(Estudante v[], int tam){
 float somaFrequencia, media;
  int i;

//laço for que acessa todas as posições de frequencia e atribui o valor a variavel somaFrequencia para que depois seja possivel calcular a media dividindo pela quantidade de posições 

  for(i = 0; i < tam; i++){
    somaFrequencia = somaFrequencia + (v[i].frequencia);
    }
    media = somaFrequencia / tam;

return media;
}


// Função que retorna a quantidade de estudantes com frequência menor de 75%
int quantidadeReprovadosFreq(Estudante v[], int tam){
  int i, reprovado = 0 ;

//laço for que acessa todas as posições do vetor referente a frequencia dos alunos
// o if dentro do laço for verifica se o aluno foi reprovado, se sim ele soma 1 a variavel reprovado e retorna a quantidade de alunos reprovados

  for(i = 0; i < tam; i++){
    if(v[i].frequencia < 75){
      reprovado = reprovado + 1;
     }
   }
return reprovado;
}

// Função que retorna a quantidade de estudantes com média final >= 6,0 e frequência maior ou igual a 75%
int quantidadeAprovados(Estudante v[], int tam){
  int i, aprovado = 0 ;

//laço for que acessa todas as posições do vetor
// o if dentro do laço for verifica se o aluno foi aprovado, se sim ele soma 1 a variavel aprovado e retorna a quantidade de alunos aprovados

  for(i = 0; i < tam; i++){
    if(v[i].frequencia > 75 && calculaMediaFinal(v[i]) >= 60){
      aprovado = aprovado + 1;
     }
    }
return aprovado;
}


// Função que retorna a média das médias finais da turma
float mediaDaTurma(Estudante v[], int tam){
  float somaNota, media;
  int i;

//laço for que acessa todas as posições do vetor para conseguirmos saber a media final de todos os alunos usando a função calculaMediaFinal(v[i])
//Ele atribui as notas na variavel somaNota e depois faz a media dividindo a soma total pela quantidade de posições

  for(i = 0; i < tam; i++){
    somaNota = somaNota + calculaMediaFinal(v[i]);
    media = somaNota / tam;
    }
return media;
}

// Função que retorna a maior média final entre os estudantes
float maiorMediaFinal(Estudante v[], int tam){
   float maior = 0 , media;
   int i;

//laço for que acessa todas as posições de media final dos alunos utilizando a função calculaMediaFinal(v[i]) e atribui os valores a variavel media
//um if que verifica se a variavel media é maior que a variavel maior inicializada em 0, se sim ele substitui o valor e retorna maior  

  for(i = 0; i < tam; i++){
   media = calculaMediaFinal(v[i]);
    if(media > maior) maior = media;
    } 
  
return maior;
}

// Função que retorna a menor média final entre os estudantes
float menorMediaFinal(Estudante v[], int tam){
  float menor , media;
  int i;
//laço for que acessa todas as posições de media final dos alunos utilizando a função calculaMediaFinal(v[i]) e atribui os valores a variavel media
//um if que verifica se a variavel media é menor que a variavel menor inicializada na primeira posição do vetor, se sim ele substitui o valor e retorna menor
  for(i = 0; i < tam; i++){
   media = calculaMediaFinal(v[i]);
   menor = calculaMediaFinal(v[0]);
    if(media < menor) menor = media;
    } 
  
return menor;
}

// Função que calcula a média das notas dos estudantes
float calculaMediaFinal(Estudante v){
  
return (v.notas[0] * 0.4) + (v.notas[1] * 0.6);
}
