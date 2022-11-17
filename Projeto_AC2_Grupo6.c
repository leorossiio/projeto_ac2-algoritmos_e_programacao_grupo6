//Incluíndo bibliotecas:

#include <stdio.h> //standard input-output header - Biblioteca padrão da linguagem C.
#include <locale.h> //Permite usar acentuações;
#include <string.h>	//strcmp = faz parte dessa biblioteca, compara duas strings;
#include <ctype.h>//Biblioteca bastante utilizada para a manipulação de caracteres; (toupper - Faz um char ficar maiúsculo EX: 'a' => 'A').
#include <conio.h>// permite utilizar o getch()
#include <stdlib.h>//Para a função exit();

//Variáveis para o orçamento:

	char opcidadechar[] = {0};//faz a validação de um char quando o usuário digita a opção desejada e bloqueia a entrada de letras, pois letras equivalem com 0;
	int opcidade;
	int americana = 3784, boituva = 3581, campinas = 5568, franca = 3746, hortolandia = 3736, itu = 4061, jundiai = 4615, limeira = 3750, mairinque = 2970, piracicaba = 3907, ribeirao = 3497, sorocaba = 3531, votorantim = 3778;
	float total=0, metro=0;
	
//Variáveis utilizadas para switchs:

	int opmenu=0;
	char opNum[] = {0};//faz a validação de um char quando o usuário digita a opção desejada e bloqueia a entrada de letras, pois letras equivalem com 0;
		
//variáveis para do sistema de cadastro e login:
	
	char nome[80], sobrenome[80], username[30], validausername[30], senha[30], validasenha[30];

//declarando os voids: 

	void cadastro();
	void login();
	void menudousuario();
	void perfil();
	void orcamento();
	
//Void quer dizer vazio, mas nesse programa eles estão sendo usados como telas;


//menu inicial:

int main(){
	
		setlocale(LC_ALL, "Portuguese"); //setlocale pertence a biblioteca #include <locale.h>, permite utilizar acentuações e "Ç".
		
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
		printf("\t        |     |      ORÇAMENTO      |     |\n");Sleep(30);
		printf("\t        |     |     EM R$ POR M²    |     |\n");Sleep(30);
		printf("\t        | ___ |---------------------| ___ |\n");Sleep(30);
		printf("\t        || | ||---------------------|| | ||\n");Sleep(30);
		printf("\t        ||_|_||        .- -.        ||_|_||\n");Sleep(30);
		printf("\t        |     |        |   |        |     |\n");Sleep(30);
		printf("\t        |     |        |  O|        |     |\n");Sleep(30);
		printf("\t        |_____|________|___|________|_____|\n");Sleep(30);
    	printf("\t\t|[1] - Cadastro\n");
        printf("\t\t|[2] - Login\n");
        printf("\t\t|[3] - Encerrar programa\n");
		printf("\t\t|Escolha uma opção:\n\t\t|> ");
		scanf("%s%*c", opNum);//Faz a leitura de uma string. "%*c" serve para não salvar um espaço vázio => "".
		opmenu = strtol(opNum, NULL, 10);//transforma opmenu para número inteiro de base 10 e bloqueia qualquer letra no menu, pois acaba caindo no default do switch letra=0.
		fflush(stdin);//É usado para limpar o buffer do teclado.
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
            	exit(0); //Pertence a biblioteca <stdlib.h>, é usado para encerrar uma aplicação.
    			break;
    			
            default: //Caso o usuário digite um valor não reconhecido pelo programa, aparece essa mensagem como "OPÇÃO INVÁLIDA".
        	system ("cls"); //limpa a tela.
			printf("\n\n\t\t\t[OPÇÃO INVÁLIDA!]\n");
       		main (); //Retorna ao menu príncipal.
        }
    	
        getch();
       }while(opmenu==3);
	} 
	
//Tela de perfil do usuário:

void perfil(){
	
	do
	{		
		printf("\n\n\t[Perfil]\n");
		printf("\n\t|Nome: %s %s", nome, sobrenome);
		printf("\n\t|Nome de usuário: %s",username);
		printf("\n\t|Senha: %s", senha);
		printf("\n\t|Deseja voltar? [1] - Sim / [2] - Não\n\t|> ");
		scanf("%s%*c", opNum);//Faz a leitura de uma string. "%*c" serve para não salvar um espaço vázio => "".
		opmenu = strtol(opNum, NULL, 10);//transforma opmenu para número inteiro de base 10 e bloqueia qualquer letra no menu, pois acaba caindo no default do switch letra=0.
		fflush(stdin);//É usado para limpar o buffer do teclado.
		
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
                
			default: //Caso o usuário digite um valor não reconhecido pelo programa, aparece essa mensagem como "OPÇÃO INVÁLIDA".
			system("cls");//limpa a tela.
			printf("\n\n\t[OPÇÃO INVÁLIDA!]\n");
       		perfil(); //Retorna ao menu príncipal.   
		}
	}while(opmenu);
}
//Tela de orçamento:

void orcamento(){
	do{
		Sleep(20);
		printf("\n\t _______________________________________");Sleep(20);
		printf("\n\t|\tCIDADES \t|PREÇO PELO M²\t|");Sleep(20);
		printf("\n\t|\t        \t|             \t|");Sleep(20);
		printf("\n\t| [1] - Americana \t|   R$ 3.784   \t|");Sleep(20);
		printf("\n\t| [2] - Boituva   \t|   R$ 3.581   \t|");Sleep(20);
		printf("\n\t| [3] - Campinas  \t|   R$ 5.568   \t|");Sleep(20);
		printf("\n\t| [4] - Franca    \t|   R$ 3.746   \t|");Sleep(20);
		printf("\n\t| [5] - Hortolandia\t|   R$ 3.736   \t|");Sleep(20);
		printf("\n\t| [6] - Itu        \t|   R$ 4.061   \t|");Sleep(20);
		printf("\n\t| [7] - Jundiaí \t|   R$ 4.615  \t|");Sleep(20);
		printf("\n\t| [8] - Limeira \t|   R$ 3.750\t|");Sleep(20);
		printf("\n\t| [9] - Mairinque \t|   R$ 2.970  \t|");Sleep(20);
		printf("\n\t| [10] - Piracicaba \t|   R$ 3.907   \t|");Sleep(20);
		printf("\n\t| [11] - Ribeirão Preto |   R$ 3.497  \t|");Sleep(20);
		printf("\n\t| [12] - Sorocaba \t|   R$ 3.531  \t|");Sleep(20);
		printf("\n\t| [13] - Votorantim \t|   R$ 3.778  \t|");Sleep(20);
		printf("\n\t|_______________________|_______________|");Sleep(20);
		printf("\n\t| [15] - Sair     \t         \t|");Sleep(20);
		printf("\n\t|---------------------------------------|");Sleep(20);
		printf("\n\t|Escolha uma opção:\n\t|> ");Sleep(20);
		scanf("%s%*c", opcidadechar);//Faz a leitura de uma string. "%*c" serve para não salvar um espaço vázio => "".
		opcidade = strtol(opcidadechar, NULL, 10);//transforma opcidade para número inteiro de base 10 e bloqueia qualquer letra no menu, pois acaba caindo no default do switch letra=0.
		fflush(stdin);//É usado para limpar o buffer do teclado.
	
	switch (opcidade)
	{
            case 1:
                printf("\t|Cidade escolhida: Americana.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * americana;
                printf("\t|O preço total de %.2f M² em Americana é: R$ %.2f", metro, total);
                break;
                
            case 2:
                printf("\t|Cidade escolhida: Boituva.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * boituva;
                printf("\t|O preço total de %.2f M² em Boituva é: R$ %.2f", metro, total);
                break;
                
            case 3:
            	printf("\t|Cidade escolhida: Campinas.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * campinas;
                printf("\t|O preço total de %.2f M² em Campinas é: R$ %.2f", metro, total);
                break;
                
            case 4:
            	printf("\t|Cidade escolhida: Franca.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * franca;
                printf("\t|O preço total de %.2f M² em Franca é: R$ %.2f", metro, total);
                break;
                
            case 5:
            	printf("\t|Cidade escolhida: Hortolandia.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * hortolandia;
                printf("\t|O preço total de %.2f M² em Hortolandia é: R$ %.2f", metro, total);
                break;
                
            case 6:
            	printf("\t|Cidade escolhida: Itu.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * itu;
                printf("\t|O preço total de %.2f M² em Itu é: R$ %.2f", metro, total);
                break;
                
            case 7:
            	printf("\t|Cidade escolhida: Jundiaí.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * jundiai;
                printf("\t|O preço total de %.2f M² em Jundiaí é: R$ %.2f", metro, total);
                break;
                
            case 8:
            	printf("\t|Cidade escolhida: Limeira.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * limeira;
                printf("\t|O preço total de %.2f M² em Limeira é: R$ %.2f", metro, total);
                break;
                
            case 9:
            	printf("\t|Cidade escolhida: Mairinque.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * mairinque;
                printf("\t|O preço total de %.2f M² em Mairinque é: R$ %.2f", metro, total);
                break;
                
             case 10:
            	printf("\t|Cidade escolhida: Piracicaba.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * piracicaba;
                printf("\t|O preço total de %.2f M² em Piracicaba é: R$ %.2f", metro, total);
                break;
                
             case 11:
            	printf("\t|Cidade escolhida: Ribeirão Preto.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * ribeirao;
                printf("\t|O preço total de %.2f M² em Ribeirão Preto é: R$ %.2f", metro, total);
                break;
            case 12:
            	 printf("\t|Cidade escolhida: Sorocaba.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * sorocaba;
                printf("\t|O preço total de %.2f M² em Sorocaba é: R$ %.2f", metro, total);
                break;
            case 13:
            	printf("\t|Cidade escolhida: Votorantim.");
                printf("\n\t|Quantos M² você deseja calcular? *Utilizar vírgula - Ex: '10,50' metros");
                printf("\n\t|> ");
                scanf("%f",&metro);
                total =  metro * votorantim;
                printf("\t|O preço total de %.2f M² em Votorantim é: R$ %.2f", metro, total);
                break; 
                
            case 15: //Caso o usuário digite 14 - Será encaminhado para o menu do usuário
            system ("cls"); //limpa a tela.
            	menudousuario();
            	break;
        
            default: //Caso o usuário digite um valor não reconhecido pelo programa, aparece essa mensagem como "CIDADE INVÁLIDA".
	        	system ("cls"); //limpa a tela.
				printf("\n\n\t\t   [CIDADE INVÁLIDA!]");
	       		orcamento(); //reinicia o void 'orcamento'.
       }
        getch();
        
			printf("\n\t|Deseja fazer novamente? [1] Sim / [2] Não \n\t|>");
            scanf("%s%*c", opNum);//Faz a leitura de uma string. "%*c" serve para não salvar um espaço vázio => "".
			opmenu = strtol(opNum, NULL, 10);//transforma opmenu para número inteiro de base 10 e bloqueia qualquer letra no menu, pois acaba caindo no default do switch letra=0.
			fflush(stdin);//É usado para limpar o buffer do teclado.
			
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
                
			default: //Caso o usuário digite um valor não reconhecido pelo programa, aparece essa mensagem como "OPÇÃO INVÁLIDA".
				system ("cls"); //limpa a tela.
	       		printf("\n\n\t\t\t[OPÇÃO INVÁLIDA!]\n");
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
	printf("\t|Digite o seu último nome: ");
	scanf("%s", sobrenome);

		nome [0]=toupper(nome[0]);
		sobrenome [0]=toupper(sobrenome[0]);
		//*Faz com que o espaço de memória na posição [0] do vetor string fique maiúsculo. ex: maria => Maria*
		
	printf("\t|Digite o nome de usuário: ");
	scanf("%s", username);
	printf("\t|Senha: ");
	scanf("%s", senha);
	printf("\t|Usuário criado com sucesso!\n\t|");
	system("Pause");
	system("cls");
	
main ();
}


//Tela de login:

void login(){
	
		printf("\n\t\t[Login]\n");
		printf("\n\t|Nome de usuário: ");
		scanf("%s", validausername);
		printf("\t|Senha: ");
		scanf("%s", validasenha);
			
			//Se as duas strings amarzenadas estiverem iguais as strings de cadastro, ele possibilita entrar no menudousuario(), caso contrário bloqueia a entrada e retorna ao início.
			
			if (strcmp(username, validausername) == 0 && strcmp(senha, validasenha) == 0)// 'strcmp' é uma função presente na biblioteca string.h, ela compara duas strings e faz a validação delas.
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

//Tela de usuário:

void menudousuario(){

		do{
			
		printf("\n");   
    	printf("\tBEM-VINDO(A) %s!\n\n", nome);
        printf("\t|[1] - Realizar orçamentos\n");
        printf("\t|[2] - Perfil\n");
        printf("\t|[3] - Sair\n");
		printf("\t|Escolha uma opção: \n\t|> ");
	  	scanf("%s%*c", opNum);//Faz a leitura de uma string. "%*c" serve para não salvar um espaço vázio => "".
		opmenu = strtol(opNum, NULL, 10);//transforma opmenu para número inteiro de base 10 e bloqueia qualquer letra no menu, pois acaba caindo no default do switch letra=0.
		fflush(stdin);//É usado para limpar o buffer do teclado.
	  
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
            	
            default: //Caso o usuário digite um valor não reconhecido pelo programa, aparece essa mensagem como "OPÇÃO INVÁLIDA".
	            system ("cls"); //limpa a tela.
	       		printf("\n\n\t\t[OPÇÃO INVÁLIDA!]\n");
	       		menudousuario (); //Retorna ao menu príncipal.
        }  
	} while(opmenu);
} 
