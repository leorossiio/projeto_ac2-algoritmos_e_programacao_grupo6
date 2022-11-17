//Inclu�ndo bibliotecas:

#include <stdio.h> //standard input-output header - Biblioteca padr�o da linguagem C.
#include <locale.h> //Permite usar acentua��es;
#include <string.h>	//strcmp = faz parte dessa biblioteca, compara duas strings;
#include <ctype.h>//Biblioteca bastante utilizada para a manipula��o de caracteres; (toupper - Faz um char ficar mai�sculo EX: 'a' => 'A').
#include <conio.h>// permite utilizar o getch()
#include <stdlib.h>//Para a fun��o exit();

//Vari�veis para o or�amento:

	char opcidadechar[] = {0};//faz a valida��o de um char quando o usu�rio digita a op��o desejada e bloqueia a entrada de letras, pois letras equivalem com 0;
	int opcidade;
	int americana = 3784, boituva = 3581, campinas = 5568, franca = 3746, hortolandia = 3736, itu = 4061, jundiai = 4615, limeira = 3750, mairinque = 2970, piracicaba = 3907, ribeirao = 3497, sorocaba = 3531, votorantim = 3778;
	float total=0, metro=0;
	
//Vari�veis utilizadas para switchs:

	int opmenu=0;
	char opNum[] = {0};//faz a valida��o de um char quando o usu�rio digita a op��o desejada e bloqueia a entrada de letras, pois letras equivalem com 0;
		
//vari�veis para do sistema de cadastro e login:
	
	char nome[80], sobrenome[80], username[30], validausername[30], senha[30], validasenha[30];

//declarando os voids: 

	void cadastro();
	void login();
	void menudousuario();
	void perfil();
	void orcamento();
	
//Void quer dizer vazio, mas nesse programa eles est�o sendo usados como telas;


//menu inicial:

int main(){
	
		setlocale(LC_ALL, "Portuguese"); //setlocale pertence a biblioteca #include <locale.h>, permite utilizar acentua��es e "�".
		
    do{
    	//Slepp(milissegundos) faz uma pausa de x milissegundos que o programa leva para continuar o processo.	
    	Sleep(30);
    	printf("\n");  
				printf("\t\t        PROJETO - GRUPO 6       \n\n"); 
		    	printf("\t\t   BEM-VINDO(A) AO MENU INICIAL! \n");
		printf("\t           _____________________________ \n");Sleep(30);     	
		printf("\t          /                             \\ \n");Sleep(30);     	
		printf("\t         /                               \\ \n");Sleep(30);     	
		printf("\t        /_________________________________\\ \n");Sleep(30); 
		printf("\t        |     |      OR�AMENTO      |     |\n");Sleep(30);
		printf("\t        |     |     EM R$ POR M�    |     |\n");Sleep(30);
		printf("\t        | ___ |---------------------| ___ |\n");Sleep(30);
		printf("\t        || | ||---------------------|| | ||\n");Sleep(30);
		printf("\t        ||_|_||        .- -.        ||_|_||\n");Sleep(30);
		printf("\t        |     |        |   |        |     |\n");Sleep(30);
		printf("\t        |     |        |  O|        |     |\n");Sleep(30);
		printf("\t        |_____|________|___|________|_____|\n");Sleep(30);
    	printf("\t\t|[1] - Cadastro\n");
        printf("\t\t|[2] - Login\n");
        printf("\t\t|[3] - Encerrar programa\n");
		printf("\t\t|Escolha uma op��o:\n\t\t|> ");
		scanf("%s%*c", opNum);//Faz a leitura de uma string. "%*c" serve para n�o salvar um espa�o v�zio => "".
		opmenu = strtol(opNum, NULL, 10);//transforma opmenu para n�mero inteiro de base 10 e bloqueia qualquer letra no menu, pois acaba caindo no default do switch letra=0.
		fflush(stdin);//� usado para limpar o buffer do teclado.
		system("cls");//Limpa a tela;
		
		switch (opmenu)
        {
            case 1:
                cadastro();
                break;

            case 2:
                login();
                break;

            case 3:
            	printf("\n\t[Programa encerrado com sucesso!]\n");
            	exit(0); //Pertence a biblioteca <stdlib.h>, � usado para encerrar uma aplica��o.
    			break;
    			
            default: //Caso o usu�rio digite um valor n�o reconhecido pelo programa, aparece essa mensagem como "OP��O INV�LIDA".
        	system ("cls"); //limpa a tela.
			printf("\n\n\t\t\t[OP��O INV�LIDA!]\n");
       		main (); //Retorna ao menu pr�ncipal.
        }
    	
        getch();
       }while(opmenu==3);
	} 
	
//Tela de perfil do usu�rio:

void perfil(){
	
	do
	{		
		printf("\n\n\t[Perfil]\n");
		printf("\n\t|Nome: %s %s", nome, sobrenome);
		printf("\n\t|Nome de usu�rio: %s",username);
		printf("\n\t|Senha: %s", senha);
		printf("\n\t|Deseja voltar? [1] - Sim / [2] - N�o\n\t|> ");
		scanf("%s%*c", opNum);//Faz a leitura de uma string. "%*c" serve para n�o salvar um espa�o v�zio => "".
		opmenu = strtol(opNum, NULL, 10);//transforma opmenu para n�mero inteiro de base 10 e bloqueia qualquer letra no menu, pois acaba caindo no default do switch letra=0.
		fflush(stdin);//� usado para limpar o buffer do teclado.
		
		switch (opmenu)
        {
            case 1:
            	system("cls");//limpa a tela.
                menudousuario();
                break;

            case 2:
            	system("cls");//limpa a tela.
                perfil();
                break;
                
			default: //Caso o usu�rio digite um valor n�o reconhecido pelo programa, aparece essa mensagem como "OP��O INV�LIDA".
			system("cls");//limpa a tela.
			printf("\n\n\t[OP��O INV�LIDA!]\n");
       		perfil(); //Retorna ao menu pr�ncipal.   
		}
	}while(opmenu);
}
//Tela de or�amento:

void orcamento(){
	do{
		Sleep(20);
		printf("\n\t _______________________________________");Sleep(20);
		printf("\n\t|\tCIDADES \t|PRE�O PELO M�\t|");Sleep(20);
		printf("\n\t|\t        \t|             \t|");Sleep(20);
		printf("\n\t| [1] - Americana \t|   R$ 3.784   \t|");Sleep(20);
		printf("\n\t| [2] - Boituva   \t|   R$ 3.581   \t|");Sleep(20);
		printf("\n\t| [3] - Campinas  \t|   R$ 5.568   \t|");Sleep(20);
		printf("\n\t| [4] - Franca    \t|   R$ 3.746   \t|");Sleep(20);
		printf("\n\t| [5] - Hortolandia\t|   R$ 3.736   \t|");Sleep(20);
		printf("\n\t| [6] - Itu        \t|   R$ 4.061   \t|");Sleep(20);
		printf("\n\t| [7] - Jundia� \t|   R$ 4.615  \t|");Sleep(20);
		printf("\n\t| [8] - Limeira \t|   R$ 3.750\t|");Sleep(20);
		printf("\n\t| [9] - Mairinque \t|   R$ 2.970  \t|");Sleep(20);
		printf("\n\t| [10] - Piracicaba \t|   R$ 3.907   \t|");Sleep(20);
		printf("\n\t| [11] - Ribeir�o Preto |   R$ 3.497  \t|");Sleep(20);
		printf("\n\t| [12] - Sorocaba \t|   R$ 3.531  \t|");Sleep(20);
		printf("\n\t| [13] - Votorantim \t|   R$ 3.778  \t|");Sleep(20);
		printf("\n\t|_______________________|_______________|");Sleep(20);
		printf("\n\t| [15] - Sair     \t         \t|");Sleep(20);
		printf("\n\t|---------------------------------------|");Sleep(20);
		printf("\n\t|Escolha uma op��o:\n\t|> ");Sleep(20);
		scanf("%s%*c", opcidadechar);//Faz a leitura de uma string. "%*c" serve para n�o salvar um espa�o v�zio => "".
		opcidade = strtol(opcidadechar, NULL, 10);//transforma opcidade para n�mero inteiro de base 10 e bloqueia qualquer letra no menu, pois acaba caindo no default do switch letra=0.
		fflush(stdin);//� usado para limpar o buffer do teclado.
	
	switch (opcidade)
	{
            case 1:
                printf("\t|Cidade escolhida: Americana.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * americana;
                printf("\t|O pre�o total de %.2f M� em Americana �: R$ %.2f", metro, total);
                break;
                
            case 2:
                printf("\t|Cidade escolhida: Boituva.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * boituva;
                printf("\t|O pre�o total de %.2f M� em Boituva �: R$ %.2f", metro, total);
                break;
                
            case 3:
            	printf("\t|Cidade escolhida: Campinas.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * campinas;
                printf("\t|O pre�o total de %.2f M� em Campinas �: R$ %.2f", metro, total);
                break;
                
            case 4:
            	printf("\t|Cidade escolhida: Franca.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * franca;
                printf("\t|O pre�o total de %.2f M� em Franca �: R$ %.2f", metro, total);
                break;
                
            case 5:
            	printf("\t|Cidade escolhida: Hortolandia.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * hortolandia;
                printf("\t|O pre�o total de %.2f M� em Hortolandia �: R$ %.2f", metro, total);
                break;
                
            case 6:
            	printf("\t|Cidade escolhida: Itu.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * itu;
                printf("\t|O pre�o total de %.2f M� em Itu �: R$ %.2f", metro, total);
                break;
                
            case 7:
            	printf("\t|Cidade escolhida: Jundia�.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * jundiai;
                printf("\t|O pre�o total de %.2f M� em Jundia� �: R$ %.2f", metro, total);
                break;
                
            case 8:
            	printf("\t|Cidade escolhida: Limeira.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * limeira;
                printf("\t|O pre�o total de %.2f M� em Limeira �: R$ %.2f", metro, total);
                break;
                
            case 9:
            	printf("\t|Cidade escolhida: Mairinque.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * mairinque;
                printf("\t|O pre�o total de %.2f M� em Mairinque �: R$ %.2f", metro, total);
                break;
                
             case 10:
            	printf("\t|Cidade escolhida: Piracicaba.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * piracicaba;
                printf("\t|O pre�o total de %.2f M� em Piracicaba �: R$ %.2f", metro, total);
                break;
                
             case 11:
            	printf("\t|Cidade escolhida: Ribeir�o Preto.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * ribeirao;
                printf("\t|O pre�o total de %.2f M� em Ribeir�o Preto �: R$ %.2f", metro, total);
                break;
            case 12:
            	 printf("\t|Cidade escolhida: Sorocaba.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * sorocaba;
                printf("\t|O pre�o total de %.2f M� em Sorocaba �: R$ %.2f", metro, total);
                break;
            case 13:
            	printf("\t|Cidade escolhida: Votorantim.");
                printf("\n\t|Quantos M� voc� deseja calcular? *Utilizar v�rgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * votorantim;
                printf("\t|O pre�o total de %.2f M� em Votorantim �: R$ %.2f", metro, total);
                break; 
                
            case 15: //Caso o usu�rio digite 14 - Ser� encaminhado para o menu do usu�rio
            system ("cls"); //limpa a tela.
            	menudousuario();
            	break;
        
            default: //Caso o usu�rio digite um valor n�o reconhecido pelo programa, aparece essa mensagem como "CIDADE INV�LIDA".
	        	system ("cls"); //limpa a tela.
				printf("\n\n\t\t   [CIDADE INV�LIDA!]");
	       		orcamento(); //reinicia o void 'orcamento'.
       }
        getch();
        
			printf("\n\t|Deseja fazer novamente? [1] Sim / [2] N�o \n\t|>");
            scanf("%s%*c", opNum);//Faz a leitura de uma string. "%*c" serve para n�o salvar um espa�o v�zio => "".
			opmenu = strtol(opNum, NULL, 10);//transforma opmenu para n�mero inteiro de base 10 e bloqueia qualquer letra no menu, pois acaba caindo no default do switch letra=0.
			fflush(stdin);//� usado para limpar o buffer do teclado.
			
			switch (opmenu)
        {
            case 1:
            	system ("cls"); //limpa a tela.
                orcamento();
                break;

            case 2:
            	system ("cls"); //limpa a tela.
                menudousuario();
                break;
                
			default: //Caso o usu�rio digite um valor n�o reconhecido pelo programa, aparece essa mensagem como "OP��O INV�LIDA".
				system ("cls"); //limpa a tela.
	       		printf("\n\n\t\t\t[OP��O INV�LIDA!]\n");
				orcamento();     
		}
			
	}while(opmenu);
}

//Tela de cadastro:

void cadastro(){
	
	system("cls");
	printf("\n\t\t[Cadastro]\n");
	printf("\n\t|Digite o seu primeiro nome: ");
	scanf("%s", nome);
	printf("\t|Digite o seu �ltimo nome: ");
	scanf("%s", sobrenome);

		nome [0]=toupper(nome[0]);
		sobrenome [0]=toupper(sobrenome[0]);
		//*Faz com que o espa�o de mem�ria na posi��o [0] do vetor string fique mai�sculo. ex: maria => Maria*
		
	printf("\t|Digite o nome de usu�rio: ");
	scanf("%s", username);
	printf("\t|Senha: ");
	scanf("%s", senha);
	printf("\t|Usu�rio criado com sucesso!\n\t|");
	system("Pause");
	system("cls");
	
main ();
}


//Tela de login:

void login(){
	
		printf("\n\t\t[Login]\n");
		printf("\n\t|Nome de usu�rio: ");
		scanf("%s", validausername);
		printf("\t|Senha: ");
		scanf("%s", validasenha);
			
			//Se as duas strings amarzenadas estiverem iguais as strings de cadastro, ele possibilita entrar no menudousuario(), caso contr�rio bloqueia a entrada e retorna ao in�cio.
			
			if (strcmp(username, validausername) == 0 && strcmp(senha, validasenha) == 0)// 'strcmp' � uma fun��o presente na biblioteca string.h, ela compara duas strings e faz a valida��o delas.
				{
					system("cls");
			        menudousuario();
				}	
				
		    else
		    	{
			    	system("cls");
			        printf("\n\t\t        * ACESSO NEGADO! *\n");
			        main();
				}
}	

//Tela de usu�rio:

void menudousuario(){

		do{
			
		printf("\n");   
    	printf("\tBEM-VINDO(A) %s!\n\n", nome);
        printf("\t|[1] - Realizar or�amentos\n");
        printf("\t|[2] - Perfil\n");
        printf("\t|[3] - Sair\n");
		printf("\t|Escolha uma op��o: \n\t|> ");
	  	scanf("%s%*c", opNum);//Faz a leitura de uma string. "%*c" serve para n�o salvar um espa�o v�zio => "".
		opmenu = strtol(opNum, NULL, 10);//transforma opmenu para n�mero inteiro de base 10 e bloqueia qualquer letra no menu, pois acaba caindo no default do switch letra=0.
		fflush(stdin);//� usado para limpar o buffer do teclado.
	  
	  switch(opmenu)
        {
            case 1:
            	system ("cls"); //limpa a tela.
                orcamento();
                break;

            case 2:
            	system ("cls"); //limpa a tela.
                perfil();
                break;

            case 3:
            	system ("cls"); //limpa a tela.
            	main();
            	break;
            	
            default: //Caso o usu�rio digite um valor n�o reconhecido pelo programa, aparece essa mensagem como "OP��O INV�LIDA".
	            system ("cls"); //limpa a tela.
	       		printf("\n\n\t\t[OP��O INV�LIDA!]\n");
	       		menudousuario (); //Retorna ao menu pr�ncipal.
        }  
	} while(opmenu);
} 
