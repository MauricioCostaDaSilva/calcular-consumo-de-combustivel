
#include <iostream>
 #include <locale.h>

using namespace std;

 main(){

    setlocale (LC_ALL, "portuguese");

   int tamanhodotanquedecombustivel, consumomedio, distanciapercorrida, valoremlitros;

    cout << "Informe o tamanho do tanque de combustível:";
    cin >> tamanhodotanquedecombustivel;

    cout << "Informe consumo médio do carro:";
    cin >> consumomedio;

    cout << "Informe distância percorrida:";
    cin >> distanciapercorrida;

    cout << "Informe valor em litro  do combustível:";
    cin >> valoremlitros;
    
     float LitrosNecessariosParaConcluirAViagem = distanciapercorrida / consumomedio;
     
     cout << "\nSerão necessarios " << LitrosNecessariosParaConcluirAViagem << " litros de combustivel  para completar a viagem.\n";
     
     float ReabastecimentosNecessarios= distanciapercorrida / tamanhodotanquedecombustivel;

	cout << "\nSerão necessarios " << ReabastecimentosNecessarios << " reabastecimentos  para completar a viagem.\n";

	float Valortotal= LitrosNecessariosParaConcluirAViagem * valoremlitros;

	cout << "\nO valor total gasto com o combustível sera de R$ " << Valortotal << "\n";
	
	 return 0;
}


