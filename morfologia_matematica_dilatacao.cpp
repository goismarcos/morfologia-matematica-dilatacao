#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <math.h>
using namespace std;

int main() 
{
	int ordem_matriz;
	int pontos_a= 100, pontos_b= 100, k=0;
	pair<int, int> x_y_a[pontos_a];//pontos da matriz A
	pair<int, int> x_y_b[pontos_b];//pontos da matriz B
	pair<int, int> resultado[100];//resultado da soma da matriz 
	
	//inserindo a ordem da matriz
	cout << "Ordem da matriz: ";
	cin >>ordem_matriz;
	
	//quantidade de pontos pretos na matriz A
	cout << "Quantidade de pontos pretos na matriz A: ";
	cin >> pontos_a;
	
	//pengando as codenadas dos pontos pretos na matriz A
	for(int i = 0; i < pontos_a; i++)
	{
		int x, y;
		
		cout << "informe o "<< i+1 <<"º X: ";
		cin >> x;
		cout << "Informe o"<< i+1 <<"º Y: ";
		cin >> y;
		x_y_a[i] = make_pair(x,y);
		
		//cout << "("<< x_y_a[i].first << "," << x_y_a[i].second << ")\n"; 
	}	
	
	//---------------------------------------------------------------------------
	
	//quantidade de pontos pretos na matriz B
	cout << "Quantidade de pontos pretos na matriz B:";
	cin >> pontos_b;
	
	//pegando as cordenadas dos pontos pretos na matriz B
	for(int i = 0; i < pontos_b; i++)
	{
		int x, y;
		cout << "informe o "<< i+1 <<"º X: ";
		cin >> x;
		cout << "Informe o"<< i+1 <<"º Y:";
		cin >> y;
		x_y_b[i] = make_pair(x,y);
		
		//cout << "("<< x_y_b[i].first << "," << x_y_b[i].second << ")\n"; 
	}
	
	//mostrando os pontos da matriz A
	for(int i = 0; i < pontos_a; i++)
	{	
		cout << "("<< x_y_a[i].first << "," << x_y_a[i].second << ") || "; 
	}
	
	cout << "\n----------------------------------------------------------\n";
	
	//mostrando os pontos da matriz B
	for(int i = 0; i < pontos_b; i++)
	{	
		cout << "("<< x_y_b[i].first << "," << x_y_b[i].second << ") || "; 
	}
	
	cout << "\n----------------------------------------------------------\n";
	//----------------------------------------------------------------------------
	
	//percorrendo as matrizes para fazer a dilatação
	for(int i = 0; i < pontos_b; i++)
	{
		for(int j = 0; j < pontos_a; j++)
		{
			int x, y;
			
			//pegando o resultado do ponto x
			x = x_y_b[i].first + x_y_a[j].first;
			//pegando o resultado do ponto y
			y = x_y_b[i].second + x_y_a[j].second;
			
			//setando no resultado os valores de xy
			resultado[k] = make_pair(x,y);
			
			//cout << "("<< x_y_a[j].first << "," << x_y_a[j].second << ") + "; 
			//cout << "("<< x_y_b[i].first << "," << x_y_b[i].second << ") = ";
			//mostrando o resultado
			cout << "("<< resultado[k].first << "," << resultado[k].second <<") || ";
			k++;
		}
		cout << "\n----------------------------------------------------------\n";
	}
	
    return 0;
}
	
	
	
