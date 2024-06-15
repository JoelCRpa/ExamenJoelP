#include <cstdio>
#include <cstdlib>
#include <ctime>

void analizarCalidadAire(double pm25) {
    if (pm25 >= 0 && pm25 <= 12) {
        system("cls");
		printf("Calidad del aire: Buena.\n");
        printf("La calidad del aire se considera satisfactoria y no representa ningun riesgo para la salud.\n");
        printf("Se ha enviado un reporte a las autoridades comunicando el estado correcto.\n");
		
        
    } else if (pm25 >= 12.1 && pm25 <= 35.4) {
        system("cls");
		printf("Calidad del aire: Moderada.\n");
    	printf("La calidad del aire es aceptable, para algunos contaminantes puede haber una preocupacion moderada para un pequeno numero de personas sensibles.\n");
    	printf("Se ha enviado un reporte a las autoridades comunicando el estado con un poco de alteracion.\n");

		
	} else if (pm25 >= 35.5 && pm25 <= 55.4) {
		system("cls");
        printf("Calidad del aire: Poco saludable. \n");
        printf("para grupos sensibles. Miembros de grupos sensibles pueden experimentar efectos en la salud. La poblacion en general no es probable que se vea afectada.\n");
        printf("Se ha enviado un reporte a las autoridades comunicando el estado actual.\n");

    
	} else if (pm25 >= 55.5 && pm25 <= 150.4) {
		system("cls");
 		printf("Calidad del aire: Poco saludable.\n");
		printf("Todos pueden comenzar a experimentar efectos en la salud,miembros de grupos sensibles pueden experimentar efectos mas graves.\n");
		printf("Se ha enviado un reporte a las autoridades de manera urgente.\n");

		
    } else if (pm25 >= 150.5 && pm25 <= 250.4) {
		system("cls");    	
        printf("Calidad del aire: Muy poco saludable.\n");
        printf("Advertencias de salud de condiciones de emergencia. Toda la población tiene probabilidades de verse afectados.\n");
        printf("URGENTE: Se remite informe a las autoridades y puestos de salud.\n");


    } else if (pm25 >= 250.5 && pm25 <= 500) {
		system("cls");    	    	
        printf("Calidad del aire: Peligroso.\n");
        printf("Alerta sanitaria: todos pueden experimentar efectos más graves en la salud.\n");
        printf("CRITICO: Mnatener medidas, se remite informe a la Comisión Nacional de Emergencias, las Autoridades y puestos de Salud.\n");

        
    } else {
        printf("Valor de PM2.5 fuera de rango. Por favor, ingrese un valor valido.\n");
    }
}

void analizarHumedad(double humedad) {
	int opcionCall;
    if (humedad >= 0 && humedad <= 30) {
		system("cls");    	    	
        printf("Humedad Baja\n");
        printf("Salud: Puede causar sequedad en la piel, irritacion en los ojos y problemas respiratorios.\n");
        printf("Ambiente: Erosion del suelo, la vegetacion pierda agua rapidamente, Riesgo de incendio Forestal.\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}
        
    } else if (humedad >= 30.1 && humedad <= 50) {
    	        
 		system("cls");    	    	
        printf("Humedad Ideal\n");
        printf("Salud: Este rango es comodo para la mayoria de las personas y es ideal para interiores, previene problemas de humedad y el crecimiento de moho.\n");
        printf("Ambiente: Humedad ideal a nivel ambiental.\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}
        
    } else if (humedad >= 50.1 && humedad <= 60) {
        
 		system("cls");    	    	
        printf("Humedad Moderadamente Alta\n");
        printf("Salud: Todavia aceptable, pero puede empezar a sentirse incómodo para algunas personas y puede favorecer el crecimiento de moho y acaros del polvo.\n");
        printf("Ambiente: aumento de Algas, moho, acaros del Polvo  y Hongos.\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}
			
    } else if (humedad >= 60.1 && humedad <= 70) {
    	
    	
        printf("Humedad Alta: Se siente pegajoso e incómodo, y puede causar problemas con moho, hongos y ácaros del polvo.\n");
        
		system("cls");    	    	
        printf("Humedad Alta\n");
        printf("Salud: Se siente pegajoso e incomodo, y puede causar problemas con moho, hongos y acaros del polvo.\n");
        printf("Ambiente: aumento de algas, moho, acaros del Polvo, hongos y puede influir en la calidad del agua y afectar a los organismos acuaticos\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}        

    } else if (humedad > 70) {        
 		system("cls");    	    	
        printf("Humedad Muy Alta\n");
        printf("Salud: Muy incomodo y puede ser perjudicial para la salud empeorando condiciones respiratorias como el asma y alergias..\n");
        printf("Ambiente: aumento de algas, moho, acaros del Polvo, hongos, bacterias, microorganismos y puede influir en la calidad del agua y afectar a los organismos acuaticos\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}           
        
    } else {
        printf("Valor de Humedad fuera de rango. Por favor, ingrese un valor válido.\n");
    }
}

void analizarTemperatura(double temperatura) {
	int opcionCall;
   if (temperatura < 0) {
        system("cls");    	    	
        printf("Muy frio\n");
        printf("Salud: puede haber riesgo de hipotermia, especialmente si la exposición al frío es prolongada. Las extremidades pueden volverse entumecidas, y existe un mayor riesgo de congelación de la piel si no se protege adecuadamente..\n");
        printf("Ambiente: Menos de 0 C (32 F). En esta temperatura, es probable que haya nieve y hielo\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}           
        
    } else if (temperatura >= 0 && temperatura <= 10) {        
        system("cls");    	    	
        printf("frio\n");
        printf("Salud: la exposicion prolongada a estas temperaturas sin la vestimenta adecuada puede llevar a resfriados, congelación superficial de la piel y un mayor riesgo de enfermedades respiratorias..\n");
        printf("Ambiente: De 0 C a 10 C (32 F a 50 F). Esta temperatura puede ser fresca pero no extremadamente fria\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}                  
        
    } else if (temperatura > 10 && temperatura <= 20) {        
        system("cls");    	    	
        printf("Templado fresco\n");
        printf("Salud: Aquellos que son sensibles a los cambios de temperatura pueden experimentar molestias leves, como nariz congestionada o dolor de garganta.\n");
        printf("Ambiente: De 10 C a 20 C (50 F a 68 F). Esta es una temperatura agradable\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}                 
        
    } else if (temperatura > 20 && temperatura <= 30) {        
        system("cls");    	    	
        printf("Templado calido\n");
        printf("Salud: En este rango, el cuerpo puede sentirse comodo, pero en climas muy humedos, puede haber riesgo de deshidratacion si no se bebe suficiente agua. Tambien puede haber molestias por sudoracion excesiva.\n");
        printf("Ambiente: De 20 C a 30 C (68 F a 86 F). Es una temperatura calida pero no excesivamente caliente, tipica de los veranos en muchas areas\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}           
        
    } else if (temperatura > 30 && temperatura <= 40) {        
        system("cls");    	    	
        printf("Caluroso\n");
        printf("Salud: En estas temperaturas, existe un riesgo significativo de golpe de calor si no se toman precauciones. Los sintomas incluyen mareos, fatiga, náuseas y en casos graves, perdida del conocimiento. Es importante mantenerse hidratado y evitar la exposicion prolongada al sol..\n");
        printf("Ambiente: De 30 C a 40 C (86 F a 104 F). Esta temperatura es bastante caliente y puede ser incomoda para algunas personas, especialmente si hay humedad\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}             
    } else if (temperatura > 40) {        
        system("cls");    	    	
        printf("Muy caluroso\n");
        printf("Salud: Pueden provocar golpe de calor, agotamiento por calor, quemaduras solares graves e incluso daño organico si no se busca atencion medica adecuada y se toman medidas para enfriar el cuerpo y mantenerlo hidratado.\n");
        printf("Ambiente: Más de 40 C (104 F). Estas temperaturas son extremadamente calurosas y pueden representar riesgos para la salud si no se toman precauciones adecuadas\n");
        printf("1- NOTIFICAR\n");
        printf("2- OMITOR\n");
        scanf("%d", & opcionCall);
			if (opcionCall == 1){
				system("cls");    	    	
        		printf("Se ha enviado un reporte a las autoridades, Gracias por unirte a la causa\n");
			} else if(opcionCall == 2){
				system("cls");    	    	
        		printf("De existir un riesgo en la zona se agradece realizar el reporte. \n");				
			} else{
        		printf("Ingrese un valor valido");
			}                         
    } else {
        printf("La temperatura ingresada no corresponde a los rangos definidos.\n");
    }

}

void contaminantesagua(double agua) {
	int opcionCall;
   
    if (agua < 1) {
        printf("Agua potable segura: Menos de 1 mg/L de contaminantes totales.\n");
        printf("Se ha enviado un reporte a las autoridades comunicando el estado correcto.\n");
    } else if (agua >= 1 && agua <= 10) {
        printf("Agua ligeramente contaminada: De 1 a 10 mg/L de contaminantes totales.\n");
        printf("Se ha enviado un reporte a las autoridades para validar.\n");
    } else if (agua > 10 && agua <= 100) {
        printf("Agua moderadamente contaminada: De 10 a 100 mg/L de contaminantes totales.\n");
        printf("Se ha enviado un reporte de manera inmediata para la validacion del estado del agua.\n");
    } else if (agua > 100 && agua <= 1000) {
        printf("Agua altamente contaminada: De 100 a 1000 mg/L de contaminantes totales.\n");
        printf("Se ha enviado un reporte de manera urgente para la validacion del estado del agua.\n");
    } else if (agua > 1000) {
        printf("Agua extremadamente contaminada: Mas de 1000 mg/L de contaminantes totales.\n");
        printf("CRITICO se ha escalado el caso con las autoridades correspondientes.\n");
    } else {
        printf("La cantidad de contaminantes ingresada no corresponde a los rangos definidos.\n");
    }
}


int main() {
    int opcion1, opcion2;
    double pm25, humedad, temperatura, agua;

    while (true) {
    	
        printf("***************************+\n");
        printf("Menu Principal\n");
        printf("***************************+\n");
        printf("1. Contaminacion del Aire\n");
        printf("2. Humedad\n");
        printf("3. Temperatura\n");
        printf("4. Nivel de contaminacion del agua\n");
        printf("***************************+\n");        
        printf("5. Salir\n");
        printf("***************************+\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion1);
		system("cls");
        if (opcion1 == 1) {
            printf("\nMenu Aire\n");
            printf("1. Aire en tiempo real\n");
            printf("2. Consulta\n");
            printf("Seleccione una opcion: ");
            scanf("%d", &opcion2);

            if (opcion2 == 1) {
                srand((unsigned int)time(0));
                pm25 = rand() % 501; // Generar valor entre 0 y 500
                printf("\nValor PM2.5 en tiempo real: %.2f µg/m³\n", pm25);
                analizarCalidadAire(pm25);
            } else if (opcion2 == 2) {
                printf("\nIngrese el valor de PM2.5: ");
                scanf("%lf", &pm25);
                analizarCalidadAire(pm25);
            } else {
                printf("Opción no válida. Por favor, intente nuevamente.\n");
            }
        } else if (opcion1 == 2) {
            printf("\nMenu Humedad\n");
            printf("1. Humedad en tiempo real\n");
            printf("2. Consulta\n");
            printf("Seleccione una opcion: ");
            scanf("%d", &opcion2);

            if (opcion2 == 1) {
                srand((unsigned int)time(0));
                humedad = rand() % 101; // Generar valor entre 0 y 100
                printf("\nValor de Humedad en tiempo real: %.2f%%\n", humedad);
                analizarHumedad(humedad);
            } else if (opcion2 == 2) {
                printf("\nIngrese el valor de Humedad: ");
                scanf("%lf", &humedad);
                analizarHumedad(humedad);
            } else {
                printf("Opción no válida. Por favor, intente nuevamente.\n");
            }
        } else if (opcion1 == 3) {
            printf("\nMenu Temperatura\n");
            printf("1. Temperatura en tiempo real\n");
            printf("2. Consulta\n");
            printf("Seleccione una opcion: ");
            scanf("%d", &opcion2);

            if (opcion2 == 1) {
                srand((unsigned int)time(0));
                temperatura = (rand() % 101) - 50; // Generar valor entre -50 y 50
                printf("\nValor de Temperatura en tiempo real: %.2f°C\n", temperatura);
                analizarTemperatura(temperatura);
            } else if (opcion2 == 2) {
                printf("\nIngrese el valor de Temperatura: ");
                scanf("%lf", &temperatura);
                analizarTemperatura(temperatura);
            } else {
                printf("Opción no válida. Por favor, intente nuevamente.\n");
            }
        } else if (opcion1 == 4) {
 			printf("\nMenu Nivel de contaminacion del agua\n");
            printf("1. Validacion en tiempo real\n");
            printf("2. Validar modo Consulta\n");
            printf("Seleccione una opcion: ");
            scanf("%d", &opcion2);       	
        
			if (opcion2 == 1) {
                srand((unsigned int)time(0));
                agua = (rand() % 1001); // Generar valor entre 0-1000
                printf("\nValor de Temperatura en tiempo real: %.2f°C\n", agua);
                contaminantesagua(agua);
            } else if (opcion2 == 2) {
                printf("\nIngrese el valor de Contaminacion del agua  ");
                scanf("%lf", &agua);
                contaminantesagua(agua);
            } else {
                printf("Opcion no valida. Por favor, intente nuevamente.\n");
            }
            
        } else if (opcion1 == 5){
 			printf("Saliendo del programa...\n");
        	break;       	
        	
		}

		
		else {
            printf("Opción no válida. Por favor, intente nuevamente.\n");
        }

        printf("\n");
    }

    return 0;
}

