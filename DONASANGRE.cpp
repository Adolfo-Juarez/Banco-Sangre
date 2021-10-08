#include <iostream>
using namespace std;

bool edadCheck, presionCheck, horaCheck, ayunoCheck; // Booleanos como revisores de las funciones

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
             edadCheck = true; //Junto al mensaje de registro exitoso, validamo el revisor de esta función
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
    bool ayuda; //Revisor de ayuda: Se activa cuando el usuario presiona 0 para solicitar ayuda
    do {
    cout << "Mida su presion arterial y llene le siguiente formulario \n Ingrese su presion Sistólica \n Presione 0 para ayuda:" << endl;
    cin >> sistolica;
    ayuda = false; //Se reestablece el revisor
    cout << endl;

    if (sistolica == 0){
        ayuda = true; // Si seleccionó 0, se activa el revisor de ayuda y evita que pida el siguiente dato
        cout << "Su presion es medida con un número con el siguiente formato: 120 / 80 mm Hg \n donde: 120 es la presión sistólica y 80 la presión Diastólica \n" << endl;
    }

    if (ayuda == false){
    cout << "Ingrese su presión Diastólica: " << endl;
    cin >> diastolica;
    }

    if (sistolica <= 120 && diastolica <= 80 && ayuda == false){ // Se valida que la presion no supere el límite normal (120/80)
        if (sistolica >= 90 && diastolica >= 60 && ayuda == false){ // Se valida que no esté por debajo del mínimo normal (90/60)
            cout << "Su presión arterial es normal \n Sus datos han sido guardado con éxito" <<endl;
            presionCheck = true;
        }
        else {
            cout << "Su presión arterial es demasiada baja, no puede completar el registro" << endl;
        }
    }
    else {
        if (ayuda == false){ //Una comparativa simple para soluccionar el bug XD
        cout << "Su presión arterial es demasiada alta, no puede completar el resgistro" << endl;
        }
    }

    } while (sistolica == 0); // Si el primer dato es 0, significa que el usuario pidió ayuda, se muestra de nuevo las instrucciones
    
}

void horasDeSuenio(){
	int horas;
    cout<< "Indique cuánto durmió antes del examen"<<endl;
    do {
        cin>> horas;
        if (horas >= 5 or horas<= 24){
            cout<<"Tiempo de sueño aprobado"<<endl; //En los mensajes cout sí permite la colocación de la letra ñ
            horaCheck = true;
        }
        else{
            cout<<"El valor indicado no es válido"<<endl;
            cout<<"Ingrese otro valor nuevamente"<<endl;
        }
    }while(horas < 1 || horas > 24);
}

void tiempoDeAyuno(){
	int ayuno;
	cout<<"¿Cuánto tiempo lleva en ayuno?"<<endl;
	do{
	cin>> ayuno;
	if (ayuno> 7 && ayuno < 10 ){
		cout<<"Tiempo de ayuno adecuado"<<endl;
        ayunoCheck = true;
	}
	else{
		cout<<"El tiempo de ayuno no es indicado para el examen, por favor ingrese una cantidad válida"<<endl; // Puse la instruccion de ingresar una cantidad nueva porque se veía rara
	}
	}while (ayuno<1 or ayuno> 10);
	
}

int main (){
    edadPeso ();
    horasDeSuenio();
    tiempoDeAyuno();
    presionArterial ();
}