#include <iostream>

using namespace std;

string respuesta;
int nume;
int horaa;
string r;

class Aeropuerto {
    public:
        Aeropuerto();
        Aeropuerto(int,int,int,int);

        void setTotalAviones(int); //Nœmero total de aviones en el aeropuerto
		int getTotalAviones();
		void setHorario(int); //Hora al momento
		int getHorario();
        void setSalidas(int); //Salidas al momento
		int getSalidas();
		void setLlegadas(int); //Llegadas al momento
		int getLlegadas();

		void muestraDatos();
    private:
        int aviones;
        int horas;
        int salida;
        int entrada;

};

class Avion {
    public:
        Avion();
        Avion(int,string);

        void setNumVuelo(int); //Nœmero de vuelo para analizar
		int getNumVuelo();
        void setEntSal(string); //Evaluar si es un vuelo de lledgada o salida al aeropuerto
		string getEntSal();

        void muestraDatos();
    private:
        int numero;
        string es;

};

Aeropuerto::Aeropuerto(){
    aviones = 0;
    horas = 0;
    salida = 0;
    entrada = 0;
}

Aeropuerto::Aeropuerto(int av,int hr,int sal,int ent){
    aviones = av;
    horas = hr;
    salida = sal;
    entrada = ent;
}

void Aeropuerto::setTotalAviones(int av){
    aviones = av;
}

int Aeropuerto::getTotalAviones(){
    return aviones;
}

void Aeropuerto::setHorario(int hr){
    horas = hr;
}

int Aeropuerto::getHorario(){
    return horas;
}

void Aeropuerto::setSalidas(int sal){
    salida = sal;
}

int Aeropuerto::getSalidas(){
    return salida;
}

void Aeropuerto::setLlegadas(int ent){
    entrada = ent;
}

int Aeropuerto::getLlegadas(){
    return entrada;
}

void Aeropuerto::muestraDatos(){
    cout << "**********************************************" << endl;
    cout << "numero de aviones en el aeropuerto: " << aviones << "  " << endl;
    cout << "Hora al momento: " << horas << "  " <<endl;
    cout << "Salidas que estan ocurriendo al momento: " << salida << "  " <<endl;
    cout << "Entradas que estan ocurriendo al momento: " << entrada << "  " << endl;

}

Avion::Avion(){
    numero = 0;
    es = "sin numero";
}

Avion::Avion(int num, string o){
    numero=num;
    es=o;
}

void Avion::setNumVuelo(int num){
    numero=num;
}

int Avion::getNumVuelo(){
    return numero;
}

void Avion::setEntSal(string o){
    es=o;
}

string Avion::getEntSal(){
    return es;
}

void Avion::muestraDatos(){
    cout << "**********************************************" << endl;
    cout << "Aqui aparecera tu numero de vuelo: " << numero <<"  " << endl;
    cout << "Aqui aparecera si tu vuelo es de llegada o salida al AICM: " << es <<"  " << endl;
    cout << "**********************************************" << endl;
}



int main()
{

Aeropuerto usuario(200,8,12,11);
cout << "Bienvenidx a la base de datos del AICM" << endl;
usuario.muestraDatos();
Avion user(1234,"Entrada");
user.muestraDatos();



do{
        cout<<"Ahora que conoce la informacion al momento podra colocar sus datos a evaluar"<< endl;
        cout << "Ingrese su numero de vuelo: ";
        cin >> nume;
        cout << "Ingrese unicamente la hora sin minuto al momento y en 24 horas: ";
        cin >> horaa;
        if (horaa<22 and horaa>7){
            cout<<"Usted no puede agregar otro vuelo, debido al horario"<<endl;
        }else {
            cout<<"Esta dentro del rango de horario para solicitar un vuelo"<<endl;
            cout<<"Quiere agregar un vuelo?"<<"(si/no)" << endl;
            cin >> r;
            if (r=="si"){
                cout<<"Funcionamos con 61 operaciones y al momento hay registradas 23 como aparece arriba, 12 salidas y 11 entradas"<<endl;
                cout<<"Ahora queda registradx, gracias"<<endl;
            }else {
                cout<<"Gracias, vuelva pronto"<<endl;
            }
        }



        cout << "¿Desea conocer el estatus de otro vuelo? " << "(si/no)" << endl;
        cin >> respuesta;


} while(respuesta == "si"); //repetir el proceso siempre el usario quiera

}
