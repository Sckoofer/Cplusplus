  
//Avaliação de perfil
//90% concluído
//SENHA ADMIN 4112

#include <iostream>

using namespace std;

void PergTela1() //layout dos questionario
{
	cout << "\n___________________________________\n";
	cout << "\n\n\n";
	cout << "-------------------------------------";

}
void PergTela2() //layout dos questionario
{
	cout << "\n-------------------------------------\n";
	cout << "\n>>>>>  ";
}
void TelaAviso(int contador) //layout tela de erro
{
	if(contador > 0)
	{
		system ("cls");
		cout << "==================================\n";
		cout << "==================================\n";
		cout << "==================================\n";
		cout << "DIGITE APENAS O NUMEROS DAS OPCOES\n";
		cout << "==================================\n";
		cout << "==================================\n";
	}
}
void PergAdmin() //layout tela do admin
{
		cout << "\QUAL A OPCAO VOCE DEFINE COMO CORRETA?";
        cout << "\n=======================================\n";
		cout << "\n->OPCAO 1\n->OPCAO 2\n->OPCAO 3\n->OPCAO 4\n\n\n";
		cout << "DIGITE APENAS O NUMERO DA OPCAO";
		cout << "\n>>>>>>> ";
}

int main()
{

	int NumEntrev = 0, ContadorValor;
	int TrabEmEqui;//variaveis de opcoes
	int Perg1[1000] = {-1}, Perg2[1000] = {-1}, Perg3[1000] = {-1};
	int Perg4[1000] = {-1},Perg5[1000] = {-1}, i;
	int PosVet = 0, ID[1000];
	int contadorErro = 0;
	int senha;
	int opcao1,opcao2,opcao3,opcao4,opcao5;
	int EscolhidoID[1000];
	int limiteResult = 0;
	int copia, perm; //permissão para acessar o bloco de identicação repetida

	cout << "\n\n";
	cout << "++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "+ BEM VINDO AO QUESTIONARIO VERSAO 1.27  +\n"; 
	cout << "++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "\n\n_________________________________________\n\n";
	cout << "  DIGITE  A  SENHA  DISPONIBILIZADA  NO  \n";
	cout << "  CODIGO  PARA  ENTRAR  EM  MODO\n  ADMINSTRADOR.\n";
	cout << "\n  CASO  INSIRA  UMA  SENHA  INCORRETA O";
	cout << "\n  PROGRAMA  ENTRARA  EM  MODO USUARIO\n";
	cout << "  E O QUESTIONARIO INICIARA NORMALMENTE\n";
	cout << "_________________________________________\n";
	cout << "\nSENHA: ";
	cin >> senha;
	while (senha == 4112)
	{
		system("cls");
		cout << "\n---------------------------------------------";
		cout << "\nNESSE MENU VOCE PODERA REALIZAR ALTERACOES";
		cout << "\nNA QUANTIDADE DE PONTOS NECESSARIOS QUE O";
		cout << "\nENTREVISTADO PRECISA PARA GANHAR DESTAQUE\n\n";
		cout << "PARA MELHOR ENTEDIMENTO, ENTRE NO QUESTIONARIO\n";
		cout << "QUESTIONARIO EM MODO USUARIO E ESCOLHA QUAL";
		cout << "\nRESPOSTA RECEBERA A QUANTIDADE DE PONTOS";
		cout << "\n---------------------------------------------\n";
		system("pause");
		system ("cls");
		cout << "\n=======================================\n";
		cout << "\nQUAL A RESPOSTA CORRETA DA PRIMEIRA PERGUNTA?\n\n";
        PergAdmin();
		cin >> opcao1;
		system ("cls");
		cout << "\n=======================================\n";
        cout << "\nQUAL A RESPOSTA CORRETA DA SEGUNDA PERGUNTA?\n\n";
		PergAdmin();
		cin >> opcao2;
		system ("cls");
		cout << "\n=======================================\n";
        cout << "\nQUAL A RESPOSTA CORRETA DA TERCEIRA PERGUNTA?\n\n";
        PergAdmin();
		cin >> opcao3;
		system ("cls");
		cout << "\n=======================================\n";
        cout << "\nQUAL A RESPOSTA CORRETA DA QUARTA PERGUNTA?\n\n";
        PergAdmin();
		cin >> opcao4;
		system ("cls");
		cout << "\n=======================================\n";
        cout << "\nQUAL A RESPOSTA CORRETA DA QUINTA PERGUNTA?\n\n";
        PergAdmin();
		cin >> opcao5;
		system ("cls");
		senha = 0;
		system("cls");
		cout << "\n\n>>  As opcoes corretas foram configuradas  <<\n";
		cout << ">>  Para desfazer, reinicie o programa    <<\n";
		cout << "\n\n\n";
		system("pause");
	}


	system("cls");
	cout << "\n\n--------------------------------------\n";
	cout << "  Qual  o numero  de  participantes?\n\n";
	cout << "  O  numero  definira  a quantidade\n";
	cout << "  maxima de repeticoes de perguntas\n";
	cout << "--------------------------------------\n";
	cout << "\n>>>>>  ";
	cin >> NumEntrev;
	if ((NumEntrev < 0) || (NumEntrev > 1000))
	{
		while ((NumEntrev < 0) || (NumEntrev > 1000))
		{
		cout << "Digite um numero entre 0 e 1000\n";
		cout << "\n>>>>>     ";
		cin >> NumEntrev;
		}
	}
	system ("cls");

	while ((ContadorValor < NumEntrev) && (NumEntrev > 0))
	{
		volta:					//retorna em caso de identicação repetida
		system ("cls");
		cout << "\n\n\n\n";
		cout << "    =======                   ======\n";
		cout << "   =====  QUESTIONARIO INICIADO  =====\n";
		cout << "    =======                   ======\n";
		cout << "\n\n";
		cout << "\n___________________________________";
        cout << "\n\n>> Digite um numero que sera a sua\n";
		cout << "   identificacao";
        cout << "\n___________________________________";
		cout <<"\n\n>>>> ";
        
		cin >>  ID[PosVet];
		copia = ID[PosVet];
		
		
		if(perm != 0) /*Compara o numero de identificação com os demais
					  em caso de repetição (com exceção do primeiro)
					  o bloco FOR retorna com o GOTO para a linha 140
					  */
		{
			for(int i = 0; i < PosVet; i++)
			{	
				if(copia == ID[i])
				{
					system("cls");
					cout << "\nDigiteOutroNumero\n";
					system ("pause");
					goto volta;	
				}
			}	
			
		}
		perm++;
		
		
        system("cls");
            
    
		//indica a reinicializacao do questionario
		if (ContadorValor >= 1){
			system("cls");
			printf("\n\n>>>>>>>Questionario numero %d reiniciado", ContadorValor + 1);
			cout << "\n\n\n";
		}


		while((Perg1[PosVet] < 1  ) || (Perg1[PosVet] > 4 ))
		{

			TelaAviso(contadorErro);
			cout << "\n___________________________________\n\n";
			cout << "Primeira pergunta:\n";
			cout << "Voce gosta de trabalhar em equipe?\n";
			PergTela1();
			cout << "\nDigite 1 para responder: 'nao'\n";
			cout << "Digite 2 para responder: 'um pouco'\n";
			cout << "Digite 3 para responder: 'gosto'\n";
			cout << "Digite 4 para responder: 'gosto bastante'";
			PergTela2();
			cin >> Perg1[PosVet];
			contadorErro++;
		}
		contadorErro = 0;


		while((Perg2[PosVet] <  1 ) || (Perg2[PosVet] > 4 ))
		{
			system("cls");
			TelaAviso(contadorErro);
			cout << "\n___________________________________\n\n";
			cout << "Segunda pergunta:\n\n";
			cout << "Como voce trabalha sob pressao?";
			PergTela1();
			cout << "\nDigite 1 para responder:\n";
			cout << "'nunca trabalhei assim'\n\n";
			cout << "Digite 2 para responder:\n";
			cout << "'me incomoda um pouco'\n\n";
			cout << "Digite 3 para responder:\n";
			cout << "'nao me incomoda trabalhar assim'\n\n";
			cout << "Digite 4 para responder:\n";
			cout << "'gosto de trabalhar sob pressao'";
			PergTela2();
			cin >> Perg2[PosVet];
			contadorErro++;
		}
		contadorErro = 0;

		while((Perg3[PosVet] < 1 ) || (Perg3[PosVet] > 4 ))
		{
			system("cls");
			TelaAviso(contadorErro);
			cout << "\n___________________________________\n\n";
			cout << "Terceira pergunta:\n\n";
			cout << "Voce se considera uma pessoa organizada?";
			PergTela1();
			cout << "\nDigite 1 para responder 'nao'\n";
			cout << "\nDigite 2 para responder:\n";
			cout << "'sou uma pessoa pouco organizada'\n";
			cout << "\nDigite 3 para desponder:\n";
			cout << "'mantenho meu ambiente organizado'\n";
			cout << "\nDigite 4 para responder:\n";
			cout << "'tudo deve estar organizado e guardado'";
			PergTela2();
			cin >> Perg3[PosVet];
			contadorErro++;
		}
		contadorErro = 0;

		while((Perg4[PosVet] < 1 ) || (Perg4[PosVet] > 4 ))
		{
			system("cls");
			TelaAviso(contadorErro);
			cout << "\n___________________________________\n";
			cout << "Quarta pergunta:\n\n";
			cout << "Quando acontece uma discussao entre\ndois colegas,";
			cout <<  " qual dessas opcoes mais\nse assemelha com voce?";
			PergTela1();
			cout << "\nDigite 1 para responder:\n";
			cout << "'nao me envolvo em discussoes'";
			cout << "\n\nDigite 2 para responder:\n";
			cout << "'defendo as ideias dos meus amigos\n";
			cout << "\n\nDigite 3 para responder:\n";
			cout << "'encerro a discussao, de ambos os lados'";
			cout << "\n\nDigite 4 para responder:\n";
			cout << "'discussoes fazem parte do aprendizado'";
			PergTela2();
			cin >> Perg4[PosVet];
			contadorErro++;
		}
		contadorErro = 0;

		while((Perg5[PosVet] < 1 ) || (Perg5[PosVet] > 4 ))
		{
			system("cls");
			TelaAviso(contadorErro);
			cout << "\n___________________________________\n";
			cout << "Quinta pergunta:\n\n";
			cout << "O que voce faria se tivesse\ndificuldade em uma tarefa?";
			PergTela1();
			cout << "\nDigite 1 para responder:";
			cout << "\n'resolveria sozinho com base\nno meu conhecimento'\n";
			cout << "\nDigite 2 para responder:\n";
			cout << "'pediria uma orientacao do que fazer'\n";
			cout << "\nDigite 3 para responder:\n";
			cout << "'pediria ajuda na realizacao da tarefa'\n";
			cout << "\nDigite 4 para responder:\n";
			cout << "'nao faco o que esta alem de mim'";
			PergTela2();
 			cin >> Perg5[PosVet];
 			contadorErro++;
 		}

 		if((Perg1[PosVet] == opcao1) && (Perg2[PosVet] == opcao2)
		&& (Perg3[PosVet] == opcao3) && (Perg4[PosVet] == opcao4)
		&& (Perg5[PosVet] == opcao5))
        {
            EscolhidoID[PosVet] = ID[PosVet];
            limiteResult++;	
        }


		PosVet++;
		//Finalizacao do questionario
		ContadorValor++;
		system("cls");
		cout << "\n    =====================\n    ";
		cout << " Perguntas encerradas\n    ";
		cout << "=====================\n";
		cout << "\n\n\n";
		system ("pause");
		system("cls");
	}

	system ("cls");
	cout << "\n\n\n\n\n";
	cout << "-------------------------------------------";
	cout << "\nO LIMITE DE ENTREVISTADOS FOI ATINGIDO\n";
	cout << "DIGITE A SENHA DE ADMINSTRADOR PARA OBTER\n";
	cout << "O NUMERO DE IDENTIFICACAO DOS ENTREVISTADOS";
	cout << "SELECIONADOS\n";
	cout << "-------------------------------------------";
	cout << "\nSENHA: ";
	cin >> senha;
	if (senha == 4112)
	{
		system("cls");
		cout << "\n\nA identificacao do(s) entrevistado(s)\n";
		cout << "que corresponderam aos requisitos sao\n";
		cout << "\n----------------\n";
		for (int a = 0; a <= limiteResult && limiteResult <= NumEntrev; a++)
		{
			printf("%d", EscolhidoID[a]);
			cout << "\n----------------\n";
		}
		
	}
	
	return 0;
}
