#include <iostream>
using namespace std;

int main(){
	
	int pc = 20;
	int numero = 0;
	int chances = 10;
	
	cout << "------------------------JOGUINHO DA ADIVINHACAO------------------------";
	cout << "\n";
	cout << "Eu estou pensando em um numero, vamos ver se voce consegue adivinhar!!!";
	cout << "\n";
	
	do{
		
		cout << "Digite um numero: ";
		cin >> numero;
		chances --;
		
		if(numero == pc)
		{
			chances = 0;
			printf("Parabens, voce venceu! O numero era %d\n",  pc);
			cout << "\n";
		}
		
		else if(numero > pc)
		{
			cout << "Tente um numero menor!!!", "\n";
			printf("Voce ainda possui %d\n chances.", chances);
		    cout << "\n";
		}
		
		else if(numero < pc)
		{
			cout << "Tente um numero maior!!!", "\n";
			printf("Voce ainda possui %d\n chances.", chances);
		    cout << "\n";
		}
		
		else if(chances == 0)
		{
			printf("Suas chances acabaram, o numero que eu estava pensado era: %d\n " , pc);
    		cout << "\n";
		}	
	} 
	
	while(chances >= 1);
		cout << "----------------------------FIM DO JOGO--------------------------------";
}