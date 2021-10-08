#include <iostream>
using namespace std;

bool EdadCheck, presionCheck, horaCheck, AyunoCheck; //Hola2

void edadPeso (){ //Proceso de entrada de datos de la edad y peso
    int edad, peso;
    float estatura;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    if (edad >= 18 && edad <= 65){ //Se valida si cumple la edad para continuar con el siguiente dato
        cout << "Ingrese su peso: " << endl;
        cin >> peso;

        if (peso > 50){ //Se valida si cumple el peso para continuar con el siguiente dato
            cout << "Ingrese su estatura en metros: "<< endl;
            cin >> estatura;
            
            if (estatura >= 1.5){ //Se valida si cumple la estatura para continuar con el siguiente dato
             cout << "Sus datos han sido guardados exitosamente" << endl;   
            }

            /* ELSE: MENSAJES DE ERROR Y TERMINACION DE PROCESO */
            else {
                cout << "Ustede debe medir al menos 1.50 m para completar el registro" << endl;
            }
        }
        else {
            cout << "Su peso debe ser superior a los 50 kilogramos para completar el resgistro" << endl;
        }
    }
    else {
        cout << "Ustede debe ser mayor de 18 años y menor de 65 para completar el registro" << endl;
    }
}

void presionArterial (){ //Proceso validación de la presion arterial
    int sistolica, diastolica; 
    bool ayuda;
    do {
    cout << "Mida su presion arterial y llene le siguiente formulario \n Ingrese su presion Sistólica \n Presione 0 para ayuda:" << endl;
    cin >> sistolica;
    ayuda = false;
    cout << endl;

    if (sistolica == 0){
        cout << "Su presion es medida con un número con el siguiente formato: 120 / 80 mm Hg \n donde: 120 es la presión sistólica y 80 la presión Diastólica" << endl;
        ayuda = true;
    }

    if (ayuda == false){
    cout << "Ingrese su presión Diastólica: " << endl;
    cin >> diastolica;
    }

    if (sistolica <= 120 && diastolica <= 80 && ayuda == false){
        if (sistolica >= 90 && diastolica >= 60 && ayuda == false){
            cout << "Su presión arterial es normal \n Sus datos han sido guardado con éxito" <<endl;
        }
        else {
            cout << "Su presión arterial es demasiada baja, no puede completar el registro" << endl;
        }
    }
    else {
        cout << "Su presión arterial es demasiada alta, no puede completar el resgistro" << endl;
    }

    } while (sistolica == 0);
    
}

void horasDeSuenio(){
	int horas;
cout<< "indique cuanto durmio antes del examen"<<endl;
do {
cin>> horas;
if (horas >= 5 or horas<= 24){
	cout<<"tiempo de suenio aprobado"<<endl;
}
	else{
	cout<<"el valor indicado no es valido"<<endl;
	cout<<"ingrese otro valor nuevamente"<<endl;
}
}while(horas < 1 || horas > 24);
}

void tiempoDeAyuno(){
	int ayuno;
	cout<<"cuanto tiempo lleva en ayuno?"<<endl;
	do{
	cin>> ayuno;
	if (ayuno> 7 && ayuno < 10 ){
		cout<<"tiempo de ayuno adecuado"<<endl;
	}
	else{
		cout<<"el tiempo de ayuno no es indicado para el examen"<<endl;
	}
	}while (ayuno<1 or ayuno> 10);
	
}

int main (){
    edadPeso ();
    horasDeSuenio();
    tiempoDeAyuno();
    presionArterial ();
}