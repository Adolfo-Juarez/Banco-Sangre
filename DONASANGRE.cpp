#include <iostream> //Librerias
#include <cctype>
using namespace std; //Cabecera

bool edadCheck, presionCheck, horaCheck, ayunoCheck, practicasCheck, enfermedadCheck; // Booleanos como revisores de las funciones

void edadPeso (){ //Funcion 1: Entrada de datos de la edad y peso [SIN ERRORES CRÍTICOS]
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
            if (estatura > 100){
                estatura = estatura / 100;
            }
            
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

void presionArterial (){ //Función 2: Validación de la presion arterial [SIN ERRORES CRÍTICOS]
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
        if (ayuda == false){ //Una comparativa simple para soluccionar un bug XD
        cout << "Su presión arterial es demasiada alta, no puede completar el resgistro" << endl;
        }
    }

    } while (sistolica == 0); // Si el primer dato es 0, significa que el usuario pidió ayuda, se muestra de nuevo las instrucciones
    
}

void horasDeSuenio(){ //Fución 3: Validar horas de sueño [SIN ERRORES CRÍTICOS]
	int horas;
    cout<< "Indique cuánto durmió antes del examen"<<endl;
    do {
        cin>> horas;
        if (horas > 4 && horas < 24){
            cout<<"Tiempo de sueño aprobado"<<endl; //En los mensajes cout sí permite la colocación de la letra ñ
            horaCheck = true;
        }
        else{
            cout<<"El valor indicado no es válido"<<endl;
        }
    }while(horas < 1 || horas > 24);
}

void tiempoDeAyuno(){ //Función 4: Validación del tiempo de ayuno [SIN ERRORES CRITICOS]
	int ayuno;
	cout<<"¿Cuánto tiempo lleva en ayuno?"<<endl;
	do{
	cin>> ayuno;
	if (ayuno == 8 ){
		cout<<"Tiempo de ayuno adecuado"<<endl;
        ayunoCheck = true;
	}
	else{
		cout<<"El tiempo de ayuno no es indicado para el examen, por favor ingrese una cantidad válida"<<endl; // Puse la instruccion de ingresar una cantidad nueva porque se veía rara
	}
	}while (ayuno <= 7 or ayuno >= 9);
	
}

void practicasRiesgo (){ //Función 5: Conocer sus últimas actividades peligrosas del donante
    int eleccion;
    do {
    cout << "¿Ha practicado alguno de los siguientes procedimientos en el ultimo anio?"<< endl;
    cout << " \n Tatuajes \n Perforaciones \n Depilación láser \n Otra condicíón médica invasiva(el cuerpo fue invadido o penetrado con una aguja, sonda, etc.)" << endl;
    cout<< "1= SI  2 = No"<<endl;
    	practicasCheck = false;
        cin >> eleccion;
        if (eleccion==2){
        	practicasCheck = true;
		}
		if(eleccion==1){
			practicasCheck=false;
		}
		else{
			cout<<"respuesta invalida elija nuevamente"<<endl;
		}
    } while (eleccion< 1 || eleccion != 2);
    
}

void padecimientoCronico (){ //Función 6: Conocer si tiene alguna enfermedad con tratamiento a largo plazo
	int tipoPadecimiento, respuesta, aniosEnfermo;
	do{
        enfermedadCheck== false;
        cout<<"¿Padece alguna enfermedad cronica?\n 1= SI 2= NO"<<endl;
        cin>> respuesta;
        if(respuesta==1){
            cout<<" Elija una de las siguientes"<<endl;
            cout<<"1._ Hepatitis tipo: A\n 2._ Hepatitis tipo: B\n 3._ Hepatitis tipo: C\n 4._ Hepatitis tipo: D\n 5._ Hepatitis tipo: E\n 6._ Epilepsia\n 7._ Enfermedad del corazon\n 8._ Otra enfermedad que amerite tratamiento a largo plazo"<<endl;
            cin>>tipoPadecimiento;
        
            if(tipoPadecimiento==1|| tipoPadecimiento==3||tipoPadecimiento==2||tipoPadecimiento==4||tipoPadecimiento==5||tipoPadecimiento==6||tipoPadecimiento==7||tipoPadecimiento==8){
                cout<<"¿Ha qué edad fue diagnosticado con esta enfermedad?"<<endl;
                cin>>aniosEnfermo;
                    if(aniosEnfermo<=10){
                        cout<<"Usted aun puede donar"<<endl;
                        enfermedadCheck=true;
                    }
                    else{
                        cout << "Sus datos han sido guardado con éxito"<< endl;
                        enfermedadCheck=false;
                    }
            }
        }
        if (respuesta == 2) {
            cout << "Sus datos han sido guardado con éxito"<< endl;
            enfermedadCheck=false;
        }
        else{
            cout<<"respuesta invalida, elija otra vez"<<endl;
                enfermedadCheck=false;
        }
    }while(respuesta>2 || respuesta<1);
}

int main (){
    //edadPeso ();
    //horasDeSuenio();
    //tiempoDeAyuno();
    //presionArterial ();
    do{
    padecimientoCronico();
    }while (horaCheck == false);
    
}