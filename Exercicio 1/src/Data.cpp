#include "Data.h"


Data::Data(){
    dia = 1;
    mes = 1;
    ano = 2019;

}

Data::Data(int d, int m, int a){
    if(d > 0 && d <= 31){
        dia = d;
    }else{
        setDia(1);
    }
    if(m > 0 && m <= 12){
        setMes(m);
    }else{
        setMes(1);
    }
    if(a > 0){
        setAno(a);
    }else{
        setAno(1);
    }
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}

void Data::setDia(int d){
    dia = d;
}

void Data::setMes(int m){
    mes = m;
}

void Data::setAno(int a){
    ano = a;
}

void Data::avancarDia(){
    if(dia>0 && dia<31){
        dia++;
    }if(dia==31 && mes<12){
        dia=1;
        mes++;
    }
    if(dia==31 && mes==12){
        mes=1;
        dia=1;
        ano++;
    }

}
