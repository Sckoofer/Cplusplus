//Simples questionário
#include <iostream>
#include <stdlib.h>


using namespace std;


void TelaIns(){
	cout << "\n\n\n";
	cout << "------------------------";
	cout << "\nLetra   S   para   SIM\nLetra   N   para   NAO\n";
	cout << "------------------------\n";
}



int main()
{		char ini;
		char nomeCon[20]; //esta configurado pra 10, mas depois você pode aumentar o limite se quiser;
		int	 Ens = 0;
		char EnsNivel1[50] = "Ensino Medio Concluido";
		char EnsNivel2[50] = "Processo de Conclusao do Ensino Superior";
		char EnsNivel3[50] = "Ensino Medio Concluido";
		int numEnt, NuCon;
		int i = 0;
		//nomeCon = nome do concorrente 
		//i = usado dentro dos laços
		//ini = inicializar - numEnt= numero de entrevistados
		//NuCon = numero de concorrentes
		cout << "---------------------------------------\n";
		cout << "---------------------------------------\n";
		cout << "---SEJA BEM VINDO(A) AO QUESTIONARIO---\n";
		cout << "---------------------------------------\n";
		cout << "---------------------------------------\n";
		TelaIns();
		cout << "\nDESEJA INCIAR AGORA?";
		cout << "\n>>>>  ";
		cin >> ini;
		if (ini == 's' | ini == 'S' )
		{
			system ("cls");
			cout << "--------------------------------------------\n";
			cout << "--------------------------------------------\n\n\n";
			cout << "--->QUANTOS CONCORRENTES DESEJA  CADASTRAR?\n\n\n(Digite o numero  de concorrentes e entao tecle ENTER)";
			cout << "\n>>>>  ";
			cin  >>	NuCon ;
			while ( i  < NuCon)
			{	
				system ("cls");
				cout << "DIGITE AGORA O SEU PRIMEIRO NOME\n";
				cout << "\n>>>>  ";
				cin >> nomeCon;
				system ("cls");
				cout << "QUAL A SUA ESCOLARIDADE?\nDIGITE  1  PARA ENSINO MEDIO COMCLUIDO\nDIGITE  2";
				cout <<"  PARA PROCESSO DE CONCLUSAO DO ENSINO SUPERIOR\nDIGITE  3  PARA ENSINO SUPERIOR CONCLUIDO\n";
				cout << "\n>>>>  ";
				cin >>	Ens;
				if(Ens == 1)
					{
						EnsNivel1;
					}
				if(Ens == 2)
					{
						EnsNivel2;
					}
				if(Ens == 3)
					{
						EnsNivel3;
						
					}
				i++;	
			}
		}
cout << "\n->Foram cadastrados " << NuCon << " concorrentes\n->O ultimo cadastrado foi: " << nomeCon;
cout << "\n";
cout << "\n\n\n";
return 0;
}
