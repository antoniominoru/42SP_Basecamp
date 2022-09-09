Equipe:
Antonio
Luiza
Thayiná

1. initial_test 
	- verificação da quantidade de argumentos passados 
	- verificação da qtd. de números na string argumento

2. extract_rowcol
	- separar string em array de int
	- test(); 
	- alocar em matriz 4x4

2. test arr

	- teste de apenas números de 1 a 4
	- verificar vistas da mesma linha ou coluna (soma não pode ser maior que 5 && menor do que 3)
		- VISTAS DA MESMA COLUNA OU LINHA
		se v1 = 1 --> v2 = 2, 3, 4
		se v1 = 2 --> v2 = 1, 2, 3
		se v1 = 3 --> v2 = 1, 2
		se v1 = 4 --> v2 = 1 

3. prenchimento da matriz 
	
	- colocar 0 em todos os espaços da matriz 

	//fixos
		#1 analise_1 
		Ob4 = 1 2 3 4 
		Ob1 = 4

		#2 analise_2
		2 observadores  2-1    =  mais próximo do Ob2 é o 3  - 3xx4
		2 observadores  2-3    =  padrão x4xx (4 próximo do Ob2)
		2 observadores  3-2    =  padrão xx4x (4 próximo do Ob2)
		2 observadores  4-1    =  sequência #1
		 
		#3 
		- prenchimento do num que falta se tiver já 3 números na linha ou coluna (nao podendo repetir)

4. função putchar 

	- receber matriz de inteiros e converter para char 
	- printar os caracteres em sequência + \n 

=== POSIÇÕES ===

col1up [0][0]
col2up [0][1]
col3up [0][2]
col4up [0][3]
col1down [1][0]
col2down [1][1]
col3down [1][2]
col4down [1][3]
row1left [2][0]
row2left [2][1]
row3left [2][2]
row4left [2][3]
row1right [3][0]
row2right [3][1]
row3right [3][2]
row4right [3][3]

while (count_0 != 0)
{
	if ()
	aux_table(grid);
	rowcol_iteration(grid);
	count_0 = count_zero(grid);
}

while (count_0 != 0)
{
	- verificacão do numero de 0 em cada linha e na coluna
	- 


}