
#include <iostream>
#include <string>
#define t 2

using namespace std;

struct livraria {
	string titulo;
	string autor;
	int ano;
	float preco;
};

int i = 0;
int quantidade;
int quantidadeTotal;
string comparar[t];

void cadastrar(livraria livro[t]) {
	
	

	for (i ; i < quantidadeTotal; i++) {

		cout << "digite o titulo do livro " << i + 1 << endl;
		getline(cin, livro[i].titulo);


		cout << "digite o nome autor do livro " << i + 1 << endl;
		getline(cin, livro[i].autor);

		cout << "digite o ano do livro " << i + 1 << endl;
		cin >> livro[i].ano;

		cout << "digite o preco do livro " << i + 1 << endl;
		cin >> livro[i].preco;
		cin.ignore();
		system("cls");
	}
}

string pesquisa(livraria livro[t]) {

	string busca;
	int c;

	cout << "digite o nome do livro que voce deseja achar\n";
	getline(cin, busca);
	for (int l = 0; l < 1; l++)
	{
		for (c = 0; c < quantidadeTotal; c++) {
			if (livro[c].titulo == busca) {
				cout << "**********************************" << endl;
				cout << "titulo: " << livro[c].titulo << endl;
				cout << "autor: " << livro[c].autor << endl;
				cout << "ano: " << livro[c].ano << endl;
				cout << "preco: " << livro[c].preco << endl;
				cout << "**********************************\n" << endl;
				break;
			}
		}
		if (livro[c].titulo != busca) {
			cout << "Livro nao encontrado\n";
			cout << "**********************************\n" << endl;
			break;
		}
		else
		{
			break;
		}
		
		
	}
	return busca;
}


void alterar(livraria livro[t])
{
	string alteracao;
	int alterarAno;
	float alterarPreco;
	string busca;
	int escolha = 1;
	int d;
	

	cout << "qual livro voce deseja alterar?\n";
	getline(cin, busca);

		for (int l = 0; l < 1; l++)
		{
			for (d = 0; d < quantidadeTotal; d++) {

				if (livro[d].titulo == busca) {

					for (int z = 0; z < t; z++)
					{
						cout << "digite o numero da opcao de acordo com alteracao desejada:\n";
						cout << "titulo = 1\n";
						cout << "autor = 2\n";
						cout << "ano = 3\n";
						cout << "preco = 4\n";
						cout << "cancelar = 0\n";
						cin >> escolha;
						cin.ignore();
						system("cls");

						if (escolha == 1) 
						{
							cout << "qual o novo titulo?\n";
							getline(cin, alteracao);
							livro[d].titulo = alteracao;
							system("cls");
							cout << "titulo alterado para " << livro[d].titulo << endl;
							cout << "***************************************************\n";
						}
						else if (escolha == 2)
						{
							cout << "qual o novo autor?\n";
							getline(cin, alteracao);
							livro[d].autor = alteracao;
							cout << "autor alterado para " << livro[d].autor << endl;
							cout << "***************************************************\n";
						}
						else if (escolha == 3) 
						{
							cout << "qual o novo ano?\n";
							cin >> alterarAno;
							cin.ignore();
							livro[d].ano = alterarAno;
							cout << "ano alterado para " << livro[d].ano << endl;
							cout << "***************************************************\n";

						}
						else if (escolha == 4)
						{
							cout << "qual o novo preco?\n";
							cin >> alterarPreco;
							cin.ignore();
							livro[d].preco = alterarPreco;
							cout << "Preco alterado para " << livro[d].preco << endl;
							cout << "***************************************************\n";

						}
						else if (escolha == 0)
						{
							busca = livro[d].titulo;
							break;
						}
						else
						{
							cout << "opcao invalida\n" << endl;

						}

					}	
					break;
				}
			}
			if (livro[d].titulo != busca) {
				cout << "Livro nao encontrado\n";
				cout << "**********************************\n" << endl;
				break;
			}
			else
			{
				break;
			}


		}

	

} 

int main() {

	livraria livro[t];
	int i;
	char opcao;

	while (opcao != '0') {
		cout << "Seja bem vindo\n";
		cout << "Quantidade de livro ja cadastrados: " << quantidadeTotal << endl;
		cout << "escolha a opcao desejada\n\n";
		cout << "cadastrar um ou mais livros - 1\nprocurar um livro - 2\nalterar um livro - 3\nsair - 0\n\n";
		cin >> opcao;
		cin.ignore();



		if (opcao == '1') {
			cout << "quantos livros voce deseja cadastrar\n\n";
			cin >> quantidade;
			quantidadeTotal = quantidadeTotal + quantidade;
			cin.ignore();
			system("cls");
			cadastrar(livro);

		}
		else if (opcao == '2') {
			system("cls");
			pesquisa(livro);

		}
		else if (opcao == '3') {
			system("cls");
			alterar(livro);

		}
		else if (opcao == '0') {
			cout << "tchau\n";
		}
		else {
			cout << "comando invalido. tente novamente";
		}

	}


}





