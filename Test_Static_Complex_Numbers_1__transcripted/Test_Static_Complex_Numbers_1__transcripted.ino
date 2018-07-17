#include <ArduinoSTL.h>
#include <vector>
#include <Arduino.h>
#include "complex.h"
#include <empty.h>
Complex _ComplexNumberLibAux;
using namespace std;

void Test_Static_Complex_Numbers_1(){
    long wireUID_427_ = 9600;
    Serial.begin(wireUID_427_);
    /***** BEGIN WhileLoop ********/
    bool wireUID_1076_ = false; //LoopEndRef.
    int iteratorUID_995 = 0; //loop iterator
    do{
     //shift register init and get front value
        long wireUID_2544_ = 3000;
        String wireUID_2237_;
        String wireUID_2231_;
        String wireUID_2173_ = ", phase: ";
        String wireUID_2124_ = "modulus: ";
        String wireUID_2093_;
        double wireUID_1518_;
        double wireUID_1483_;
        Complex wireUID_1249_;
        double wireUID_1044_ = 6.280000;
        double wireUID_1029_ = 6.280000;
        String wireUID_587_;
        String wireUID_574_;
        String wireUID_537_ = "num B: ";
        String wireUID_487_;
        String wireUID_1957_ = "num A: ";
        Complex wireUID_592_;
        String wireUID_1875_;
        Complex wireUID_603_;
        String wireUID_944_;
        Complex wireUID_630_;
        double wireUID_460_ = 126.300003;
        double wireUID_451_ = 7.330000;
        double wireUID_338_ = -12.300000;
        double wireUID_322_ = 1.100000;
        wireUID_603_ = Complex(wireUID_322_, wireUID_338_);
        _ComplexNumberLibAux = wireUID_603_;
        wireUID_487_ = String( _ComplexNumberLibAux.real()) + String(" i*") + String( _ComplexNumberLibAux.imag());
        wireUID_1875_ = wireUID_1957_ + wireUID_487_;
        Serial.println(wireUID_1875_);
        wireUID_592_ = Complex(wireUID_451_, wireUID_460_);
        _ComplexNumberLibAux = wireUID_592_;
        wireUID_574_ = String( _ComplexNumberLibAux.real()) + String(" i*") + String( _ComplexNumberLibAux.imag());
        wireUID_587_ = wireUID_537_ + wireUID_574_;
        Serial.println(wireUID_587_);
        wireUID_630_ = wireUID_603_ / wireUID_592_;
        _ComplexNumberLibAux = wireUID_630_;
        wireUID_944_ = String( _ComplexNumberLibAux.real()) + String(" i*") + String( _ComplexNumberLibAux.imag());
        Serial.println(wireUID_944_);
        wireUID_1249_ = Complex(wireUID_1044_, wireUID_1029_);
        wireUID_1483_ = wireUID_1249_.modulus();
        wireUID_1518_ = wireUID_1249_.phase();
        wireUID_2093_ = String(wireUID_1483_);
        wireUID_2231_ = String(wireUID_1518_);
        wireUID_2237_ = wireUID_2124_ + wireUID_2093_ + wireUID_2173_ + wireUID_2231_;
        Serial.println(wireUID_2237_);
        delay(wireUID_2544_);
         //C code
        
         //output assgn.
        iteratorUID_995++; //iterator increment
    }while(!wireUID_1076_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    Serial.end();
    
}

void setup(){}
void loop(){
    Test_Static_Complex_Numbers_1();
}
