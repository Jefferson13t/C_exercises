#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// questao 1
struct Ponto {
	float x;
	float y;
    float distancia(Ponto& p);
    void atribuir(float a, float b);
};
//questao 2
    float Ponto::distancia(Ponto& p){
        return sqrt(pow(this->x - p.x ,2) + pow(this->y - p.y ,2));
    } 
//questao 3
    void Ponto::atribuir(float a, float b){
        this->x = a;
        this->y = b;
    }

//questao 4
struct Triangulo {
    Ponto a;
    Ponto b;
    Ponto c;
    void atribuir(float ax ,float ay ,float bx ,float by ,float cx ,float cy);
    float perimetro();
    float area();
    bool equilatero();
    bool semelhante(Triangulo& T);
};

void Triangulo::atribuir(float ax ,float ay ,float bx ,float by ,float cx ,float cy) {

    a.atribuir(ax,ay);
    b.atribuir(bx,by);
    c.atribuir(cx,cy);
}

//questao 5
float Triangulo::perimetro() {
    float distancia = 0;
    distancia += this->a.distancia(this->b);
    distancia += this->b.distancia(this->c);
    distancia += this->c.distancia(this->a);

    return distancia; 
}

//questao 6
    float Triangulo::area(){
        float base, altura;

        base = this->a.distancia(this->b);
        altura = this->a.distancia(this->c);

        return (base * altura) / 2;
    }

//questao 7 | 1 == true e 0 == false
    bool Triangulo::equilatero() {
        return (a.distancia(b) == a.distancia(c) == b.distancia(c)) ? 1 : 0;
    }

// questao 8 | 1 == true e 0 == false
    bool Triangulo::semelhante(Triangulo& T) {
        return (this->a.distancia(b) / T.a.distancia(b) == this->a.distancia(c) / T.a.distancia(c) == this->b.distancia(c) / T.b.distancia(c)) ? 1 : 0;
    }

//questao 9
struct Retangulo{
    Ponto a;
    Ponto b;
    Ponto c;
    Ponto d;
    void atribuir(float ax, float ay, float cx, float cy);
    float perimetro();
    float area();
    bool quadrado();

};
void Retangulo::atribuir(float ax, float ay, float cx, float cy) {
    this->a.atribuir(ax, ay);
    this->c.atribuir(cx, cy);
    this->b.atribuir(ax, cy);
    this->d.atribuir(cx, ay);
}

//questap 10
float Retangulo::perimetro() {
    return (a.distancia(b) + a.distancia(d)) * 2;
}

//questao 11
float Retangulo::area() {
    return a.distancia(b) * a.distancia(d);
}

//questao 12 | 1 == true e 0 == false 
bool Retangulo::quadrado(){
     
    return (a.distancia(b) == a.distancia(d)) ? 1 : 0;
}

//questao 13

struct Circunferencia {
    Ponto centro;
    float raio;
    void atribuir(float a,float b,float r);
    float perimetro();
    float area();
    bool contem(Ponto& p);
    bool contemTriangulo(Triangulo& T);
    bool contemRetangulo(Retangulo& R);
    bool pertence(Ponto& p);
    bool circunscritaTriangulo(Triangulo& T);
    bool circunscritaRetangulo(Retangulo& R);
};

void Circunferencia::atribuir(float a,float b,float r){
    this->centro.atribuir(a, b);
    this->raio = r;
}

//questao 14
float Circunferencia::perimetro(){

    return 2 * 3.1415 * this->raio; 
}

//questao 15
float Circunferencia::area(){

    return pow(3.1415 * this->raio, 2); 
}

//questao 16 | 1 == true e 0 == false
bool Circunferencia::contem(Ponto& p){
    return this->centro.distancia(p) <= this->raio ? 1 : 0;
}

// questao 17 | 1 == true e 0 == false
bool Circunferencia::contemTriangulo(Triangulo& T){
    return (this->centro.distancia(T.a) <= raio && this->centro.distancia(T.b) <= raio && this->centro.distancia(T.c) <= raio) ? 1 : 0;
}

// questao 18 | 1 == true e 0 == false
bool Circunferencia::contemRetangulo(Retangulo& R){
    return (this->centro.distancia(R.a) <= raio && this->centro.distancia(R.b) <= raio && this->centro.distancia(R.d) <= raio) ? 1 : 0;
}

//questao 19 | 1 == true e 0 == false
bool Circunferencia::pertence(Ponto& p) {
    return (centro.distancia(p)) == raio ? 1 : 0;
}

//questao 20 | 1 == true e 0 == false
bool Circunferencia::circunscritaTriangulo(Triangulo& T){

    return (centro.distancia(T.a) == raio && centro.distancia(T.b) == raio && centro.distancia(T.c) == raio)? 1 : 0;
}

//questao 21 | 1 == true e 0 == false
bool Circunferencia::circunscritaRetangulo(Retangulo& R){

    return (centro.distancia(R.a) == raio && centro.distancia(R.b) == raio && centro.distancia(R.c) == raio && centro.distancia(R.d) == raio)? 1 : 0;
}


int main() {

    struct Circunferencia c;
    struct Retangulo R;
    float cx, cy, r;

    printf("Digite as coordenadas do centro e o raio: ");
    scanf("%f %f %f", &cx, &cy, &r);
    c.atribuir(cx, cy, r);

    R.atribuir(-2,2,2,-2);

    printf("%i", c.circunscritaRetangulo(R));

    return 0;
}