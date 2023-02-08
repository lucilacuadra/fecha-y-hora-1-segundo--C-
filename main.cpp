#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
/*Hacer un programa que ingrese por teclado la fecha en tres variables
(dia,
mes y año) y la hora en tres variables (hora,
minuto,
segundo) actual y muestre en pantalla la fecha y la hora con el siguiente formato DD/MM/AAAA HH:MM:5S después de
transcurrido un segundo.
Suponer que los datos ingresados corresponden a una fecha y hora correctos
Ejemplo:
Ingrese la fecha: 31 3 2022
Ingrese la hora: 23 59 59
Fecha y hora ingresadas
31/03/2022 23:59:59
Después de incrementar un segundo
01/04/2022 00:00:00*
*/

int main()
{

int dia, mes, anio, hora, minuto, segundo, segundoinc, horainc, minutoinc, diainc, mesinc, anioinc;

cout << "ingrese dia: ";
cin >> dia;
cout << "ingrese mes: ";
cin >> mes;
cout << "ingrese anio: ";
cin >> anio;
cout << "ingrese hora: ";
cin >> hora;
cout << "ingrese minuto: ";
cin >> minuto;
cout << "ingrese segundo: ";
cin >> segundo;
segundoinc = (segundo+1);
minutoinc = (minuto+1);
horainc = (hora+1);
diainc = (dia+1);
mesinc = (mes+1);
anioinc = (anio+1);


        if (hora >= 00 && hora <= 23){

        if (minuto >= 00 && minuto <= 59){

        if (segundo >= 00 && segundo <= 59 ) {


        if (dia >=1 && dia <= 31 && mes >=1 && mes <=12){
        if ( mes == 4 || mes == 6 || mes == 9|| mes == 11){
        if ( dia >= 1 && dia <= 30){

            cout << "fecha y hora ingresadas:" << dia <<"/"<<mes<<"/"<<"/"<<anio<<" "<<hora<<":"<<minuto<<":"<<segundo<<endl;
            cout << "Después de incrementar un segundo: "<< diainc<<"/"<<mesinc<<"/"<<"/"<<anioinc<<" "<<horainc<<":"<<minutoinc<<":"<<segundoinc<<endl;
            }

       }}


       if (dia >=1 && dia <= 31 && mes >=1 && mes <=12){
       if (mes == 1 || mes == 3 || mes == 5|| mes == 7 || mes == 8|| mes == 10 || mes == 12){
       if ( dia >= 1 && dia <= 31){

            cout << "fecha y hora ingresadas:" << dia <<"/"<<mes<<"/"<<"/"<<anio<<" "<<hora<<":"<<minuto<<":"<<segundo<<endl;
           cout << "Después de incrementar un segundo: "<< dia <<"/"<<mes<<"/"<<"/"<<anio<<" "<<hora<<":"<<minuto<<":"<<segundoinc<<endl;
            }

       }}


        if (dia >=1 && dia <= 29 && mes == 2){


            cout << "fecha y hora ingresadas:" << dia <<"/"<<mes<<"/"<<"/"<<anio<<" "<<hora<<":"<<minuto<<":"<<segundo<<endl;
            cout << "Después de incrementar un segundo: "<< dia <<"/"<<mes<<"/"<<"/"<<anio<<" "<<hora<<":"<<minuto<<":"<<segundoinc<<endl;
            }

                if (segundo == 59){
                segundoinc = (segundoinc * 0);
                minutoinc = (minuto+1);

                if (minuto == 59) {
                minuto == 00;
                horainc = (hora+1);
                if (horainc == 24) {
                diainc;
                if (diainc == 31 || diainc == 32){
                mesinc;
                if (mesinc == 13 ){
                    anioinc;}}}}}


       }}}

       else {cout << "fecha ingresada incorrecta.";}



       return 0; }
