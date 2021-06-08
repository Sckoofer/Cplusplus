/*vestimentas
23% concluido*/

#include <iostream>
#include <locale.h>

using namespace std;


struct roupas{
	
	string identi, calcados, inferiores, superiores, chapeu;
	
};


int main()
{
	setlocale(LC_ALL,"portuguese");
	roupas identi[50], cabeca[5], torso[5], calcas[5], pes[5];
	int repet, limite;
	char cont;
	
	while (repet < limite)
	{
		cout << "BEM VINDO AO SISTEMA DE VESTIMENTAS\n";
		cout << "ESCOLHA OS CONJUNTOS ADEQUADOS\n";
		cout << "++++++++++++++++++++++++++++++++++++\n\n\n";
		
		cout << "Digite quantos conjuntos serão criados\n";
		cin >> limite;
		cout << "Digite o nome do conjunto, não use espaço entre as palavras:\n";
		cin >> identi[repet].identi;
		
		cout << "\n\n\n\n";
		cout << "--Primeira peça de roupa: chapéu--\n";
		cout << "--Digite qual tipo de chapéu será usado--\n";
		cin >> cabeca[repet].chapeu;
		
		cout << "--Segunda peça de roupa: torso--\n";
		cout << "--Digite qual a vestimenta que será usada--\n";
		cin >> torso[repet].superiores;
		
		
		cout << "--Terceira peça de roupa: pernas--\n";
		cout << "--Digite qual vestimenta será usada para os membros inferiores--\n";
		cin >> calcas[repet].inferiores;
		
		
		cout << "--Quarte peça de roupa: calçados--\n";
		cout << "--Digite qual tipo de calçado será usado--\n";
		cin >> pes[repet].calcados;
		system("cls");
		
		cout << "\n-------------------------------------------\n";
		cout << "\n-------As conjunto foi selecionadas--------\n";
		cout << "\n-------------------------------------------\n";
		cout << "Identificação do conjunto: "<<identi[repet].identi << "\n";
		cout << cabeca[repet].chapeu << "\n";
		cout << torso[repet].superiores << "\n";
		cout << calcas[repet].inferiores << "\n";
		cout << pes[repet].calcados << "\n";
		
		system("pause");
		
		system("cls");
		
		
		repet++;
	}
	
	
	
	return 0;
}





///////////////////////////////////////////////////
/*

//Teste estrutura de loop sem elementos identicos
#include <iostream>

using namespace std;

int main()
{
	
	int vet[500], h;
	int cont = 0;
	
	int var1 = 0;
	
	int asd = 0;
	while (cont <= 500)
	{
		cont++;
		var1++;
		
		cin >> vet[cont];
		h 	=  vet[cont];
		
		if(asd > 0)
		{
			for(int i = 0; i < var1; i++)
			{
				if(h == vet[i])
				{
					cout << "\nEsse numero ja foi escolhido\n";
					system("pause");
					system("cls");
				}
			}
		
		
			
		}
		
		
		asd++;
		
	}
	

	
	
	return 0;
} */
