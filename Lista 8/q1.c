/*
Questรฃo 1
Crie um programa para coletar informaรงรตes sobre as visitas ao aquรกrio da cidade. 
(๐ฎ) O sistema deve iniciar com a pergunta: ๐๐๐๐ ๐ ๐๐๐๐๐๐๐๐๐๐ ๐๐ ๐๐๐๐๐๐๐ ๐๐๐ ๐๐๐๐๐๐๐๐๐๐รก ๐๐ ๐๐๐๐๐๐๐๐? 
(๐ฏ) Crie um vetor com o tamanho exato para guardar as respostas de cada pessoa,
abaixo segue a estrutura que deve ser utilizada, vocรช deve completรก-la com os nรบmeros de bits adequados:
Estrutura Formulรกrio***

OBS: Como inserir dados nesse vetor de formulario, e como manipulรก-los
*/
#include<stdio.h>
#include<stdlib.h>

    typedef struct{
         int primeiraVisita;
         int visitarNovamente;
         int dedosPerdidos;
         int criancaPerdida;
         int quantosDias;                                  
    }formulario;

int main(){
    //int n;
    formulario *pesquisa; 
    
    printf("Qual a quantidade de pessoas que participara da pesquisa?\n");
    //scanf("%d",&n);
    //n=1;
    pesquisa = malloc(sizeof(formulario));

    printf("1. E sua primeira visita?\n");
    scanf("%d\n",(*pesquisa).primeiraVisita);
    printf("%d\n",(*pesquisa).primeiraVisita);

    /*printf("2. Pretende nos visitar novamente?\n");
    printf("3. Numero de dedos perdidos no aquario das piranhas:\n");
    printf("4. Voce perdeu uma crianรงa na exibicao dos tubaroes?\n");
    printf("5. Quantos dias da semana voce passaria aqui se fosse possivel?\n");*/
return 0;}