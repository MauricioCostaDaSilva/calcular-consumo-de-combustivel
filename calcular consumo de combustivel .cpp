
#include <iostream>
 #include <locale.h>

using namespace std;

 main(){

    setlocale (LC_ALL, "portuguese");

   int tamanhodotanquedecombustivel, consumomedio, distanciapercorrida, valoremlitros;

    cout << "Informe o tamanho do tanque de combust�vel:";
    cin >> tamanhodotanquedecombustivel;

    cout << "Informe consumo m�dio do carro:";
    cin >> consumomedio;

    cout << "Informe dist�ncia percorrida:";
    cin >> distanciapercorrida;

    cout << "Informe valor em litro  do combust�vel:";
    cin >> valoremlitros;
    
     float LitrosNecessariosParaConcluirAViagem = distanciapercorrida / consumomedio;
     
     cout << "\nSer�o necessarios " << LitrosNecessariosParaConcluirAViagem << " litros de combustivel  para completar a viagem.\n";
     
     float ReabastecimentosNecessarios= distanciapercorrida / tamanhodotanquedecombustivel;

	cout << "\nSer�o necessarios " << ReabastecimentosNecessarios << " reabastecimentos  para completar a viagem.\n";

	float Valortotal= LitrosNecessariosParaConcluirAViagem * valoremlitros;

	cout << "\nO valor total gasto com o combust�vel sera de R$ " << Valortotal << "\n";
	
	 return 0;
}


