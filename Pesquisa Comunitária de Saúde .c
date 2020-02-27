//Pesquisa da Agencia Comunitaria de Saude


/***************************
Autora: ESTHER DE SANTANA ARAUJO
Componente Curricular: Algoritmos I
Concluido em: 11/10/2017
Declaro que este código foi elaborado por mim de forma individual e não contém nenhum
trecho de código de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e páginas ou documentos eletrônicos da Internet. Qualquer trecho de código
de outra autoria que não a minha está destacado com uma citação para o autor e a fonte
do código, e estou ciente que estes trechos não serão considerados para fins de avaliação.
******************************/

#include <stdio.h>
#include <stdlib.h>

int
main ()
{

    int dia, mes, ano, iniciar, resposta;
    int numero = 1, microcefalicas = 0, meninos = 0, meninas = 0, diabeticas = 0, cardiacas = 0, semplanosaude = 0, criancas = 0, criancas2017 = 0;
    float peso;
    char nome[100], sexo[100], menina, menino;


    do //esse laco de repeticao servira para realizar novamente todo o processo de cadastro apos visualizar o relatorio parcial
    {

        do //esse loop ira possibilitar ao usuario fazer cadastros seguidos
        {

            printf (" \a \a  Bem Vindo \n"); //mensagem para usuario

            getchar ();
            system ("cls");

            do{
			printf ("Digite o nome da crianca.\n");
            setbuf (stdin, NULL);
            gets (nome);


            do //esse loop acontecera ate que uma data valida seja inserida
            {

                printf ("Digite o dia de nascimento da crianca.\n");
                setbuf (stdin, NULL);
                scanf ("%d", &dia);
            }
            while (dia <= 0 || dia > 31);

            do //esse loop acontecera ate que um mes valido seja inserido
            {
                printf
                ("Digite o numero correspondente ao mes de nascimento da crianca.\n");
                setbuf (stdin, NULL);
                scanf ("%d", &mes);
            }
            while (mes <= 0 || mes > 12);

			printf ("Digite o ano de nascimento da crianca.\n");
            setbuf (stdin, NULL);
            scanf ("%d", &ano);


			if (ano == 2017)
            {
                criancas2017 = criancas2017 + 1;
            }
            if (ano<=2005)
            { printf("Nao se encaixa na pesquisa pois passou da faixa etaria infantil.\n");
				printf("Vamos conferir se nao houve um erro de digitacao.\n");
				printf("Digite o ano novamente. Caso nao se encaixe na pesquisa, o programa dara inicio a um cadastro para outra pessoa e excluira este.\n\n");
				setbuf (stdin, NULL);
            	scanf ("%d", &ano);

			}
        	}while (ano<=0 || ano>2017 || ano<=2005); //esse loop serve para garantir que anos validos sejam inseridos e que sejam cadastradas apenas criancas



			printf ("A crianca pesa quantos kg?\n");
            scanf ("%f", &peso);

            criancas++; // essa variavel contabiliza a crianca no calculo geral, depois de comprovado que se trata de uma crianca realmente

            getchar ();

			//as seguintes condicionais sao responsaveis por adicionar as criancas nos grupos aos quais elas pertencem na pesquisa, para que o calculo estatistico seja realizado

            printf("Digite 1 se quer cadastrar uma menina, e 2 se quer cadastrar um menino.\n");
            setbuf (stdin, NULL);
            scanf ("%d", &resposta);
            if (resposta == 1)
            {
                meninas = meninas + 1;
            }
            if (resposta == 2)
            {
                meninos = meninos + 1;
            }

            printf
            ("A crianca tem microcefalia? Digite 1 para sim ou 2 para nao.\n");
            setbuf (stdin, NULL);
            scanf ("%d", &resposta);
            if (resposta == 1)
            {
                microcefalicas = microcefalicas + 1;
            }

            printf ("Possui diabetes? Digite 1 para sim ou 2 para nao.\n");
            setbuf (stdin, NULL);
            scanf ("%d", &resposta);
            if (resposta == 1)
            {
                diabeticas = diabeticas + 1;
            }

            printf
            ("Possui problema cardiaco? Digite 1 para sim ou 2 para nao.\n");
            setbuf (stdin, NULL);
            scanf ("%d", &resposta);
            if (resposta == 1)
            {
                cardiacas = cardiacas + 1;
            }


            printf ("Tem plano de saude? Digite 1 para sim ou 2 para nao.\n");
            setbuf (stdin, NULL);
            scanf ("%d", &resposta);
            if (resposta == 2)
            {
                semplanosaude = semplanosaude + 1;
            }
            printf (" \n Deseja  realizar mais um cadastro ? \n");
            printf ("    Digite para 1- para sim e 2- para nao \n");
            scanf ("%d", &resposta);

        }
        while (resposta != 2);


        system ("cls");


        printf ("\n A seguir os relatorios parciais:\n"); //nessa parte estao os calculos percentuais pedidos no problema
        printf ("Criancas cadastradas: %d\n", (int) criancas);
        printf ("Nascidas em 2017:     %d\n", criancas2017);
        printf ("Diabetes:           %.2f  %% \n",
                (float) diabeticas * 100 / criancas);
        printf ("Microcefalia:       %.2f  %% \n",
                (float) microcefalicas * 100 / criancas);
        printf ("Problema cardiaco:  %.2f  %% \n",
                (float) cardiacas * 100 / criancas);
        printf ("Sem plano de saude: %.2f  %% \n",
                (float) semplanosaude * 100 / criancas);
        printf ("Meninos:            %.2f  %% \n",
                (float) meninos * 100 / criancas);
        printf ("Meninas:            %.2f  %% \n",
                (float) meninas * 100 / criancas);


        getchar ();

        printf
        ("Deseja fazer um novo cadastro? Digite 1 para sim e 2 para nao.\n");
        scanf ("%d", &resposta);


    }
    while (resposta == 1);
    return 0;
}
